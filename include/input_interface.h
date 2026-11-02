
#ifndef INPUT_INTERFACE_H
#define INPUT_INTERFACE_H


struct PendantInputs {
    // Push buttons
    bool jogPlus;
    bool jogMinus;
    bool reset;
    bool cycleStart;
    bool cycleStop;

    // ON/OFF switches
    bool optionalStop;
    bool blockDelete;

    // MPG encoder signals
    bool mpgChannelA;
    bool mpgChannelB;

    // Selector switch positions
    int modeSelector;
    int axisSelector;
    int stepSelector;
    int feedOverrideSelector;
    int spindleOverrideSelector;
};

#endif 
