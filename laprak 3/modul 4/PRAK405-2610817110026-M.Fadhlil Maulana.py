n = int(input("Masukkan banyak baris: "))
multiple = int(input("Masukkan kelipatan: "))
 
total = 0
for i in range(1, n + 1):
    row_sum = 0
    for j in range(i, 0, -1):
        print(f"({j} * {multiple})", end="")
        row_sum += j * multiple
        if j > 1:
            print(" + ", end="")
    print(" =", row_sum)
    total += row_sum
 
print(total)