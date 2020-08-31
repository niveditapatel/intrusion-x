
from picamera import PiCamera
from time import sleep

camera = PiCamera()
#~ camera.start_preview()
#~ sleep(5)
#~ camera.capture('/home/pi/Desktop/motion')
#~ camera.stop_preview()



    

    
import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(11, GPIO.IN)         #Read output from PIR motion sensor
GPIO.setup(3, GPIO.OUT)         #LED output pin
while True:
		i=GPIO.input(11)
		if i==0:                 #When output from motion sensor is LOW
			print "NO_Motion_detected",i
			GPIO.output(3, 0)  #Turn OFF LED
			time.sleep(0.1)
		elif i==1:               #When output from motion sensor is HIGH
			print "Motion_detected",i
			print "Image_Capturing",i
			camera.capture('/home/pi/Desktop/motion/image.jpg')
			GPIO.output(3, 1)  #Turn ON LED
			time.sleep(3)
