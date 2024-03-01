#include <iostream>

class Temperature {
private:
    double celsius;

public:
    Temperature(double celsiusValue) : celsius(celsiusValue) {}

    operator double(){
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    void displayCelsius(){
        std::cout << "Temperature in Celsius: " << celsius << " °C" << std::endl;
    }

    void displayFahrenheit(){
        std::cout << "Temperature in Fahrenheit: " << static_cast<double>(*this) << " °F" << std::endl;
    }
};

int main() {
    Temperature tempInCelsius(25.0);
    tempInCelsius.displayCelsius();
    tempInCelsius.displayFahrenheit();

    return 0;
}
