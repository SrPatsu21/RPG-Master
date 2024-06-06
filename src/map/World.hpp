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

    std::list<HitBox*> projectiles;
    std::list<HitBox*> mobs;
    //? who is player
    std::list<HitBox*> players;
protected:
    void setMaxMobs(int max_mobs);
    void setMaxProjectiles(int max_projectiles);
    void setMaxPlayers(int max_players);
    //*add new entity
    void addMob(AbstractMob* mob);
    //?add new player
    void addPlayers(HitBox* hitbox);
public:
    World(int max_mobs = 120, int max_projectiles = 500, int max_player = 20);
    ~World();
    int getMaxMob();
    int getMaxProjectiles();
    int getMaxPLayers();
    //*new projectile on game
    //TODO create a projectile
    void addProjectiles(HitBox* hitbox);
    //*tick every entity
    void gametick();
};

World::World(int max_mobs, int max_projectiles, int max_players)
{
    this->max_mobs = max_mobs;
    this->max_projectiles = max_projectiles;
    this->max_players = max_players;
};
World::~World()
{
    std::list<HitBox*>::iterator it;
    for (it = projectiles.begin(); projectiles.end() != it; ++it)
    {
        delete (*it);
    }
    projectiles.clear();
    for (it = mobs.begin(); mobs.end() != it; ++it)
    {
        delete (*it);
    }
    mobs.clear();
    //? who is player
    for (it = players.begin(); players.end() != it; ++it)
    {
        delete (*it);
    }
    players.clear();
};

void World::addMob(AbstractMob* mob)
{
    if (mobs.size() < max_mobs)
    {
        mobs.push_back((mob->getHitBox()));
    }
};
void World::addProjectiles(HitBox* hitbox)
{
    if (projectiles.size() < max_projectiles)
    {
        projectiles.push_back(hitbox);
    }
};
void World::addPlayers(HitBox* hitbox)
{
    if (projectiles.size() < max_projectiles)
    {
        projectiles.push_back(hitbox);
    }
};
void World::gametick()
{
    //TODO verify conllision
    //TODO tick every one
    //TODO remove deads
};
#endif