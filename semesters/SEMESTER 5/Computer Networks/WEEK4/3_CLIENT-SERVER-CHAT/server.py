import socket

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server:
    server.bind(('localhost', 3000))
    server.listen()
    client, addr = server.accept()
    done = False
    while not done:
        message = client.recv(1024).decode("utf-8")
        if message.lower() == "quit":
            done = True
        else:
            print(message)
        data = input("Message: ").encode("utf-8")
        client.send(data)
