#ifndef SKD_BORDERCONTAINER
#define SKD_BORDERCONTAINER

#include "Container.h"
#include "../Component/Component.h"

namespace splashkit_desktop
{
    class BorderContainer : public Container
    {
        private:
            /**
             * Members
             */
            Component *top_left = nullptr;
            Component *bottom_left = nullptr;
            Component *top_right = nullptr;
            Component *bottom_right = nullptr;

        public:
            /****************
             * Constructors *
             ****************/
            BorderContainer();
            /**
             * @param Bound     The Bound of the Border Container
             */
            BorderContainer(Bound bound);

            /*******************************
             * Super Class Virtual Methods *
             *******************************/
            /** [VIRTUAL -> OVERRIDEN]
             * Manages the drawing process for Components
             */
            virtual void draw_components();
            /** [VIRTUAL -> OVERRIDEN]
             * Checks the events for the Container object. Only events registered to this object will be checked.
             */
            virtual void check_events();

            /******************
             * Public Getters *
             ******************/
            /**
             * Retrieves the top left Component
             *
             * @returns     The top left Component
             */
            Component* get_top_left();
            /**
             * Retrieves the top right Component
             *
             * @returns     The top right Component
             */
            Component* get_top_right();
            /**
             * Retrieves the bottom left Component
             *
             * @returns     The bottom left Component
             */
            Component* get_bottom_left();
            /**
             * Retrieves the bottom right Component
             *
             * @returns     The bottom right Component
             */
            Component* get_bottom_right();

            /******************
             * Public Setters *
             ******************/
            /**
             * Sets the top left Component of the Container
             *
             * @param Component*     The new top left Component
             */
            void set_top_left(Component *top_left);
            /**
             * Sets the top right Component of the Container
             *
             * @param Component*     The new top right Component
             */
            void set_top_right(Component *top_right);
            /**
             * Sets the bottom left Component of the Container
             *
             * @param Component*     The new bottom left Component
             */
            void set_bottom_left(Component *bottom_left);
            /**
             * Sets the bottom right Component of the Container
             *
             * @param Component*     The new bottom right Component
             */
            void set_bottom_right(Component *bottom_right);
    };
} // namespace splashkit_desktop

#endif