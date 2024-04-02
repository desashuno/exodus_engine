#include "main.h"


void Root::events(){
    ;
}

void Root::update(){
    ;
}

void Root::render(){
    ;
}

void Root::init(){
    Window window = Window("Common window", 1280, 720);
    window.init();
    window.run();
    running = true;/*
    while (running == true){
        events();
        update();
        render();
    }*/
}


int main(){
    Root root;
    root.init();
    return 0;
}
