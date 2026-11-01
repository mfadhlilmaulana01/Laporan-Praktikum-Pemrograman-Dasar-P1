def maksimal(a, b):
    if a > b:
        return a
    return b
 
def minimal(a, b):
    if a < b:
        return a
    return b
 
bilangan = int(input())
data = input().split()
 
maks = -100000
minim = 100000
for i in range(bilangan):
    nilai = int(data[i])
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
 
print(maks, minim)