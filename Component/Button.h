#ifndef SKD_BUTTON
#define SKD_BUTTON

#include <string>

#include "../Component/Component.h"
#include "../EventListener/IClickListener.h"

using namespace std;

namespace splashkit_desktop
{
    class Button : public Component
    {
        private:
            /**
             * Members
             */
            Bound bound;
            string text;
            IClickListener *click_listener;

        public:
            /****************
             * Constructors *
             ****************/
            Button();
            /**
             * @param Bound     The bound of the Button
             */
            Button(Bound bound);
            /**
             * @param Bound     The bound of the Button
             * @param string    The text displayed on the Button
             */
            Button(Bound bound, string text);
            /**
             * @param Bound             The bound of the Button
             * @param string            The text displayed on the Button
             * @param AIClickListener   An object of instance AIClickListener used to execute functionality when the button is clicked
             */
            Button(Bound bound, string text, IClickListener *click_listener);

            /**********************
             * Drawing Management *
             **********************/
            /** [VIRTUAL -> OVERRIDEN]
             * Manages the Drawing process for the Button Component
             *
             * @param Bound     The bounds of the parent Container Component segment
             */
            virtual void draw_component(Bound containing_bound);

            /********************
             * Event Management *
             ********************/
            /** [VIRTUAL -> OVERRIDEN]
             * Checks the events for the Button object. Only events registered to this object will be checked.
             *
             * @param Container     The bounds of the Container to compare to.
             */
            virtual void check_events(Bound containing_bound);

            /***********************
             * Bounding Management *
             ***********************/
            /**
             * Checks whether the Cursor is inside the bounds of the Button
             *
             * @returns     Whether the cursor is in the bounds of the Button
             */
            bool in_bound();

            /******************
             * Public Getters *
             *****************/
            /**
             * Retrieve the bounds of the Button
             *
             * @returns     The bound of the Button
             */
            Bound get_bound();
            /**
             * Retrieve the text of the Button
             *
             * @returns     The text of the Button
             */
            string get_text();
            /**
             * Retrieve the click listener of the Button
             *
             * @returns     The click listener of the Button
             */
            IClickListener* get_click_listener();

            /******************
             * Public Setters *
             *****************/
            /**
             * Sets the bounds of the Button
             *
             * @param Bound     The new bound of the Button
             */
            void set_bound(Bound bound);
            /**
             * Sets the text of the Button
             *
             * @param       The new text of the Button
             */
            void set_text(string text);
            /**
             * Sets the click listener of the Button
             *
             * @param     The new click listener of the Button
             */
            void set_click_listener(IClickListener *click_listener);
    };
} // namespace splashkit_desktop

#endif