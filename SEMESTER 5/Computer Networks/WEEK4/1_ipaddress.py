import socket

host_name = socket.gethostname()
# Host Name
print(f"Host name: {host_name}")

# ip Address
print(f"IP Address: {socket.gethostbyname(host_name)}")
