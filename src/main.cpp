
#include <iostream>
#include "pendant.h"

int main() {
    Pendant cncPendant;
    cncPendant.initialize();
    PendantInputs inputs{};
    int choice;
    std::cout<<"\n=== CNC Pendant Simulator ===\n";
    std::cout<<"1. Jog Plus\n";
    std::cout<<"2. Jog Minus\n";
    std::cout<<"3. Reset\n";
    std::cout<<"Enter your choice: ";
    std::cin >> choice;
    switch (choice) {
        case 1:
            inputs.jogPlus = true;
            break;
        case 2:
            inputs.jogMinus = true;
            break;
        case 3:
            inputs.reset = true;
            break;
        default:
            std::cout << "Invalid choice!\n";
            return 1;
    }
    cncPendant.processInputs(inputs);
    return 0;
}
