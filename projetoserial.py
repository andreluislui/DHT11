import serial
import urllib2
import time

myAPI = "8R1LKQ4QJYNH6NAJ"

time.sleep(5)

ser = serial.Serial('/dev/ttyACM0', 9600)

baseURL = 'https://api.thingspeak.com/update?api_key=%s' % myAPI

while True:
    read_serial = ser.readline()

    umidade, temperatura, trash = read_serial.split(';')
    print ("Umidade: " + umidade + "% Temperatura: " + temperatura + " C")

    print ("Enviando para ThingSpeak...")
    f = urllib2.urlopen(baseURL + "&field1=%s&field2=%s" %(umidade,temperatura))
    print f.read()
    f.close()
    print ("Concluido!")
    print ("")
