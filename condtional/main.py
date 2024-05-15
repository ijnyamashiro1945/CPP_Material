username = "Brightchamps"
password = "hari_rabu"

username_input = str(input("Enter your username: "))
password_input = str(input("Enter your password: "))

if username == username_input and password == password_input :
    print ("Wellcome to the dashboard, ", username)

elif username != username_input and password == password_input :
    print ("Wrong user please try again!")

elif username == username_input and password != password_input :
    print ("Wrong password Try again!")

else :
    print ("There's no usernmae such as ",username_input, "and no password as ",password_input)