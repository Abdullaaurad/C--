#include <iostream>

using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double celsiusValue) : celsius(celsiusValue) {}

    operator double(){
        cout << "hi" << endl;
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    void displayCelsius(){
        std::cout << "Temperature in Celsius: " << celsius << " °C" << std::endl;
    }

    void displayFahrenheit(){
        std::cout << "Temperature in Fahrenheit: " << double(*this) << " °F" << std::endl;
    }
};

int main() {
    Temperature tempInCelsius(25.0);
    tempInCelsius.displayCelsius();
    tempInCelsius.displayFahrenheit();

    return 0;
}
