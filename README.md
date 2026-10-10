# Temperature Conversion App

## Setup
Requires g++ (C++17) and Git: `sudo apt install build-essential git`

## Input/Output Contract
Input: one line, a direction then a temperature, e.g. `C2F 0`.
- `C2F` = Celsius to Fahrenheit
- `F2C` = Fahrenheit to Celsius

Output:
- Valid: result and unit, e.g. `32 F`
- Unsupported direction: `Unsupported direction`
- Not a number: `Invalid input`

Team edge case: `C2F -40` gives `-40 F` (negative temperature).

## Build and Test
    bash test.sh

## Limitations
- Direction is case-sensitive.
- Output uses default C++ precision (about 6 digits).

## AI-Use Disclosure
I used AI to help debug issues throughout code.
