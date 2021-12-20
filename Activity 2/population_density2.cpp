#include <string>
#include <iostream>

using namespace std;

class Country {
    public:
        void countryOut(int v1, int v2, string v3), countryGet();
        int countryArea, countryPop;
        string countryName;
};

int main() {
    char resIn;
    bool restart = true;
    Country i;
    while ( restart == true) {
        i.countryGet();
        i.countryOut(i.countryArea, i.countryPop, i.countryName);
        cout << "Do you want to restart program? (Y/n)" << endl;
        cin >> resIn;
        restart = (resIn == 'y') ? true : false;
    }
    return 0;
}

void Country::countryOut(int v1, int v2, string v3) {
    int v4 = v2 / v1;
    // retarded way to output data
    cout << "Country Area: " << v1 << "m" << endl << "Country population: " << v2 << endl << "Country name: " << v3 << endl << "Population Density: " << v4 << endl;
}

void Country::countryGet() {
        std::cout << "What is the area of the country?";
        std::cin >> countryArea;
        std::cout << "How many poeple live there?";
        std::cin >> countryPop;
        std::cout << "What is the name of this country?";
        std::cin >> countryName;
}