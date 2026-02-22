<h1 align="center">🌡️ Smart Temperature & Humidity Display with IR Control (ESP32)</h1>

<p align="center">
An IoT-based smart environmental monitoring system that displays temperature & humidity while also acting as a universal IR remote controlled from anywhere in the world.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Platform-ESP32-blue">
  <img src="https://img.shields.io/badge/Sensor-DHT22-green">
  <img src="https://img.shields.io/badge/IoT-Blynk-orange">
  <img src="https://img.shields.io/badge/Communication-IR%20Blaster-red">
</p>

---

<h2>📌 Project Overview</h2>

<p>
This project is a <b>Smart Temperature and Humidity Monitoring System</b> built using an ESP32.
It continuously measures room conditions using a <b>DHT22 sensor</b> and displays the readings on a 
<b>4-digit 7-segment display</b>.
</p>

<p>
The system also functions as an <b>IR Blaster</b>, allowing you to control IR-based devices such as:
</p>

<ul>
<li>TV</li>
<li>Fan</li>
<li>Soundbar</li>
<li>Air Conditioner</li>
<li>Any IR-supported appliance</li>
</ul>

<p>
Using <b>Blynk IoT</b>, devices can be controlled remotely from anywhere in the world 🌍.
</p>

---

<h2>⚙️ Features</h2>

<ul>
<li>Real-time Temperature Monitoring</li>
<li>Humidity Measurement</li>
<li>4-Character 7-Segment Display Output</li>
<li>IR Signal Decoding & Transmission</li>
<li>Remote Device Control via Internet</li>
<li>IoT Integration using Blynk</li>
<li>Global Remote Access</li>
</ul>

---

<h2>🧰 Hardware Components</h2>

<ul>
<li>ESP32</li>
<li>DHT22 Temperature & Humidity Sensor</li>
<li>IR Receiver Module</li>
<li>IR Transmitter LED</li>
<li>2N2222 Transistor</li>
<li>470Ω Resistor</li>
<li>4-Character 7-Segment Display</li>
<li>Jumper Wires</li>
<li>Power Supply</li>
</ul>

---

<h2>🧠 Working Principle</h2>

<h3>1️⃣ Temperature & Humidity Monitoring</h3>
<ul>
<li>DHT22 sensor reads environmental data.</li>
<li>ESP32 processes sensor readings.</li>
<li>Values displayed on 7-segment display.</li>
</ul>

<h3>2️⃣ IR Signal Decoding</h3>
<ul>
<li>Original remote of the fan/device used.</li>
<li>IR Receiver captures raw IR signals.</li>
<li>Signals decoded using IR library.</li>
</ul>

<h3>3️⃣ IR Transmission</h3>
<ul>
<li>Decoded signals stored inside ESP32.</li>
<li>IR LED transmits signals using transistor driver circuit.</li>
<li>Acts as a universal remote.</li>
</ul>

<h3>4️⃣ IoT Remote Control</h3>
<ul>
<li>ESP32 connected to Blynk Cloud.</li>
<li>User sends command through Blynk App.</li>
<li>ESP32 transmits saved IR signal.</li>
<li>Device controlled from anywhere in the world.</li>
</ul>

---

<h2>📡 System Architecture</h2>

<p align="center">
DHT22 → ESP32 → Display Output<br>
Blynk App → Internet → ESP32 → IR Blaster → Home Appliance
</p>

---

<h2>📱 Blynk Integration</h2>

<ul>
<li>ESP32 connected to WiFi</li>
<li>Blynk dashboard configured</li>
<li>Virtual buttons trigger IR commands</li>
<li>Remote device automation enabled</li>
</ul>

---

<h2>📁 Project Structure</h2>

<pre>
Smart-Temp-Humidity-IR-Control/
│
├── Smart Temp Humidity Display Code.ino
└── README.md
</pre>

---

<h2>🚀 Setup Instructions</h2>

<h3>1️⃣ Install Required Libraries</h3>

<ul>
<li>DHT Sensor Library</li>
<li>IRremote Library</li>
<li>Blynk Library</li>
<li>TM1637 / 7-Segment Display Library</li>
</ul>

<h3>2️⃣ Decode IR Signals</h3>
<ul>
<li>Connect IR receiver</li>
<li>Read signals from original remote</li>
<li>Save decoded HEX values</li>
</ul>

<h3>3️⃣ Configure Blynk</h3>
<ul>
<li>Create new Blynk project</li>
<li>Add buttons/widgets</li>
<li>Insert Auth Token in code</li>
</ul>

<h3>4️⃣ Upload Code</h3>
<ul>
<li>Select ESP32 board</li>
<li>Upload Arduino sketch</li>
<li>Power the system</li>
</ul>

---

<h2>✨ Applications</h2>

<ul>
<li>Smart Home Automation</li>
<li>Environmental Monitoring</li>
<li>Universal Remote System</li>
<li>IoT Learning Project</li>
<li>Remote Appliance Control</li>
</ul>

---

<h2>🔮 Future Improvements</h2>

<ul>
<li>Automatic fan control based on temperature</li>
<li>Mobile notifications</li>
<li>Voice assistant integration</li>
<li>AI-based climate optimization</li>
<li>Energy usage monitoring</li>
</ul>

---

<h2>⭐ Support</h2>

<p>If you found this project helpful, please consider giving it a ⭐ on GitHub!</p>
