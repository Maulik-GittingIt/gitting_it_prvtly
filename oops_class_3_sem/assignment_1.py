num = int(input("Enter a number: "))

print("Prime factors of", num, ":")

for i in range(2, num + 1):
    if num % i == 0:   # check if i is a factor
        # check if i is prime
        is_prime = True
        for j in range(2, i):
            if i % j == 0:
                is_prime = False
                break
        if not is_prime:
            continue   # skip non-primes

        print(i)       # i is a prime factor

        # break condition: once found, stop checking further multiples of i
        break
