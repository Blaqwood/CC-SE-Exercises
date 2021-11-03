#include <string>
#include <iostream>

int main() {
  string password_log = "bigfoot", password, username;
  
  cout << "Enter yer username kiddo" << endl;
  cin >> username;
  cout << "Enter yo password son" << endl;
  cin >> password;
  
  if (password == password_log) {
    cout << "User " , username, " has successfully logged in." << endl;
  }
  else if (password != password_log) {
    cout << "Incorrect password entered. Please restart the program and try again." << endl;
  }
  return 0;
}
