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

# Schematic,PCB and CAD



![Screenshot 2025-06-01 120309](https://github.com/user-attachments/assets/30ce5ad7-5308-4512-81ba-b89dfbd0d033)
![Screenshot 2025-06-02 104941](https://github.com/user-attachments/assets/0d1cc254-d417-4dd4-8ffd-4cc8e4a72c37)
![Screenshot 2025-06-02 104817](https://github.com/user-attachments/assets/341994d1-017a-4491-b34c-0a080585eaeb)
![image](https://github.com/user-attachments/assets/23f53b2f-fdf5-4e8a-bedb-ba65003b15b9)
![image](https://github.com/user-attachments/assets/877b48a0-fadc-4b53-af88-1c6cbfe72fcc)


# BOM 
---
| Product Name                                      | Retailer | Price ($) |
|---------------------------------------------------|----------|-----------|
| E-ink Display                                     | LCSC     | 18.16     |
| FFC, FPC Connector                                | LCSC     | 0.79      |
| MOSFET (SI2301CDS-T1-E3)                         | LCSC     | 0.77      |
| DIP Switch                                        | LCSC     | 0.72      |
| LDO Regulator (RT9193-33GB)                       | LCSC     | 0.54      |
| USB to UART Converter                             | LCSC     | 1.13      |
| WiFi Module (ESP32-WROOM-32E-N4)                  | LCSC     | 3.89      |
| Passive Components (Grouped)                      | LCSC     | 5.08      |
| **Subtotal (Merchandise)**                        | **LCSC** | **31.51** |
| Shipping                                          | LCSC     | 3.73      |
| **Total**                                          | **LCSC** | **35.24** |
|PCB                                                | JLCPCB   | 2$        |
|Shipping                                           |JLCPCB    | 8.32$     |
|Solder Paste+ Tweezers                             |Amazon    |8$         |
| **SUB TOTAL**                                     |          |**53.56**  |
