#include "pendant.h"
#include <iostream>

// Initialize pendant
void Pendant::initialize() {
    std::cout <<"CNC Pendant initialized."<< std::endl;
}
// Process pendant inputs
void Pendant::processInputs(const PendantInputs& inputs) {

    // Push buttons
    if (inputs.jogPlus) {
        std::cout<<"Jog Plus button pressed."<<std::endl;
    }
    if (inputs.jogMinus) {
        std::cout<<"Jog Minus button pressed."<<std::endl;
    }
    if (inputs.reset) {
        std::cout<<"Reset button pressed."<<std::endl;
    }
    if (inputs.cycleStart) {
        std::cout<<"Cycle Start button pressed."<<std::endl;
    }
    if (inputs.cycleStop) {
        std::cout<<"Cycle Stop button pressed."<<std::endl;
    }

    // ON/OFF switches
    if (inputs.optionalStop) {
        std::cout<<"Optional Stop switch is ON."<<std::endl;
    }
    if (inputs.blockDelete) {
        std::cout<<"Block Delete switch is ON."<<std::endl;
    }

    // MPG encoder signals
    if (inputs.mpgChannelA) {
        std::cout<<"MPG Channel A is HIGH."<<std::endl;
    }
    if (inputs.mpgChannelB) {
        std::cout<<"MPG Channel B is HIGH."<<std::endl;
    }

    // Selector switches
    std::cout<<"Mode Selector:"<<inputs.modeSelector<<std::endl;
    std::cout<<"Axis Selector:"<<inputs.axisSelector<<std::endl;
    std::cout<<"Step Selector:"<<inputs.stepSelector<<std::endl;
    std::cout<<"Feed Override Selector:"<<inputs.feedOverrideSelector<<std::endl;
    std::cout<<"Spindle Override Selector:"<<inputs.spindleOverrideSelector<<std::endl;
}
