# **ESP32 Based Desk Display**
I'm building a desk display using a 5.83-inch E-Paper screen and an ESP32. It will show the current time, day, date, and a small To-Do list.
---

## **Day 1 - 25th May**

Today I completed the E-paper interfacing circuit. I want to use the SEEINK 5.83 inch display since it's cheap but lacks enough documentation. So, I researched and found out that Waveshare also makes the same display but it's more expensive. I compared their datasheets and found that they are almost pin-to-pin compatible. I took reference from both the docs and completed it.  

**Total time spent:** 3–4 hrs

![DAY1](https://github.com/user-attachments/assets/b9c99256-d3d3-4a97-aeba-5aacd921ef1f)

---

# **Day 2 - 27th May**

Today I completed the UART and ESP32 interface. This will help in programming the ESP32. I will be using a CH343P chip and Type-C for the UART communication. I had never used the CH343P chip before, so I had to read the datasheets extensively and took reference from example circuits online.  
After this, I need to start with the power portion.  

**Time spent:** 2 hr

![DAY2](https://github.com/user-attachments/assets/ee61eb70-cd49-4f7b-89f9-a1fff4d9d3fc)


---

# **Day 3 - 28th May**

I started the power portion. I used different regulator ICs for the E-paper display and ESP32. I have added a portion to turn off the display by controlling it using the ESP32.  
I had to go through many E-paper display examples to decide on the right regulator.  

**Time spent:** 1 hr

![DAY3](https://github.com/user-attachments/assets/78b85cc3-4be8-48f6-a862-25df2f65dc56)




---

# **Day 4 - 30th May**

Now I completed the schematic completely and labeled the sections for better readability. Also, I assigned all the footprints.  
Majorly, I will be using 0603 for the resistors and capacitors.  
I went through LCSC to find proper footprints.  
Began with the component placing. Initially, I thought I would be making the PCB double-sided. The tracing was getting too complex, so I scrapped the idea of making the PCB double-sided. Wasted a lot of time doing so.  

**Time spent:** 4 hr

![DAY 4](https://github.com/user-attachments/assets/3937fc1d-0e30-4b2a-b7ae-650bacf1edad)

---

# **Day 5 - 31st May**

Started to redo the PCB from scratch. Took me 4 hrs to complete the routing. It's still not perfect — will have to change a few things and remove errors.  
I have only kept the connector and some caps associated with it on the bottom layer.  
**Time spent:** 4 hr

---

# **Day 6 - 1st June**

Completed rectifying all the errors.  
Here is the close-to-done PCB.  
![DAY6](https://github.com/user-attachments/assets/e812fab0-f6f9-49e1-8539-b32de696f678)

**Time spent:** 2 hr

---

# **Day 7 - 2nd June**

Started with the case. Took reference from the datasheets of the display. Wanted to make it look sleek. However its not the final version since i need to get the hardware first and then will make the necessary changes
Here are the images.  

![DAY7-1](https://github.com/user-attachments/assets/9dcc3c0a-7416-42a3-839b-cfef1bd7759a)

Also Completed the PCB 

![DAY7-2](https://github.com/user-attachments/assets/1a97d2b4-37fc-4b3b-aebb-5d3b4f38b8f5)
![DAY7-3](https://github.com/user-attachments/assets/82960624-fa69-4bd6-8fa2-d0a1f509b176)

**Time spent:** 3 hr
