#include "Container.h"
#include "../Utils/Bound.h"

using namespace std;
using namespace splashkit_desktop;

/**
 * Constructors
 */
Container::Container()
{
    set_bound(Bound());
    set_components(vector<Component*>());
}

Container::Container(Bound bound)
{
    set_bound(bound);
    set_components(vector<Component*>());
}

Container::Container(vector<Component*> components)
{
    set_bound(Bound());
    set_components(components);
}

Container::Container(Bound bound, vector<Component*> components)
{
    set_bound(bound);
    set_components(components);
}

/**
 * Event Management
 */
void Container::process_container_events()
{
    for (Component *c : get_components())
    {
        c->check_events();
    }

    check_events();
}

void Container::check_events()
{
    // TODO: Implement
}

/**
 * Getters and Setters
 */
Bound Container::get_bound()
{
    return this->bound;
}

vector<Component*> Container::get_components()
{
    return this->components;
}

int Container::get_id()
{
    return this->id;
}

void Container::set_bound(Bound bound)
{
    this->bound = bound;
}

void Container::set_components(vector<Component*> components)
{
    this->components = components;
}

void Container::set_id(int id)
{
    this->id = id;
}
