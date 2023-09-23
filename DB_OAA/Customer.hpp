#include <iostream>
#include <string>
#include <vector>

using namespace std;

int jID = 1;

class Customer
{
private:
	int customerID;
	string surname;
	int birthyear;
public:
	Customer();
	Customer(string surname, int birthyear);
	int getCustomerID();
	string getSurname();
	void setSurname();
	void setSurname(string surname);
	int getBirthyear();
	void setBirthyear();
	void setBirthyear(int birthyear);
	void getCustomer();
};

Customer::Customer()
{
	customerID = jID++;
	surname = "Prokhoda";
	birthyear = 2004;
}

inline Customer::Customer(string surname, int birthyear)
{
	customerID = jID++;
	this->surname = surname;
	this->birthyear = birthyear;
}

inline int Customer::getCustomerID()
{
	return customerID;
}

inline string Customer::getSurname()
{
	return surname;
}

inline void Customer::setSurname()
{
	cout << "surname: ";
	cin >> surname;
}

inline void Customer::setSurname(string surname)
{
	this->surname = surname;
}

inline int Customer::getBirthyear()
{
	return birthyear;
}

inline void Customer::setBirthyear()
{
	cout << "birthyear: ";
	cin >> birthyear;
	if (birthyear < 1000 || birthyear > 9999) {
		cout << "1000 < birthyear < 9999\n";
		setBirthyear();
	}
}

inline void Customer::setBirthyear(int birthyear)
{
	this->birthyear = birthyear;
}

inline void Customer::getCustomer()
{
	cout << "customerID: " << customerID << "\nsurname: " << surname << "\nbirthyear: " << birthyear << "\n";
}
