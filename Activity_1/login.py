# variables
password_log = "bigfoot"
username = input(str("Enter yer username kiddo> "))
password = input(str("Enter yo password son> "))

# checking the password
if password == password_log:
  print("User", username, "has successfully logged in.")
elif password != password_log:
  print("Incorrect password entered. Please restart the program and try again.")
