/*
  A program that check the password entered and logs you in
*/

#include <string>
#include <iostream>

using namespace std;

class Auth {
  public:
    void passwordcheck(string uname, string passwd);
  private:
    string password_log = "bigfoot";
};

//check the password by comparing it to password_log
void Auth::passwordcheck(string uname, string passwd) {
  if (passwd == password_log) {
    cout << "User " << uname << " has successfully logged in." << endl;
  }
  else if (passwd != password_log) {
    cout << "Incorrect password entered. Please restart the program and try again.";
  }
}

int main() {
  string u_auth, p_auth;
  cout << "Enter your username" << endl;
  cin >> u_auth;
  cout << "Enter your password" << endl;
  cin >> p_auth;
  Auth logon;
  logon.passwordcheck(u_auth, p_auth);
  return 0;
}
