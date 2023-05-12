import socket 

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client:
    client.connect(('localhost', 3000))
    done = False
    while not done:
        data = input("Enter Message: ").encode('utf-8')
        client.send(data)
        message = client.recv(1024).decode('utf-8')
        if message.lower() == "quit":
            done = True
        else:
            print(f"Server: {message}")