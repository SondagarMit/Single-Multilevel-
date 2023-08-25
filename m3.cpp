#include <iostream>
#include <string.h>
using namespace std;

class Vehicle {
protected:
    char company[50];
    char owner[50];

public:
    void getVehicleData() {
        cout << "Enter company name: ";
        cin >> company;
        cout << "Enter owner name: ";
        cin >> owner;
    }
};

class Car : public Vehicle {
private:
    char model[50];
    float price;
    int madeYear;
    bool dualAirbags;
    char colour[20];

public:
    void getCarData() {
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter made year: ";
        cin >> madeYear;
        cout << "Does it have dual airbags? (1 for Yes, 0 for No): ";
        cin >> dualAirbags;
        cout << "Enter colour: ";
        cin >> colour;
    }

    void displayCarInfo() {
        cout << "\nCar Information:\n";
        cout << "Company: " << company << endl;
        cout << "Owner: " << owner << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "Made Year: " << madeYear << endl;
        cout << "Dual Airbags: " << (dualAirbags ? "Yes" : "No") << endl;
        cout << "Colour: " << colour << endl;
    }
};

int main() {
    Car myCar;
    
    cout << "Enter vehicle data:\n";
    myCar.getVehicleData();

    cout << "Enter car data:\n";
    myCar.getCarData();

    cout << "\nData entered successfully!\n";
    myCar.displayCarInfo();

    return 0;
}
