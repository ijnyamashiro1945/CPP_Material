def is_palindrome(word):
    #menghapus sepasi dan mengubah huruf menjadi kecil
    clear_word =  word.lower().replace(" ", "")
    return clear_word == clear_word[::-1]

while True:
    kata_input = str(input("Masukan kata (Q for exit): "))
    if kata_input == "q": 
        print("You exited the program")
    if is_palindrome(kata_input):
        print(f"{kata_input} adalah palindrome")
    else:
        print(f"Bukan, {kata_input} adalah palindrome")