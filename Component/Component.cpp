#include "Component.h"
#include "../Utils/Bound.h"

using namespace std;
using namespace splashkit_desktop;

/**
 * Constructors
 */
Component::Component()
{
    set_bound(Bound());
}

Component::Component(Bound bound)
{
    set_bound(bound);
}

/**
 * Getters and Setters
 */
Bound Component::get_bound()
{
    return this->bound;
}

void Component::set_bound(Bound bound)
{
    this->bound = bound;
}