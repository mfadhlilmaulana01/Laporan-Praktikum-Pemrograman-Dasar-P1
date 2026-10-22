my_name = "M. Fadhlil Maulana"
 
while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    choice = int(input("Masukkan Pilihan : "))
 
    if choice == 5:
        print("Terimakasih, telah menggunakan kalkulator",
              my_name)
        break
    elif choice >= 1 and choice <= 4:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))
 
        if choice == 1:
            operation = "penjumlahan"
            result = a + b
        elif choice == 2:
            operation = "pengurangan"
            result = a - b
        elif choice == 3:
            operation = "perkalian"
            result = a * b
        elif b != 0:
            operation = "pembagian"
            result = a / b
 
        if choice == 4 and b == 0:
            print("Pembagian dengan nol tidak bisa dilakukan")
        else:
            print(f"Hasil {operation} antara {a:.2f}",
                  f"dengan {b:.2f} adalah {result:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")
    print()