# intrusion-x
Parts of the code for the hardware project we made for the initial prototyping of a wild animal intrusion system that would help alert farmers when wild animals enter their fields using Raspberry Pi.

pir.py- This is the code that is used to auto start the camera upon detection of motion in the PIR sensor.

classification- personal implementation of the classification of images into animal/ not animal using method defined by Sergey Volchkov; tested on Snapshot Serengeti image set.

![alt text](https://github.com/ShireenPatel/intrusion-x/blob/master/images/Screenshot%20(129).png?raw=true)

# Implementation
# 1. Motion Activated Camera System
1. PIR sensor: A passive infrared sensor (PIR sensor) is an electronic sensor. It measures infrared (IR) light radiating from objects in its view. PIR sensors are commonly used in motion based systems. In our system also, the PIR Sensor is used in order to detect motion.
2. Raspberry Pi 3: The Raspberry Pi is a small sized, low cost computer that plugs into a computer monitor or TV, and uses a standard keyboard and mouse. It works with languages like python and can be used to implement IOT technologies and explore on it.
3. Raspberry Pi camera module: This camera module is capable of taking good resolution photographs and it has been designed for the Raspberry Pi and has useful inbuilt libraries that are readily available. In the system, the camera is activated when the PIR Sensor detects motion and the camera captures an image which is saved.
![alt text](https://github.com/ShireenPatel/intrusion-x/blob/master/images/Screenshot%20(132).png?raw=true)

# 2. Alert System
Blynk app: It is a platform available on both iOS and Android devices to control and manage the arduino, raspberry pi and similar IoT devices. A graphic interface could be easily made using the digital dashboard available. When an animal is detected, a text message would be sent to the farmer through the blynk application.
![alt text](https://github.com/ShireenPatel/intrusion-x/blob/master/images/Screenshot%20(134).png?raw=true)

# 3. Image Processing
A convolutional neural network has been used on Snapshot Serengeti dataset to determine whether the images taken contain an animal or not. Based on this the images can be classified as animal and not animal. The accuracy is about 85% and the system is able to correctly predict where the animal is in the foreground.

![alt text](https://github.com/ShireenPatel/intrusion-x/blob/master/images/Screenshot%20(130).png?raw=true)
![alt text](https://github.com/ShireenPatel/intrusion-x/blob/master/images/Screenshot%20(131).png?raw=true)

# Working
The PIR sensor is attached to the 11th GPIO pin of raspberry pi. The camera module is also attached to the pi. After booting the pi followed by running the code, when you try to create a movement in front of the PIR sensor, camera module will become active and take an image. The image gets stored in a folder which is then fed to the already trained CNN model.
Wifi network settings has to be given in the ssid and password variables to connect the respective device and the Raspberry Pi. On the Blynk app, a new project needs to be created. Different features like alert, notification and various other buttons can be used. When a animal will be detected, a text alert will be sent to the phone via the Blynk app used.  




