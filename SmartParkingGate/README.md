
# 🚗 Smart Parking Gate | بوابة مواقف ذكية

A Smart Parking Gate simulation built using Arduino Uno and Tinkercad.  
محاكاة لبوابة مواقف ذكية باستخدام Arduino Uno ومنصة Tinkercad.

---

## 📖 Overview | نبذة عن المشروع

The Smart Parking Gate is an Arduino-based project that automates the opening and closing of a parking gate using an HC-SR04 ultrasonic sensor. When a vehicle or object is detected within a specified distance, the servo motor opens the gate automatically. The system also displays the gate status on an LCD screen, uses an RGB LED to indicate the gate status, and activates a buzzer for audio notification.

يعتمد مشروع **بوابة المواقف الذكية** على لوحة Arduino Uno للتحكم الآلي في فتح وإغلاق بوابة المواقف باستخدام حساس الموجات فوق الصوتية HC-SR04. عند اكتشاف مركبة أو جسم ضمن مسافة محددة، يقوم محرك السيرفو بفتح البوابة تلقائيًا، بينما تعرض شاشة LCD حالة البوابة، ويعرض LED RGB حالة النظام، ويصدر البازر تنبيهًا صوتيًا.

---

## ✨ Features | المميزات

- Automatic gate opening and closing. | فتح وإغلاق البوابة تلقائيًا.
- Vehicle detection using the HC-SR04 ultrasonic sensor. | اكتشاف المركبات باستخدام حساس HC-SR04.
- Servo motor gate mechanism. | التحكم في البوابة بواسطة محرك Servo.
- LCD 16×2 I2C status display. | عرض حالة النظام على شاشة LCD.
- RGB LED status indication (Green = Open, Red = Closed). | استخدام LED RGB لعرض حالة البوابة (الأخضر = مفتوحة، الأحمر = مغلقة).
- Audible buzzer notification. | تنبيه صوتي باستخدام البازر.
- Real-time distance monitoring. | قياس المسافة بشكل مستمر.

---

## 🛠 Components | المكونات

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- LCD 16×2 I2C Display
- RGB LED (Common Cathode)
- Piezo Buzzer
- Breadboard
- Jumper Wires
- 220Ω Resistors

---

## 🔌 Pin Configuration | توصيل المنافذ

| Component | Arduino Pin |
|-----------|-------------|
| Servo Motor | D9 |
| HC-SR04 Trigger | D7 |
| HC-SR04 Echo | D6 |
| RGB LED (Red) | D2 |
| RGB LED (Green) | D3 |
| Buzzer | D8 |
| LCD SDA | A4 |
| LCD SCL | A5 |

---

## ⚙️ How It Works | آلية العمل

1. The ultrasonic sensor continuously measures the distance.  
   يقيس الحساس المسافة بشكل مستمر.

2. When an object is detected within the predefined distance, the servo motor opens the gate automatically.  
   عند اكتشاف جسم ضمن المسافة المحددة، يقوم السيرفو بفتح البوابة تلقائيًا.

3. The RGB LED changes to **green**, the buzzer sounds, and the LCD displays **"Gate Open"**.  
   يتحول LED RGB إلى اللون الأخضر، ويصدر البازر تنبيهًا، وتعرض الشاشة رسالة **"Gate Open"**.

4. When the object moves away, the servo closes the gate, the RGB LED changes to **red**, and the LCD displays **"Gate Closed"**.  
   عند ابتعاد الجسم، يغلق السيرفو البوابة، ويتحول LED RGB إلى اللون الأحمر، وتعرض الشاشة رسالة **"Gate Closed"**.

---

## 📂 Project Files | ملفات المشروع

- `smart_parking_gate1.ino` — Arduino source code.
- `Smart Parking Gate.pdf` — Circuit schematic.
- `Smart Parking Gate.png` — Circuit design image.
- `README.md` — Project documentation.

---

## 📷 Circuit Preview | معاينة الدائرة

![Circuit](Smart%20Parking%20Gate.png)

---
## 🎥 Project Demo | عرض المشروع

A demonstration of the Smart Parking Gate project is available at the link below.

يتوفر عرض عملي لمشروع بوابة المواقف الذكية من خلال الرابط التالي.

🔗 **Demo Video | فيديو المشروع:**

https://github.com/DevRah0/Electronics-Electrical_Power_Eng/discussions/1#discussioncomment-17717451
---
## 💻 Development Platform | بيئة التطوير

- Arduino IDE
- Tinkercad Circuits

---

## 👨‍💻 Author | المطور

**Abdulrahman Alrubaie**
