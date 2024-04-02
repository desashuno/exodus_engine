#include<iostream>

#include "main.h"

void Root::events(){
    
}

void Root::update(){
    ;
}

void Root::render(){
    std::cout << "hello word" << std::endl;
}

void Root::init(){
    running = true;
    while (running == true){
        events();
        update();
        render();
    }
}


int main(){
    Root root;
    root.init();
    return 0;
}
