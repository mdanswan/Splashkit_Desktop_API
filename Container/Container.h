#ifndef SKD_CONTAINER
#define SKD_CONTAINER

#include <vector>

#include "../Component/Component.h"
#include "../Utils/Bound.h"

using namespace std;

namespace splashkit_desktop
{
    class Container
    {
        private:
            /**
             * Members
             */
            int id;
            Bound bound;
            vector<Component*> components;

            /**
             * Sets the id of the Container
             *
             * @param Bound     The new id of the Container
             */
            void set_id(int id);

        public:
            /****************
             * Constructors *
             ****************/
            Container();
            /**
             * @param Bound     The bounds of the Container
             */
            Container(Bound bound);
            /**
             * @param vector<Component>     The components within the Container
             */
            Container(vector<Component*> components);
            /**
             * @param Bound                 The bounds of the Container
             * @param vector<Component>     The components within the Container
             */
            Container(Bound bound, vector<Component*> components);

            /**********************
             * Drawing Management *
             **********************/
            /** [VIRTUAL]
             * Manages the Drawing process for the Components
             */
            virtual void draw_components() = 0;

            /********************
             * Event Management *
             ********************/
            /**
             * Processes the events for all Components
             */
            void process_container_events();
            /**
             * Checks the events for the Container object. Only events registered to this object will be checked.
             */
            void check_events();

            /******************
             * Public Getters *
             ******************/
            /**
             * Retrieves the bounds of the Container
             *
             * @returns     The bounds of the Container
             */
            Bound get_bound();
            /**
             * Retrieves the components of the Container
             *
             * @returns     The components of the Container
             */
            vector<Component*> get_components();
            /**
             * Retrieves the id of the Container
             *
             * @returns     The id of the Container
             */
            int get_id();

            /******************
             * Public Setters *
             ******************/
            /**
             * Sets the bounds of the Container
             *
             * @param Bound     The new bounds of the Container
             */
            void set_bound(Bound bound);
            /**
             * Sets the components of the Container
             *
             * @param vector<Component>     The new components of the Container
             */
            void set_components(vector<Component*> components);
    };
} // namespace splashkit_desktop

#endif