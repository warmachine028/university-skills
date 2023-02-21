import socket 

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client:
    client.connect(('localhost', 3000))
    data = client.recv(1024).decode()
    otp = input(f"{data}")
    client.send(otp.encode())
    response = client.recv(1024).decode()
    print(response)
    if response == "Unuthenticated":
        exit()
    data = 'Text'
    client.send(data.encode())
    message = client.recv(1024).decode()
    print(f"message From server: {message}")
    
