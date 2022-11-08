# Implement on a data set of characters the three CRC polynomials CRC 12, CRC 16 and CRC CCIP


def main():
    quot = ["0"] * 100
    rem = ["x"] * 100
    data = input("Enter data: ")
    generator = input("Enter genertator: ")

    datalen = len(data)
    genlen = len(generator)
    dup_generator = generator
    data += "0" * (genlen - 1)
    temp = data[:genlen]
    print(data)
    for i in range(datalen):
        quot[i] = temp[0]
        if quot[i] == "0":
            for j in range(genlen):
                g = list(generator)
                g[j] = "0"
                generator = "".join(g)
        else:
            for j in range(genlen):
                g = list(generator)
                g[j] = dup_generator[j]
                generator = "".join(g)
        for j in range(genlen - 1, 0, -1):
            if temp[j] == generator[j]:
                rem[j - 1] = "0"
            else:
                rem[j - 1] = "1"
        print(len(data), i + genlen)
        rem[genlen - 1] = data[i + genlen]
        temp = rem
    rem = temp
    rem = ''.join(rem)
    quot = ''.join(quot)
    print(f"Quotient is: {quot[: datalen]}")
    print(f"Remainder is: {rem[:genlen-1]}")
    print(f"Final Data is: {data[:datalen]}{''.join(rem)}")

    # Reciever's End
    temp1 = input('Enter recieved Data: ')
    temp = temp1
    rem = list(rem)
    quot = list(quot)
    for i in range(datalen):
        quot[i] = temp[0]
        if quot[i] == "0":
            for j in range(genlen):
                g = list(generator)
                g[j] = "0"
                generator = "".join(g)
        else:
            for j in range(genlen):
                g = list(generator)
                g[j] = dup_generator[j]
                generator = "".join(g)
        for j in range(genlen - 1, 0, -1):
            if temp[j] == generator[j]:
                rem[j - 1] = "0"
            else:
                rem[j - 1] = "1"
        rem[genlen - 1] = data[i + genlen]
        temp = rem
    rem = temp

    print(f"Quotient is: {quot[: datalen]}")
    print(f"Remainder is: {rem[:genlen-1]}")

    flag = 0
    for i in range(genlen - 1):
        if rem[i] == '1':
            flag = 1
        else:
            flag = 0
    if flag == 0:
        print('No Error')
    else:
        print('Error Detected')

main()