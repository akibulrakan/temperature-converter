# 🌡️ Temperature Converter (C)

A simple command-line program written in C that converts temperatures between Celsius, Fahrenheit, and Kelvin.

## What it does

You choose a temperature scale, enter a value, and it instantly shows the equivalent values in the other two scales.

## Features

- Celsius ↔ Fahrenheit ↔ Kelvin conversion
- Menu-based system
- Input validation (checks impossible values like below absolute zero)
- Keeps running until you choose to exit

## How to run

Compile:
gcc main.c -o converter

Run:

Windows:
converter.exe

Linux / Mac:
./converter

## Future improvements (for later)

- Better input handling (avoid wrong input like letters)
- Cleaner output formatting (table style)
- Add more scales like Rankine
- Split code into multiple files when I learn more
