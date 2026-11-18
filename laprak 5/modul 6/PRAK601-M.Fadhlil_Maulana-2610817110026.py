def main():
    baris, kolom = map(int, input().split())
    elemen = list(map(int, input().split()))
 
    for i in range(baris):
        row_elements = elemen[i * kolom : (i + 1) * kolom]
        print(*(row_elements))
 
if __name__ == "__main__":
    main()