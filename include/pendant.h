
#ifndef PENDANT_H
#define PENDANT_H

#include "input_interface.h"

class Pendant {
public:

    // Initialize the pendant
    void initialize();

    // Process the current pendant inputs
    void processInputs(const PendantInputs& inputs);

};

#endif
