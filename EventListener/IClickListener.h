#ifndef SKD_ICLICKLISTENER
#define SKD_ICLICKLISTENER

namespace splashkit_desktop
{
    class IClickListener
    {
        public:
            virtual void on_click() = 0;
    };
} // namespace splashkit_desktop

#endif