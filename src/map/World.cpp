#include "World.hpp"

//* force static init
World* World::world_ = NULL;

World* World::initWorld(Character* player, int max_mobs, int max_projectiles)
{
    if (world_ == NULL)
    {
        world_ = new World(player, max_mobs, max_projectiles);
    }else
    {
        world_->player = player;
        world_->max_mobs = max_mobs;
        world_->max_projectiles = max_projectiles;
    }
    return world_;
};

World::World(Character* player, int max_mobs, int max_projectiles)
{
    this->player = player;
    this->max_mobs = max_mobs;
    this->max_projectiles = max_projectiles;
};
World::~World()
{
    //*delete projectiles
    std::list<AbstractProjectile*>::iterator iprojectiles;
    for (iprojectiles = projectiles.begin(); projectiles.end() != iprojectiles; ++iprojectiles)
    {
        delete (*iprojectiles);
    }
    projectiles.clear();

    //*delete mobs
    std::list<AbstractMob*>::iterator imobs;
    for (imobs = mobs.begin(); mobs.end() != imobs; ++imobs)
    {
        delete (*imobs);
    }
    mobs.clear();
    //* player
    delete player;

};
void World::addProjectiles(AbstractProjectile* projectile)
{
    if (world_ != NULL)
    {
        if (world_->projectiles.size() < world_->max_projectiles)
        {
            world_->projectiles.push_back((projectile));
        }
    }
};
void World::addMob(AbstractMob* mob)
{
    if (mobs.size() < max_mobs)
    {
        mobs.push_back((mob));
    }
};
void World::gametick()
{
    tickEveryOne();
    verifyCollision();
    //* remove deads
    std::list<AbstractMob*>::iterator imobs;
    for (imobs = mobs.begin(); mobs.end() != imobs; ++imobs)
    {
        if ((*imobs)->isToDiscard())
        {
            imobs = mobs.erase(imobs);
        }
    }
};
void World::verifyCollision()
{
    std::list<AbstractMob*>::iterator imobs;
    std::list<AbstractProjectile*>::iterator iprojectiles;
    for (iprojectiles = projectiles.begin(); projectiles.end() != iprojectiles; ++iprojectiles)
    {
        if(player->getHitBox()->isCollidingWithOther((*iprojectiles)->getHitBox()))
        {
            (*iprojectiles)->onCollision(player);
        }
        for (imobs = mobs.begin(); mobs.end() != imobs; ++imobs)
        {  
            if((*imobs)->getHitBox()->isCollidingWithOther((*iprojectiles)->getHitBox()))
            {
                (*iprojectiles)->onCollision(*imobs); 
            };
        }
    } 
};
void World::tickEveryOne()
{
    //* random
    Randomizer::tick();
    //* tick player
    player->tick();  
    //* tick projectiles
    std::list<AbstractProjectile*>::iterator iprojectiles;
    for (iprojectiles = projectiles.begin(); projectiles.end() != iprojectiles; ++iprojectiles)
    {
        (*iprojectiles)->tick();
    }

    //* tick mobs
    std::list<AbstractMob*>::iterator imobs;
    for (imobs = mobs.begin(); mobs.end() != imobs; ++imobs)
    {
        (*imobs)->tick();
    }
}

int World::getMaxMob()
{
    return max_mobs;
};
int World::getMaxProjectiles()
{
    return max_projectiles;
};
void World::setMaxMobs(int max_mobs)
{
    this->max_mobs = max_mobs;
};
void World::setMaxProjectiles(int max_projectiles)
{
    this->max_projectiles = max_projectiles;
};