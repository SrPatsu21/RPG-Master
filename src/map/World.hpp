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
    std::list<AbstractProjectile*> projectiles;
    std::list<AbstractMob*> mobs;
    Character* player;

    void verifyCollision();
    void tickEveryOne();
protected:
    void setMaxMobs(int max_mobs);
    void setMaxProjectiles(int max_projectiles);
    //*tick every entity
    void gametick();

public:
    World(Character* player, int max_mobs = 120, int max_projectiles = 500);
    ~World();
    int getMaxMob();
    int getMaxProjectiles();
    //*new projectile on game
    void addProjectiles(AbstractProjectile* projectile);
    //*add new entity
    void addMob(AbstractMob* mob);
};

#endif