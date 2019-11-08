#ifndef SCREEN_ACTIVITY_HPP
#define SCREEN_ACTIVITY_HPP

#include "ui/list.hpp"
#include "ui/screen.hpp"
#include "ui/sidemenu.hpp"
#include "User.hpp"
#include "Title.hpp"
#include <vector>

namespace Screen {
    class Activity : public UI::Screen {
        private:
            // List object
            UI::List * list;
            // Left menu object
            UI::SideMenu * menu;
            // Used to print/render user name and image
            User * user;

        // See ui/screen.hpp for what these functions do
        public:
            // Additionally takes a user object
            Activity(bool *, User *, std::vector<Title *>);

            void event();

            void update(uint32_t dt);

            void draw();

            ~Activity();
    };
}

#endif