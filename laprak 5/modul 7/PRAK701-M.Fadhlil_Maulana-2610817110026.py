def main():
    depan = input("Nama Depan: ").strip()
    belakang = input("Nama Belakang: ").strip()
 
    lengkap = f"{depan} {belakang}"
    panjang = len(depan.replace(" ", "")) + len(belakang.replace(" ", ""))
 
    print(f"Nama Lengkap : {lengkap}")
    print(f"Panjang Nama (tanpa spasi): {panjang}")
 
if __name__ == "__main__":
    main()