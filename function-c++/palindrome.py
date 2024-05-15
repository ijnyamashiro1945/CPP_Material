def is_palindrome(word):
    # Menghapus spasi dan mengubah huruf menjadi huruf kecil
    clean_word = word.lower().replace(" ", "")

    # Membandingkan kata dengan kebalikannya
    return clean_word == clean_word[::-1]

# To check the palindrome word
while True:
    kata_input = input("Masukan kata (q for exit): ")
    if kata_input == "q":
        print("You exited the program")
        break
    elif is_palindrome(kata_input):
        print(f"{kata_input} adalah palindrome")
    else:
        print(f"{kata_input} adalah bukan palindrome")