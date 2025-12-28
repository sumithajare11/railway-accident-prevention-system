# Railway Accident Prevention System 🚆

## 📌 Overview
Railway accidents often occur due to human error, unmanned crossings, and late obstacle detection.  
This project presents an **IoT-based Railway Accident Prevention System** that enhances railway safety by automating gate control and detecting obstacles on railway tracks using sensors and microcontroller-based decision-making.

---

## 🎯 Problem Statement
- Accidents at **unmanned railway crossings**
- Delay in detecting **humans or animals on tracks**
- Dependence on **manual operation**, leading to human error

---

## 💡 Proposed Solution
The system uses **ultrasonic sensors** and an **ESP8266 microcontroller** to:
- Automatically close and open railway platform gates
- Detect obstacles (humans/animals) on tracks
- Alert the loco pilot in advance to prevent collisions

---

## 🏗️ System Architecture
The system consists of:
- Ultrasonic sensors for distance and obstacle detection  
- ESP8266 microcontroller for data processing  
- Stepper motor for automated gate control  
- Alert mechanism for driver warning  

*(Refer to circuit and block diagrams in the `/images` folder)*

---

## ⚙️ Hardware Requirements
- ESP8266 Microcontroller  
- Ultrasonic Sensor (HC-SR04)  
- Stepper Motor  
- Motor Driver Module  
- Power Supply  
- Connecting Wires  

---

## 💻 Software Requirements
- Arduino IDE  
- Embedded C / Arduino Programming  
- ESP8266 Libraries  

---

## 🔁 Working Methodology
1. Ultrasonic sensor continuously monitors track distance  
2. If an obstacle or train is detected within a threshold range:
   - Gate automatically closes
   - Warning signal is generated
3. Once the train passes safely:
   - Gate opens automatically
4. System resets for next operation

---

## 📊 Results & Discussion
- Successfully detected obstacles in real-time  
- Automated gate operation reduced dependency on manual control  
- Improved safety at unmanned railway crossings  
- Fast response time and reliable sensor performance  

---

## ✅ Advantages
- Reduces railway accidents  
- Minimizes human intervention  
- Low-cost and scalable solution  
- Suitable for real-time applications  

---

## 🚀 Applications
- Unmanned railway crossings  
- Railway platforms  
- Smart railway infrastructure  
- Railway safety systems  

---

## 🔮 Future Scope
- Integration with GPS for train tracking  
- GSM module for SMS alerts  
- AI-based obstacle classification  
- Centralized railway monitoring system  

---

## ▶️ How to Run
1. Open Arduino IDE  
2. Connect ESP8266 to system  
3. Upload source code from `/src` folder  
4. Power the circuit  
5. Monitor gate and alert operation  

---

## 👨‍💻 Authors
- **Sumit Shivaji Hajare**  
- Omkar Arun Tibile  
- Rushikesh Sunil Davari  

Electronics & Telecommunication Engineering  
Shivaji University, Kolhapur  

---

## Project Documentation

The detailed research paper for this project is available in the `docs` folder:

[Railway Accident Prevention System Report](docs/research paper.pdf)
