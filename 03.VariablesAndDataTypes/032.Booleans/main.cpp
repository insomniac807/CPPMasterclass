#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if(red_light) {
        std::cout << "Stop!!" << std::endl;
    } else {
        std::cout << "Keep Going!!!" << std::endl;
    }
    
    return 0;
}