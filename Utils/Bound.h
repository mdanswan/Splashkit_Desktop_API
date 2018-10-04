#ifndef SKD_BOUND
#define SKD_BOUND

namespace splashkit_desktop
{
    class Bound
    {
        private:
            /**
             * Members
             */
            int x;
            int y;
            int width;
            int height;

        public:
            /****************
             * Constructors *
             ****************/
            Bound();
            /**
             * @param int   The X coordinate of the Bound
             * @param int   The Y coordinate of the Bound
             * @param int   The width of the Bound
             * @param int   The height of the Bound
             */
            Bound(int x, int y, int width, int height);

            /******************
             * Public Getters *
             ******************/
            /**
             * Retrieves the X coordinate of the Bound
             *
             * @returns     The X coordinate of the Bound
             */
            int get_x();
            /**
             * Retrieves the Y coordinate of the Bound
             *
             * @returns     The Y coordinate of the Bound
             */
            int get_y();
            /**
             * Retrieves the width of the Bound
             *
             * @returns     The width of the Bound
             */
            int get_width();
            /**
             * Retrieves the height of the Bound
             *
             * @returns     The height of the Bound
             */
            int get_height();

            /******************
             * Public Setters *
             ******************/
            /**
             * Retrieves the X coordinate of the Bound
             *
             * @returns     The X coordinate of the Bound
             */
            void set_x(int x);
            /**
             * Retrieves the Y coordinate of the Bound
             *
             * @returns     The Y coordinate of the Bound
             */
            void set_y(int y);
            /**
             * Retrieves the width of the Bound
             *
             * @returns     The width of the Bound
             */
            void set_width(int width);
            /**
             * Retrieves the height of the Bound
             *
             * @returns     The height of the Bound
             */
            void set_height(int height);
    };
} // namespace splashkit_desktop

#endif