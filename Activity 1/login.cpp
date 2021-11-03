#include <string>
#include <iostream>

int main() {
  string password_log = "bigfoot", password, username;
  
  cout << "Enter your username\n";
  cin >> username;
  cout << "Enter your password\n";
  cin >> password;
  
  if (password == password_log) {
    cout << "User " << username << " has successfully logged in." << endl;
  }
  else if (password != password_log) {
    cout << "Incorrect password entered. Please restart the program and try again."
  }
  return 0;
}
