# Question 1:

def fibo(n) -> int:
    first, second, third = 0, 1, 0
    for _ in range(1, n + 1):
        third = first + second
        first, second = second, third
    return first


def prime(n: int) -> int:
    x, c = 1, 0
    while c < n:
        x += 1
        k = 2
        for i in range(2, x + 1):
            if not x % i:
                break
            k += 1
        if k == x:
            c += 1
    return x


n = int(input("Enter nth terms : "))
print(f"Nth Term value: {fibo(n // 2 + 1) if n % 2 else prime( n // 2)}")
