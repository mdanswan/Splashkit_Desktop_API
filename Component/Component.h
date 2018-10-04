#ifndef SKD_COMPONENT
#define SKD_COMPONENT

#include "../Utils/Bound.h"

namespace splashkit_desktop
{
    class Component
    {
        private:
            /**
             * Members
             */
            Bound bound;

        public:
            /****************
             * Constructors *
             ****************/
            Component();
            /**
             * @param Bound     The bounds of the Component
             */
            Component(Bound bound);

            /**********************
             * Drawing Management *
             **********************/
            /** [VIRTUAL]
             * Manages the drawing of the Component
             *
             * @param Container     The bounds of the Container to draw to.
             */
            virtual void draw_component(Bound containing_bound) = 0;

            /********************
             * Event Management *
             ********************/
            /**
             * Checks the events for the Component object. Only events registered to this object will be checked.
             */
            virtual void check_events() = 0;

            /******************
             * Public Getters *
             ******************/
            /**
             * Retrieves the bounds of the Component
             *
             * @returns     The bounds of the Component
             */
            Bound get_bound();

            /******************
             * Public Setters *
             ******************/
            /**
             * Sets the bound of the Component
             *
             * @param Bound     The new bound of the Component
             */
            void set_bound(Bound bound);
    };
} // namespace splashkit_desktop

#endif