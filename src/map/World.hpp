#ifndef WORLD_HPP
#define WORLD_HPP

#include <list>
#include "./../entity/AbstractMob.hpp"
#include "./../entity/AbstractProjectile.hpp"
#include "./../entity/Character.hpp"

class World
{
private:
    int max_mobs;
    int max_projectiles;
    //TODO abstract projectiles
    std::list<AbstractProjectile*> projectiles;
    std::list<AbstractMob*> mobs;
    Character* player;
protected:
    void setMaxMobs(int max_mobs);
    void setMaxProjectiles(int max_projectiles);
    //*tick every entity
    void gametick();

public:
    World(    Character* player, int max_mobs = 120, int max_projectiles = 500);
    ~World();
    int getMaxMob();
    int getMaxProjectiles();
    //*new projectile on game
    void addProjectiles(AbstractProjectile* projectile);
    //*add new entity
    void addMob(AbstractMob* mob);
    void verifyCollision();
};

World::World(Character* player, int max_mobs, int max_projectiles)
{
    this->max_mobs = max_mobs;
    this->max_projectiles = max_projectiles;
};
World::~World()
{
    //*delete projectiles
    //TODO abstract projectile
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
    //TODO remove deads
    std::list<AbstractMob*>::iterator imobs;
    for (imobs = mobs.begin(); mobs.end() != imobs; ++imobs)
    {
        if (!(*imobs)->isToDiscard())
        {
            //TODO verify conllision
            
            //TODO tick every one
        }else
        {
            imobs = mobs.erase(imobs);
        }
    }
    mobs.clear();
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

#endif