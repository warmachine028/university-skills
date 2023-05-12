import socket

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server:
    server.bind(('localhost', 3000))
    server.listen()
    client, addr = server.accept()
    client.send("Enter OTP: ".encode())
    otp = client.recv(1024).decode()
    message: str
    if otp != '1234':
        message = "Unauthenticated"
        client.send(message.encode())
        exit()
    message = "Authenticated"
    client.send(message.encode())
    data = client.recv(1024).decode()
    print(f"Client: {data}")
    message = input("Enter message: ")
    client.send(message.encode())
