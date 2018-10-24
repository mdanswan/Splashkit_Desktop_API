#ifndef SKD_WINDOW
#define SKD_WINDOW

#include <vector>

#include "splashkit.h"
#include "../Container/Container.h"
#include "../Utils/Bound.h"

namespace splashkit_desktop
{
    const int DEFAULT_WIDTH = 600;
    const int DEFAULT_HEIGHT = 400;

    class Window
    {
        private:
            /**
             * Members
             */
            string title;
            Bound bound;
            color background_color;
            vector<Container*> containers;
            window w;

            /**********************
             * Drawing Management *
             **********************/
            /**
             * Manages the drawing process of all containers within the Window
             */
            void draw_window();
            /**
             * Manages the drawing process of all container components
             */
            void draw_containers();

            /*******************
             * Private Getters *
             *******************/
            /**
             * Retrieves the base SplashKit window object
             *
             * @returns      The base SplashKit window object
             */
            window get_window();

            /*******************
             * Private Setters *
             *******************/
            /**
             * Sets the Window's bounds
             *
             * @param Bound     The new coordinates, width and height for the Window
             */
            void set_bound(Bound bound);
            /**
             * Sets the window
             *
             * @param window    The new window
             */
            void set_window(window w);

        public:
            /****************
             * Constructors *
             ****************/
            /**
             * Default
             */
            Window();
            /**
             * @param string    The title of the Window
             */
            Window(string title);
            /**
             * @param string    The title of the Window
             * @param Bound     The Window's coordinates, width and height
             */
            Window(string title, Bound bound);
            /**
             * @param string                The title of the Window
             * @param Bound                 The Window's coordinates, width and height
             * @param vector<Container*>    The Containers to be part of the Window
             */
            Window(string title, Bound bound, vector<Container*> containers);

            /*************************
             * Processing Management *
             *************************/
            void process_window();

            /********************
             * Event Management *
             ********************/
            /**
             * Processes the events for all window Containers and Components
             */
            void process_window_events();
            /**
             * Checks the events for the Window object. Only events registered to this object will be checked.
             */
            void check_events();

            /*********************
             * Window Management *
             *********************/
            /**
             * Used to open the Window (initally)
             */
            void open();
            /**
             * Closes the current Window
             */
            void close();

            /************************
             * Container Management *
             ************************/
            /**
             * Adds the Container to the Window's Container list
             *
             * @param Container     The Container to add
             */
            void add_container(Container *c);
            /**
             * Removes the given Container from the Window's Container List
             *
             * @param Container     The container to remove
             */
            void remove_container(Container *c);

            /******************
             * Public Getters *
             ******************/
            /**
             * Retrieves the background color of the Window
             *
             * @returns     The background color of the Window
             */
            color get_background_color();
            /**
             * Retrieves the Bound of the Window
             *
             * @returns     The Bound of the Window
             */
            Bound get_bound();
            /**
             * Retrieves the list of Containers within the Window
             *
             * @returns     The list of Containers within the Window
             */
            vector<Container*> get_containers();
            /**
             * Retrieves the Title of the Window
             *
             * @returns     The Title of the Window
             */
            string get_title();

            /******************
             * Public Setters *
             ******************/
            /**
             * Sets the background color of the Window
             *
             * @param color     The new background color of the Window
             */
            void set_background_color(color bg_color);
            /**
             * Sets the title of the Window
             *
             * @param string     The new title of the Window
             */
            void set_title(string title);
    };
} // namespace splashkit_desktop

#endif