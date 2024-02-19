import socket

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
    HOST, PORT = "server_ip_here", 12345  # Server IP and port
    MESSAGE = "Hello, TCP Server!"

    tcp_client(HOST, PORT, MESSAGE)
