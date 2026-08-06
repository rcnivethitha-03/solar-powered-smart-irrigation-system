# 🌱 Solar-Powered IoT Smart Irrigation System

An ESP32-based smart irrigation system that automates irrigation using real-time soil moisture sensing, water flow monitoring, solar-powered operation, and Blynk IoT for remote monitoring and control.

---

## 📌 Overview

The **Solar-Powered IoT Smart Irrigation System** is designed to improve agricultural irrigation by automatically watering crops based on real-time soil moisture conditions. The system continuously monitors soil moisture, water flow, and tank water levels while enabling remote monitoring and manual control through the **Blynk IoT platform**.

Powered by a **solar panel**, **MPPT charge controller**, and **rechargeable battery**, the system provides an energy-efficient and sustainable irrigation solution suitable for farms and remote agricultural environments.

---

## ✨ Features

- 🌱 Automatic irrigation based on soil moisture
- ☀️ Solar-powered operation using MPPT charging
- 💧 Real-time water flow monitoring
- 🚰 Automatic water tank level monitoring
- 📱 Remote monitoring and manual control through Blynk IoT
- ⚡ ESP32-based embedded control system
- 🔔 Low water level alert
- 🔄 Relay-controlled pump automation
- 📊 Live sensor monitoring

---

## 🛠 Hardware Used

- ESP32 Development Board
- Soil Moisture Sensor (YL-69)
- Water Flow Sensor (YF-S201)
- Float Level Sensor
- Relay Module
- 12V Water Pump
- Solar Panel
- MPPT Solar Charge Controller
- Lithium-Ion Battery
- Buck Converter
- Buzzer

---

## 💻 Software Used

- Arduino IDE
- Embedded C++
- ESP32 Wi-Fi Library
- Blynk IoT Platform

---

## ⚙ Working Principle

1. The soil moisture sensor continuously measures the moisture level of the soil.
2. When the moisture level falls below a predefined threshold, the ESP32 automatically switches ON the irrigation pump.
3. The water flow sensor measures the amount of water supplied during irrigation.
4. The float sensor monitors the storage tank level.
5. If the tank level becomes low, the refill pump is activated automatically.
6. The complete system is powered using a solar panel with MPPT charging and a rechargeable battery.
7. Users can remotely monitor sensor values and control the system through the Blynk mobile application.

---

# 📷 Hardware Prototype

<p align="center">
  <img src="images/Hardware.png" width="650">
</p>

---

# 📱 Blynk Dashboard

<p align="center">
  <img src="images/Blynk1.png" width="250">
  <img src="images/Blynk2.png" width="250">
</p>

---

## 📊 Results

The developed prototype successfully demonstrated:

- Automatic irrigation based on soil moisture levels
- Real-time water flow monitoring
- Autonomous water tank refilling
- Stable solar-powered operation
- Remote monitoring and control through Blynk IoT
- Improved water-use efficiency with minimal human intervention

---

## 📂 Repository Structure

```text
solar-powered-smart-irrigation-system
│
├── README.md
├── Smart_Irrigation.ino
├── smart_irrigation_report.pdf
└── images/
    ├── Hardware.png
    ├── Blynk1.png
    └── Blynk2.png
```

---

## 💻 Source Code

The complete ESP32 Arduino program used in this project can be accessed here:

➡️ **[Smart_Irrigation.ino](Smart_Irrigation.ino)**

---

## 📄 Project Report

A detailed report explaining the system design, implementation, hardware setup, and experimental results is available here:

➡️ **[Smart Irrigation Project Report](smart_irrigation_report.pdf)**

---

## 🚀 Future Improvements

- AI-based irrigation prediction
- Weather forecast integration
- Cloud database storage
- Mobile notifications
- Crop-specific irrigation scheduling
- Machine learning for irrigation optimization
- Water consumption analytics

---

## 👩‍💻 Author

**Nivethitha R**

Electrical and Electronics Engineering Graduate


## ⭐ Support

If you found this project useful, consider giving this repository a **Star ⭐**.
