# SERVER SIDE CODE
import socket

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as conn:
    conn.bind(("localhost", 9090))
    conn.listen()
    c, cip = conn.accept()
    recieves = c.recv(1024)
    c.send(b'Recieved message from client')
