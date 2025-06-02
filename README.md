# Desk-Display

It is a desk display made using an E-Ink display.

---

## PARTS

I will be using the following components:

- SEEKINK 5.83 inch display  
- ESP32 WROOM  
- CH343P USB-UART  

---

## Plan

I want to make a display that can show anything, but for me, I want it to display the current **day**, **date**, and **time**, along with a **To-Do list** at the bottom.

What I want to do is have the program fetch the day, date, and time details from the Wi-Fi network the ESP32 is connected to. For the To-Do list, I will use a **website hosted on the ESP32 server** to update the data whenever I want.

The display won't be battery powered — although it can be — but I don't want that for now. It will be powered through **USB-C**. For that, I’ve also added a **switch** to disconnect the board from programming mode by turning off the CH343 IC.

# Schematic and PCB



![Screenshot 2025-06-01 120309](https://github.com/user-attachments/assets/30ce5ad7-5308-4512-81ba-b89dfbd0d033)
![Screenshot 2025-06-02 104941](https://github.com/user-attachments/assets/0d1cc254-d417-4dd4-8ffd-4cc8e4a72c37)
![Screenshot 2025-06-02 104817](https://github.com/user-attachments/assets/341994d1-017a-4491-b34c-0a080585eaeb)

