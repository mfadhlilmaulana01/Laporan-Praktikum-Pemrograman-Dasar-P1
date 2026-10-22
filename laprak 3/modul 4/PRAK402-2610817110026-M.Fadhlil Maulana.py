limit = int(input("Masukkan batas maksimal: "))
 
for i in range(1, limit + 1):
    if i % 2 == 1:
        print(i, end=" ")
print()
 
for i in range(limit, 0, -1):
    if i % 2 == 0:
        print(i, end=" ")
print()