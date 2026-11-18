def main():
    n1, n2 = map(int, input().split())
    if n1 != n2:
        print("Jumlah tidak sama")
        return
 
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
 
    hasil = [baris1[i] * baris2[i] for i in range(n1)]
    print(*(hasil))
 
if __name__ == "__main__":
    main()