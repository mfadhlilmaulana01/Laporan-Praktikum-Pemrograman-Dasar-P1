def main():
    n = int(input())
    zetsu = list(map(int, input().split()))
 
    hasil = [zetsu[i] * (i + 1) for i in range(n)]
    print(*(hasil))
 
if __name__ == "__main__":
    main()