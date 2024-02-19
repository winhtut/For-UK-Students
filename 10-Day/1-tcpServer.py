import socket

def start_server(host='192.168.1.13', port=12345):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server_socket:
        server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        server_socket.bind((host, port))
        server_socket.listen()
        print(f"Server listening on {host}:{port}")

        while True:
            client_socket, addr = server_socket.accept()
            with client_socket:
                print(f"Connected by {addr}")
                try:
                    while True:
                        data = client_socket.recv(1024)
                        if not data:
                            break  # Connection closed by the client
                        print(f"Received: {data.decode()}")
                        # Here you can also send data back to ESP32 if needed
                        # client_socket.sendall(b"Data received")
                except ConnectionResetError:
                    print("Connection reset by peer")
                except Exception as e:
                    print(f"An error occurred: {e}")
                finally:
                    print(f"Connection with {addr} closed")

if __name__ == "__main__":
    start_server()
