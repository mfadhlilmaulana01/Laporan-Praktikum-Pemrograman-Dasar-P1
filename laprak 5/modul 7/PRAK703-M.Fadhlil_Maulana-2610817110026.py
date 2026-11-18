def main():
    kalimat = input("Kalimat: ").lower()
 
    vokal_set = set("aiueo")
    vokal = 0
    konsonan = 0
 
    for c in kalimat:
        if c.isalpha():
            if c in vokal_set:
                vokal += 1
            else:
                konsonan += 1
 
    print(f"Jumlah Vokal: {vokal}")
    print(f"Jumlah Konsonan: {konsonan}")
 
if __name__ == "__main__":
    main()