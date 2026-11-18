def main():
    deskripsi = input()
 
    if len(deskripsi) > 20:
        print(deskripsi[:20] + "...")
    else:
        print(deskripsi)
 
if __name__ == "__main__":
    main()