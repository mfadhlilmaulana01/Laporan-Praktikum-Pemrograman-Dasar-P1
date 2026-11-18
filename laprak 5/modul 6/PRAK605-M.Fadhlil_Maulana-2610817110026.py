def main():
    n = int(input())
    A = [list(map(int, input().split())) for _ in range(n)]
    B = [list(map(int, input().split())) for _ in range(n)]
 
    C = [[sum(A[i][k] * B[k][j] for k in range(n)) for j in range(n)] for i in range(n)]
 
    print("Matriks AXB")
    for row in C:
        print(*(row))
 
if __name__ == "__main__":
    main()