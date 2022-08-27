# CLIENT SIDE CODE
import socket

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as conn:
    conn.connect(("localhost", 9090))
    data = input()
    conn.send(data.encode())
    result = conn.recv(1024)
    print(result)
