#include <string>
#include <iostream>

/*
before you say it
yes I know this line below is bad
I'm just lazy and this is a smol program anyway
*/
using namespace std;

int main() {
  // declare variables
  string password_log = "bigfoot", password, username;
  
  cout << "Enter yer username kiddo" << endl;
  cin >> username;
  cout << "Enter yo password son" << endl;
  cin >> password;
  
  // verify password
  if (password == password_log) {
    cout << "User " << username << " has successfully logged in." << endl;
  }
  else if (password != password_log) {
    cout << "Incorrect password entered. Please restart the program and try again." << endl;
  }
  return 0;
}
