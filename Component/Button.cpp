#include "Button.h"
#include "splashkit.h"

using namespace std;
using namespace splashkit_desktop;

Button::Button() : Component() {}
Button::Button(Bound bound) : Component(bound), bound(bound) {}
Button::Button(Bound bound, string text) : Component(bound), bound(bound), text(text) {}
Button::Button(Bound bound, string text, IClickListener *click_listener) : Component(bound), bound(bound), text(text), click_listener(click_listener) {}

void Button::draw_component(Bound containing_bound)
{
    Bound &cb = containing_bound;
    Bound b = Component::get_bound();

    fill_rectangle(COLOR_PINK, cb.get_x() + b.get_x(), cb.get_y() + b.get_y(), b.get_width(), b.get_height());

    int text_x = cb.get_x() + b.get_x();
    int text_y = cb.get_y() + b.get_y();

    draw_text(get_text(), COLOR_WHITE, text_x, text_y);
}

void Button::check_events(Bound containing_bound)
{
    /*
     * Button Clicked Check
     */
    if (in_bound())
    {
        write_line("In Bounded");
        if (key_typed(K_KEY))
        {
            write_line("In Clicked");
            get_click_listener()->on_click();
        }
    }
}

bool Button::in_bound()
{
    int x;
    int y;

    x = mouse_x();
    y = mouse_y();

    Bound b = get_bound();

    if (x >= b.get_x() && x <= b.get_x() + b.get_width())
    {
        if (y >= b.get_y() && y <= b.get_y() + b.get_height())
        {
            return true;
        }
    }

    return false;
}

/**
 * Getters and Setters
 */
Bound Button::get_bound()
{
    return this->bound;
}

string Button::get_text()
{
    return this->text;
}

IClickListener* Button::get_click_listener()
{
    return this->click_listener;
}

void Button::set_bound(Bound bound)
{
    this->bound = bound;
}

void Button::set_text(string text)
{
    this->text = text;
}

void Button::set_click_listener(IClickListener *click_listener)
{
    this->click_listener = click_listener;
}