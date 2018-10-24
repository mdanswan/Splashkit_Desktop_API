#include "BorderContainer.h"
#include "../Utils/Bound.h"

using namespace std;
using namespace splashkit_desktop;

BorderContainer::BorderContainer() {}

BorderContainer::BorderContainer(Bound bound) : Container(bound) {}

/**
 * Overriden Super Class Methods
 */
void BorderContainer::draw_components()
{
    Bound b = get_bound();

    int width, height, x, y;

    /*
     * top left bound definition
     */
    width = b.get_width() / 2;
    height = b.get_height() / 2;
    x = 0;
    y = 0;

    Bound top_left_bound(x, y, width, height);

    if (get_top_left() != nullptr)
        get_top_left()->draw_component(top_left_bound);

    /*
     * top right bound definition
     */
    width = b.get_width() - top_left_bound.get_width();
    height = b.get_height() - top_left_bound.get_height();
    x = top_left_bound.get_width() + 1;
    y = 0;

    Bound top_right_bound(x, y, width, height);

    if (get_top_right() != nullptr)
        get_top_right()->draw_component(top_right_bound);

    /*
     * bottom left bound definition
     */
    width = b.get_width() / 2;
    height = b.get_height() / 2;
    x = 0;
    y = top_left_bound.get_height() + 1;

    Bound bottom_left_bound(x, y, width, height);

    if (get_bottom_left() != nullptr)
        get_bottom_left()->draw_component(bottom_left_bound);

    /*
     * bottom right bound definition
     */
    width = b.get_width() - bottom_left_bound.get_width();
    height = b.get_height() - bottom_left_bound.get_height();
    x = bottom_left_bound.get_width() + 1;
    y = top_right_bound.get_height() + 1;

    Bound bottom_right_bound(x, y, width, height);

    if (get_bottom_right() != nullptr)
        get_bottom_right()->draw_component(bottom_right_bound);
}

void BorderContainer::check_events()
{
    // TODO: Implement
}

/**
 * Getters and Setters
 */
Component* BorderContainer::get_top_left()
{
    return this->top_left;
}

Component* BorderContainer::get_top_right()
{
    return this->top_right;
}

Component* BorderContainer::get_bottom_left()
{
    return this->bottom_left;
}

Component* BorderContainer::get_bottom_right()
{
    return this->bottom_right;
}

void BorderContainer::set_top_left(Component *top_left)
{
    if (get_top_left() != nullptr)
        remove_component(get_top_left());

    this->top_left = top_left;
    add_component(top_left);
}

void BorderContainer::set_top_right(Component *top_right)
{
    if (get_top_right() != nullptr)
        remove_component(get_top_right());

    this->top_right = top_right;
    add_component(top_right);
}

void BorderContainer::set_bottom_left(Component *bottom_left)
{
    if (get_bottom_left() != nullptr)
        remove_component(get_bottom_left());

    this->bottom_left = bottom_left;
    add_component(bottom_left);
}

void BorderContainer::set_bottom_right(Component *bottom_right)
{
    if (get_bottom_right() != nullptr)
        remove_component(get_bottom_right());

    this->bottom_right = bottom_right;
    add_component(bottom_right);
}