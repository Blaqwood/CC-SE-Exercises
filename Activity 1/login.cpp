#include <string>
#include <iostream>

int main() {
  std::string password_log = "bigfoot", password, username;
  
  std::cout << "Enter your username" << std::endl;
  std::cin >> username;
  std::cout << "Enter your password" << std::endl;
  std::cin >> password;
  
  if (password == password_log) {
    std::cout << "User " << username << " has successfully logged in." << std::endl;
  }
  else if (password != password_log) {
    std::cout << "Incorrect password entered. Please restart the program and try again.";
  }
  return 0;
}
