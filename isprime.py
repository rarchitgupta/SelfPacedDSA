def isPrime(N):
    i = 2
    while i * i <= N:
        if N % i == 0:
            return False
        i = i + 1
    return True
