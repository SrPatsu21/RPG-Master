#ifndef WORLD_HPP
#define WORLD_HPP

#include <list>
#include "./../entity/AbstractMob.hpp"

class World
{
private:
    int max_mobs;
    int max_projectiles;
    int max_players;
    //TODO abstract projectiles
    std::list<AbstractCollisionableEntity*> projectiles;
    std::list<AbstractMob*> mobs;
    //? who is player
    std::list<AbstractCollisionableEntity*> players;
protected:
    void setMaxMobs(int max_mobs);
    void setMaxProjectiles(int max_projectiles);
    void setMaxPlayers(int max_players);
    //?add new player
    void addPlayers(HitBox* hitbox);
    //*tick every entity
    void gametick();

public:
    World(int max_mobs = 120, int max_projectiles = 500, int max_player = 20);
    ~World();
    int getMaxMob();
    int getMaxProjectiles();
    int getMaxPLayers();
    //*new projectile on game
    //TODO create a projectile
    void addProjectiles(HitBox* hitbox);
    //*add new entity
    void addMob(AbstractMob* mob);
    void verifyCollision();
};

World::World(int max_mobs, int max_projectiles, int max_players)
{
    this->max_mobs = max_mobs;
    this->max_projectiles = max_projectiles;
    this->max_players = max_players;
};
World::~World()
{
    //*delete projectiles
    //TODO abstract projectile
    std::list<AbstractCollisionableEntity*>::iterator iprojectiles;
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

    //? who is player
    std::list<AbstractCollisionableEntity*>::iterator iplayers;
    for (iplayers = players.begin(); players.end() != iplayers; ++iplayers)
    {
        delete (*iplayers);
    }
    players.clear();
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
    std::list<AbstractCollisionableEntity*>::iterator iprojectiles;
    for (imobs = mobs.begin(); mobs.end() != imobs; ++imobs)
    {
        for (iprojectiles = projectiles.begin(); projectiles.end() != iprojectiles; ++iprojectiles)
        {
            //TODO verify collision
            if(!(*imobs)->getHitBox()->isColosionWithOther((*iprojectiles)->getHitBox()))
            {
                //TODO create projectile
            };

        }
    }  
};

#endif