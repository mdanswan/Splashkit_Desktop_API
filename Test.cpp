#include <future>

#include "Utils/Bound.h"
#include "Window/Window.h"
#include "Container/BorderContainer.h"
#include "Component/Button.h"
#include "EventListener/IClickListener.h"

using namespace splashkit_desktop;

class ButtonListener : public IClickListener
{
    void on_click() { write_line("Button Clicked"); }
};

class Clicker
{
    public:
        Clicker(string title)
        {
            write_line("In Paramaterized");
            build_winda(title);
        }
        Clicker()
        {
            write_line("In Default");
            build_winda("Window");
        }

        void build_winda(string title)
        {
            Bound button_bound(0, 0, 100, 30);
            ButtonListener *cb = new ButtonListener();
            Button *b = new Button(button_bound, "Button Test", cb);

            Bound container_bound(0, 0, 600, 400);
            BorderContainer *c = new BorderContainer(container_bound);
            c->set_top_left(b);

            Bound window_bound(50, 50, 600, 400);
            Window *window = new Window(title, window_bound);
            window->add_container(c);

            window->open();
        }
};

int main()
{
    Clicker clicker("Test");

    return 0;
}