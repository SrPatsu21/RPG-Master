#ifndef WORLD_HPP
#define WORLD_HPP

#include <list>
// #include "./../entity/AbstractMob.hpp"
#include "./../entity/AbstractProjectile.hpp"
#include "./../entity/Character.hpp"

class AbstractProjectile;
class Character;

class World
{
private:
    int max_mobs;
    int max_projectiles;
    std::list<AbstractProjectile*> projectiles;
    std::list<AbstractMob*> mobs;
    Character* player;

    //* singleton
    static World* world_;

protected:
    void setMaxMobs(int max_mobs);
    void setMaxProjectiles(int max_projectiles);
    
    void verifyCollision();
    void tickEveryOne();
    //* create mobs
    void generateMobs();
    //*tick every entity
    void gametick();
    World(Character* player, int max_mobs = 120, int max_projectiles = 500);
public:
    //* singleton init
    static World* initWorld(Character* player, int max_mobs = 120, int max_projectiles = 500);
    ~World();
    int getMaxMob();
    int getMaxProjectiles();
    //*new projectile on game
    static void addProjectiles(AbstractProjectile* projectile);
    //*add new entity
    void addMob(AbstractMob* mob);
};

#endif