# intrusion-x
parts of the code for the hardware project we made for the initial prototyping of a wild animal intrusion system that would help alert farmers when wild animals enter their fields using Raspberry Pi.

pir.py- This is the code that is used to auto start the camera upon detection of motion in the PIR sensor.

classification- personal implementation of the classification of images into animal/ not animal using method defined by Sergey Volchkov; tested on Snapshot Serengeti image set.

Our aim was to integrate such a classification method into the project so that the images could be processed and upon detection of an animal, the farmer would be alerted. 

For the alerts part, we had integrated a NodeMCU as it allowed interfacing options to Wifi and Bluetooth.


