#include "window.h"

class Root{
    Window window;
    bool running;
    private:
        void events();
        void update();
        void render();    
    public:
        void init();
};


int main();