def hanoi_steps(n):
    if n == 0:
        return 0
    return 2 * hanoi_steps(n - 1) + 1
 
 
n = int(input("Masukkan jumlah cakram: "))
steps = hanoi_steps(n)
print(f"Jumlah langkah minimum untuk {n} cakram adalah", steps)