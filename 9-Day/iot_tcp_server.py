import socket

# Set up a TCP/IP server
tcp_server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to the server address and port
server_address = ('192.168.1.13', 12345)  # Use your computer's IP and a port
tcp_server_socket.bind(server_address)

# Listen for incoming connections (max 1 client in the queue)
tcp_server_socket.listen(1)

print("Waiting for a connection...")

# Wait for a connection
connection, client_address = tcp_server_socket.accept()
try:
    print(f"Connection from {client_address}")

    # Receive the data in small chunks and retransmit it
    while True:
        data = connection.recv(16)  # Adjust buffer size if needed
        print(f"Received: {data.decode()}")
        if data:
            # Send data back as acknowledgment
            connection.sendall(data)
        else:
            # No more data from the client, break the loop
            break
finally:
    # Clean up the connection
    connection.close()
