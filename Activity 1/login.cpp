/*
  A program that check the password entered and logs you in
*/

#include <string>
#include <iostream>

class Auth {
  public:
    void passwordcheck(std::string uname, std::string passwd);
  private:
    std::string password_log = "bigfoot";
};

//check the password by comparing it to password_log
void Auth::passwordcheck(std::string uname, std::string passwd) {
  if (passwd == password_log) {
    std::cout << "User " << uname << " has successfully logged in." << std::endl;
  }
  else if (passwd != password_log) {
    std::cout << "Incorrect password entered. Please restart the program and try again.";
  }
}

int main() {
  std::string u_auth, p_auth;
  std::cout << "Enter your username" << std::endl;
  std::cin >> u_auth;
  std::cout << "Enter your password" << std::endl;
  std::cin >> p_auth;
  Auth logon;
  logon.passwordcheck(u_auth, p_auth);
  return 0;
}
