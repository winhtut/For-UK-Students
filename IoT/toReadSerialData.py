import serial
import time

# Create a serial object instance. Replace 'COM3' with your serial port name
# and 9600 with the baud rate configured on your Arduino or serial device
ser = serial.Serial('COM3', 9600, timeout=1)
time.sleep(2)  # Wait for the connection to establish

try:
    while True:
        if ser.in_waiting > 0:
            line = ser.readline().decode('utf-8').rstrip()
            time.sleep(1)
            print(line)
except KeyboardInterrupt:
    print("Program terminated by user")
finally:
    ser.close()  # Always close the serial connection when done
