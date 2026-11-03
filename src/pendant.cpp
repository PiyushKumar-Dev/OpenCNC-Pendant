#include "pendant.h"
#include <iostream>
void Pendant::initialize() {
    std::cout<<"CNC Pendant initialized."<<std::endl;
}

void Pendant::processInputs(const PendantInputs& inputs) {
    if (inputs.jogPlus) {
        std::cout <<"Jog Plus button pressed."<< std::endl;
    }
    if (inputs.jogMinus) {
        std::cout <<"Jog Minus button pressed."<< std::endl;
    }
    if (inputs.reset) {
        std::cout<<"Reset button pressed."<<std::endl;
    }
}
