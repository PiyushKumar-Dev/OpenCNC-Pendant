#include <iostream>
#include "pendant.h"

int main() {
    Pendant cncPendant;
    cncPendant.initialize();
    int choice;
    int position;
    while (true) {
        PendantInputs inputs{};
        std::cout<<"\n=== CNC Pendant Simulator ===\n";
        std::cout<<"\n--- Push Buttons ---\n";
        std::cout<<"1. Jog Plus\n";
        std::cout<<"2. Jog Minus\n";
        std::cout<<"3. Reset\n";
        std::cout<<"\n--- ON/OFF Switches ---\n";
        std::cout<<"4. Optional Stop ON\n";
        std::cout<<"5. Block Delete ON\n";
        std::cout<<"\n--- MPG Encoder ---\n";
        std::cout<<"6. MPG Channel A HIGH\n";
        std::cout<<"7. MPG Channel B HIGH\n";
        std::cout<<"\n--- Selector Switches ---\n";
        std::cout<<"8. Mode Selector\n";
        std::cout<<"9. Axis Selector\n";
        std::cout<<"10. Step Selector\n";
        std::cout<<"11. Feed Override Selector\n";
        std::cout<<"12. Spindle Override Selector\n";
        std::cout<<"\n0. Exit\n";
        std::cout<<"Enter your choice: ";
        if (!(std::cin >> choice)) {
            std::cout<<"Invalid input. Exiting simulator.\n";
            break;
        }
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
            case 4:
                inputs.optionalStop = true;
                break;
            case 5:
                inputs.blockDelete = true;
                break;
            case 6:
                inputs.mpgChannelA = true;
                break;
            case 7:
                inputs.mpgChannelB = true;
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12: {
                std::cout<<"Enter selector position:";

                if (!(std::cin>>position)) {
                    std::cout<<"Invalid input.Exiting simulator.\n";
                    return 1;
                }
                if (position < 0) {
                    std::cout << "Invalid selector position!\n";
                    continue;
                }
                switch (choice) {
                    case 8:
                        inputs.modeSelector = position;
                        break;
                    case 9:
                        inputs.axisSelector = position;
                        break;
                    case 10:
                        inputs.stepSelector = position;
                        break;
                    case 11:
                        inputs.feedOverrideSelector = position;
                        break;
                    case 12:
                        inputs.spindleOverrideSelector = position;
                        break;
                }
                break;
            }
            case 0:
                std::cout << "Exiting simulator.\n";
                return 0;
            default:
                std::cout << "Invalid choice!\n";
                continue;
        }
        cncPendant.processInputs(inputs);
    }
    return 0;
}
