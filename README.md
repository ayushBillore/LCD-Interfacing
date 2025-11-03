# Arduino Programming with LCD

Interfacing an LCD with an Arduino allows you to display text, data, and even custom characters for various applications.  
This guide explains how to connect a **16x2 LCD** to an **Arduino** and program it to display information.

---

## 🧰 Required Components

- Arduino Uno  
- 16x2 LCD  
- Breadboard  
- Jumper Wires  
- 10kΩ Potentiometer (for contrast adjustment)  
- 220Ω Resistor (for backlight)  
- Power Supply (5V)

---

## 🔌 Circuit Connections

### Power Supply
- Connect the **+5V pin** on the Arduino to the **+ rail** on the breadboard.  
- Connect the **GND pin** on the Arduino to the **– rail** on the breadboard.  

### LCD Power and Control Pins
| LCD Pin | Connection |
|----------|-------------|
| VSS | GND |
| VDD | +5V |
| V0 | Middle pin of potentiometer |
| RS | Arduino pin 12 |
| RW | GND |
| E | Arduino pin 11 |
| D4 | Arduino pin 5 |
| D5 | Arduino pin 4 |
| D6 | Arduino pin 3 |
| D7 | Arduino pin 2 |
| A (Anode) | +5V through 220Ω resistor (Backlight) |
| K (Cathode) | GND (Backlight) |

### Potentiometer Connections
- One terminal connected to **+5V**  
- Another terminal connected to **GND**  
- The **middle pin** connected to **V0** on the LCD for contrast control  

---

## 📊 Circuit Diagram

<img width="443" height="272" alt="image" src="https://github.com/user-attachments/assets/e7d48f84-fc7b-4c52-84e7-5c8a942f536c" />


---

# Arduino LCD Code Explanation

This document explains the step-by-step working of the Arduino program used to interface a **16x2 LCD** with an **Arduino Uno**.  
The program demonstrates how to initialize the LCD, display text, scroll messages, and update data in real time.

---

## 🧩 Code Explanation

### 1. Include the Library
The **LiquidCrystal** library is included at the beginning of the program.  
This library provides all the necessary functions to control the LCD, such as initializing the screen, setting the cursor, and printing text.

---

### 2. Initialize the LCD
An LCD object is created in the program, specifying which Arduino pins are connected to the LCD’s control and data lines.  
This step enables communication between the Arduino and the LCD module.

---

### 3. Setup Function
The **setup()** function initializes the LCD with **16 columns and 2 rows**.  
It then displays the message **"Hello, World!"** on the LCD screen and waits for 1 second.  
This serves as a simple test to confirm that the LCD is working correctly.

---

### 4. Scroll Display
The display is programmed to scroll the text to the right **16 times**, with a **150 ms delay** between each scroll.  
This feature demonstrates how the LCD can animate text movement, often used in dynamic display applications.

---

### 5. Clear Display and Set Cursor
After the scrolling demonstration, the display is cleared.  
The cursor is set to the **first column of the first row**, and the word **"Count:"** is printed.  
This prepares the LCD for displaying new data in a specific format.

---

### 6. Loop Function
Inside the **loop()** function, the LCD continuously updates the display.  
It sets the cursor to the **seventh column of the first row** and prints the number of seconds that have passed since the Arduino started running the program.  
This creates a live counter on the LCD, showing real-time updates every second.

---

## 🧠 Summary

In this project, we learned how to interface a **16x2 LCD** with an **Arduino**, covering:
- The inclusion of the **LiquidCrystal** library  
- Initialization of the LCD and its display settings  
- Displaying static and scrolling text  
- Clearing and updating display content dynamically  

The code initializes the LCD, prints a greeting, scrolls it across the screen, and then displays a running counter.  
This example serves as a foundational exercise for understanding how to display and update information on an LCD in Arduino-based projects.



