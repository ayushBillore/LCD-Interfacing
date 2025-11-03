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

Insert your circuit diagram here, showing the connections between the **Arduino Uno** and the **16x2 LCD**.  
Example placeholder:

```markdown
![LCD Arduino Circuit Diagram](circuit-diagram.png)
