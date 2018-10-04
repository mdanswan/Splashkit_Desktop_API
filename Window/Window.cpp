#include <future>

#include "Window.h"

using namespace std;
using namespace splashkit_desktop;

/**
 * Constructor
 */
Window::Window(string title, Bound bound)
{
    window w;

    if (&bound != NULL)
    {
        w = open_window(title, bound.get_width(), bound.get_height());
        move_window_to(w, bound.get_x(), bound.get_y());
    }
    else
        w = open_window(title, DEFAULT_WIDTH, DEFAULT_HEIGHT);

    set_window(w);

    async(Window::process_window, this);
}

/**
 * Window Processing Management
 */
void Window::process_window()
{
    do
    {
        process_events();
        process_window_events();
        draw_window();
    } while (true);
}

/**
 * Event Management
 */
void Window::process_window_events()
{
    for(Container *c : get_containers())
    {
        c->process_container_events();
    }

    check_events();
}

void Window::check_events()
{
    // TODO: Implement
}

/**
 * Drawing Management
 */
void Window::draw_window()
{
    clear_screen(get_background_color());
    draw_containers();
    refresh_screen(60);
}

void Window::draw_containers()
{
    for (Container *c : get_containers())
    {
        c->draw_components();
    }
}

/**
 * Container Management
 */
void Window::add_container(Container *container)
{
    containers.push_back(container);
}

void Window::remove_container(Container *container)
{
    vector<Container*> cs = get_containers();

    for (int i = 0; i < cs.size(); i++)
    {
        if (container->get_id() == cs[i]->get_id())
        {
            Container *last = cs[cs.size() - 1];
            cs[i] = last;
            cs.pop_back();
            delete container;
        }
    }
}

/**
 * Window Visiblity Management
 */
void Window::close_window()
{
    close_current_window();
}

void Window::hide_window()
{
    hide_window();
}

void Window::show_window()
{
    show_window();
}

/**
 * Getters and Setters
 */
color Window::get_background_color()
{
    return this->background_color;
}

Bound Window::get_bound()
{
    return this->bound;
}

vector<Container*> Window::get_containers()
{
    return this->containers;
}

void Window::set_background_color(color bg_color)
{
    this->background_color = bg_color;
}

void Window::set_bound(Bound bound)
{
    this->bound = bound;
}

void Window::set_window(window w)
{
    this->w = w;
}