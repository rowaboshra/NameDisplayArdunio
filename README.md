# NameDisplayArdunio

## Overview

This Arduino project uses a 7-segment display to show the name "Rowa Ahmed" when a switch is flipped to the right. If the switch is in the left position, the display is turned off. The project involves setting up multiple pins to control the segments of the display and defining the patterns for each character in the name.

## Hardware Requirements
- Arduino board
- 7-segment display
- Switch
- Resistors
- Connecting wires

## Pin Configuration
The following Arduino pins are connected to the segments of the 7-segment display:
- Segment A: Pin 11
- Segment B: Pin 10
- Segment C: Pin 7
- Segment D: Pin 8
- Segment E: Pin 9
- Segment F: Pin 12
- Segment G: Pin 13
- Segment H: Pin 6

The switch is connected to Pin 5.

## Functions
### `void setup()`
Initializes the pin modes for the segments and the switch.

### `void loop()`
Continuously checks the position of the switch and displays the corresponding letters if the switch is in the right position. If the switch is in the left position, it turns off the display.

### `void turnOffDisplay()`
Turns off all segments of the 7-segment display.

### `void displayLetter(char letter)`
Displays a given letter by setting the appropriate segments. Supports the letters 'R', 'o', 'w', 'a', 'A', 'h', 'm', 'e', 'd'.

## Usage
1. Connect the hardware components as per the pin configuration.
2. Upload the provided code to the Arduino board.
3. Flip the switch to the right to display the name "Rowa Ahmed". Flip the switch to the left to turn off the display.

## Notes
- Some letters like 'w', 'a', and 'm' have been approximated due to the limitations of the 7-segment display.
- Each letter is displayed for 1 second with a 0.5-second delay between letters.

