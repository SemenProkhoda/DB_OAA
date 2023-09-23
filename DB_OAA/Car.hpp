#include <iostream>
#include <string>
#include <vector>

using namespace std;

int iID = 1;

class Car {
private:
	int CarID;
	string Name;
	int Year;
	string Color;
	int customerID = NULL;
public:
	Car();
	Car(string Name, int Year, string Color);
	Car(string Name, int Year, string Color, int customerID);
	int getCarID();
	int getCustomerID();
	void setCustomerID();
	void setCustomerID(int customerID);
	string getName();
	void setName(string Name);
	void setName();
	int getYear();
	void setYear(int Jahr);
	void setYear();
	string getColor();
	void setColor(string Farbe);
	void setColor();
	void getCar();
	void setCar();
};

inline Car::Car() {
	CarID = iID++;
	Name = "PORSCHE 918 Spyder";
	Year = 2014;
	Color = "grey";
}

inline Car::Car(string Name, int Year, string Color) {
	CarID = iID++;
	this->Name = Name;
	this->Year = Year;
	this->Color = Color;
}

inline Car::Car(string Name, int Year, string Color, int customerID) {
	CarID = iID++;
	this->Name = Name;
	this->Year = Year;
	this->Color = Color;
	this->customerID = customerID	;
}

inline int Car::getCarID()
{
	return CarID;
}

inline int Car::getCustomerID()
{
	return customerID;
}

inline void Car::setCustomerID()
{
	cout << "customerID: ";
	cin >> customerID;
}

inline void Car::setCustomerID(int customerID)
{
	this->customerID = customerID;
}

inline string Car::getName() {
	return Name;
}

inline void Car::setName(string Name) {
	this->Name = Name;
}

inline void Car::setName() {
	cout << "Name: ";
	cin.ignore();
	getline(cin, Name);
}

inline int Car::getYear() {
	return Year;
}

inline void Car::setYear(int Jahr) {
	this->Year = Jahr;
}

inline void Car::setYear() {
	cout << "Jahr: ";
	cin >> Year;
}

inline string Car::getColor() {
	return Color;
}

inline void Car::setColor(string Farbe) {
	this->Color = Farbe;
}

inline void Car::setColor() {
	cout << "Farbe: ";
	cin.ignore();
	getline(cin, Color);
}

inline void Car::getCar() {
	cout << "CarID: " << CarID << "\nName: " << Name << "\nYear: " << Year << "\nColor: " << Color << "\n";
}

inline void Car::setCar() {
	setName();
	setYear();
	setColor();
}
