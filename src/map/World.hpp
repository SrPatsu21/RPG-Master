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
    std::list<HitBox*> projectiles;
    std::list<AbstractMob*> mobs;
    //? who is player
    std::list<HitBox*> players;
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
    std::list<HitBox*>::iterator it;
    for (it = projectiles.begin(); projectiles.end() != it; ++it)
    {
        delete (*it);
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
    //TODO define player and delete
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
        mobs.push_back((mob));
    }
};
void World::gametick()
{
    //TODO verify conllision
    //TODO tick every one
    //TODO remove deads
};
#endif