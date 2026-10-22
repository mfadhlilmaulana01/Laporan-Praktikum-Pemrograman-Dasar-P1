def sum_digits(n):
    if n < 10:
        return n
    return n % 10 + sum_digits(n // 10)
 
 
n = int(input("Masukkan bilangan bulat positif: "))
print(f"Jumlah digit dari {n} adalah {sum_digits(n)}")