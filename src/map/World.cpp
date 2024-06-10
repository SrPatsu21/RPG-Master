#include "World.hpp"


World::World(Character* player, int max_mobs, int max_projectiles)
{
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
    if (projectiles.size() < max_projectiles)
    {
        projectiles.push_back((projectile));
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
        if(player->getHitBox()->isColosionWithOther((*iprojectiles)->getHitBox()))
        {
            (*iprojectiles)->onCollision(player);
        }
        for (imobs = mobs.begin(); mobs.end() != imobs; ++imobs)
        {  
            if((*imobs)->getHitBox()->isColosionWithOther((*iprojectiles)->getHitBox()))
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