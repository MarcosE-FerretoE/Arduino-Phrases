import serial

# ser = serial.Serial("COM3", 9600, timeout=1)

ser = serial.Serial("/dev/ttyACM0", 9600, timeout=1)

while True:
    if ser.in_waiting > 0:
        mensaje = ser.readline().decode("utf-8").strip()
        print("Mensaje recibido desde Arduino:", mensaje)
