#include <string>
#include <iostream>

void country(int v1, int v2, std::string v3);
void resprog(bool &res);


int main() {
    bool restart = true;
    int c_area, c_pop;
    std::string c_name;
    do {
        std::cout << "What is the area of the country?";
        std::cin >> c_area;
        std::cout << "How many poeple live there?";
        std::cin >> c_pop;
        std::cout << "What is the name of this country?";
        std::cin >> c_name;
        country(c_area, c_pop, c_name);
        resprog(restart);
    }
    while (restart == true);
    return 0;
}

//output's the the country data
void country(int v1, int v2, std::string v3) {
    int v4 = v2 / v1;
    std::cout << "Country Area: " << v1 << "m" << std::endl << "Country population: " << v2 << std::endl << "Country name: " << v3 << std::endl << "Population Density: " << v4 << std::endl;
}

//restart the program on prompt
void resprog(bool &i) {
    char x;
    std::cout << "Do you want to restart program? (Y/n)" << std::endl;
    std::cin >> x;
    if (x == 'y' || x == 'Y') {
        i = true;
        std::cout << "Restarting program" << std::endl << std::endl;
    }
    else {
        i = false;
        std::cout << "Terminating Program!" << std::endl;
    }    
}