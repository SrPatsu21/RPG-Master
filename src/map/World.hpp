#ifndef WORLD_HPP
#define WORLD_HPP

#include <list>


class World
{
private:
    std::list<Type> projectiles;
    std::list<Type> livingentity;
    std::list<Type> players;
public:
    World(/* args */);
    ~World();
};

World::World(/* args */)
{
}

World::~World()
{
}


#endif