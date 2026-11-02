
#ifndef CONFIG_H
#define CONFIG_H

// CNC Pendant Hardware Configuration
constexpr int TOTAL_BUTTONS = 13;
constexpr int TOTAL_ON_OFF_SWITCHES = 2;
constexpr int TOTAL_LEDS = 10;

// Selector switches:
constexpr int TOTAL_SELECTOR_SWITCHES = 5;

// Manual Pulse Generator
constexpr int MPG_INPUTS = 2;

// Communication configuration
constexpr unsigned long BAUD_RATE = 115200;
#endif 
