import socket
import serial
import time
def tcp_client(server_ip, server_port, message):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client_socket:
        try:
            # Connect to server
            client_socket.connect((server_ip, server_port))
            print(f"Connected to {server_ip}:{server_port}")

            # Send data
            client_socket.sendall(message.encode())
            print(f"Message sent: {message}")

            # Receive response
            response = client_socket.recv(4096)  # Adjust buffer size as needed
            print(f"Received: {response.decode()}")

        except Exception as e:
            print(f"An error occurred: {e}")


if __name__ == "__main__":
    HOST, PORT = "192.168.1.13", 12345  # Server IP and port
    ser = serial.Serial('COM3', 9600, timeout=1)
    time.sleep(2)
    try:
        while True:
            if ser.in_waiting > 0:
                line = ser.readline().decode('utf-8').rstrip()
                time.sleep(1)
                MESSAGE = line
                tcp_client(HOST, PORT, MESSAGE)
    except KeyboardInterrupt:
        print("Program terminated by user")
    finally:
        ser.close()  # Always close the serial connection when done
