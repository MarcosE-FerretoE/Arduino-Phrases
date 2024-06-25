import serial

# PORT = "COM3"
PORT = "/dev/ttyACM0"
BAUD_RATE = 9600
TIMEOUT = 1


def main():
    try:
        with serial.Serial(PORT, BAUD_RATE, timeout=TIMEOUT) as ser:
            print(f"Leyendo desde {PORT}...")
            while True:
                if ser.in_waiting > 0:
                    mensaje = ser.readline().decode("utf-8").strip()
                    print("Mensaje recibido desde Arduino: ", mensaje)

    except serial.SerialException as e:
        print(f"Error de comunicación serial: {e}")


if __name__ == "__main__":
    main()
