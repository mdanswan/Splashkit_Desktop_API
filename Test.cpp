#include "Utils/Bound.h"
#include "Window/Window.h"
#include "Container/BorderContainer.h"
#include "Component/Button.h"
#include "EventListener/IClickListener.h"

using namespace splashkit_desktop;

class Clicker : public IClickListener
{
    void on_click() { write_line("Button Clicked"); }
};

int main()
{
    Bound button_bound(0, 0, 50, 50);
    Clicker *cl = new Clicker();
    Button *b = new Button(button_bound, "Buttonj", cl);

    BorderContainer *c = new BorderContainer();

    Bound window_bound(50, 50, 600, 400);
    Window *window = new Window("Test", window_bound);
    window->add_container(c);

    return 0;
}