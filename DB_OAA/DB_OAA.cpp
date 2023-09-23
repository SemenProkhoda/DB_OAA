#include <iostream>
#include "Car.hpp"
#include "Customer.hpp"

using namespace std;

int main()
{
	vector<Car> Cars;
	vector<Customer> Customers;

	Cars.push_back({"porsche911", 2020, "green", 2});
	Cars.push_back({"porsche917", 1974, "pink", 1});
	Cars.push_back({"porsche918", 2015, "grey", 3});
	Cars.push_back({"vw polo", 2012, "white", 1});
	Customers.push_back({"Prokhoda", 2004});
	Customers.push_back({"Patsora", 2004});
	Customers.push_back({"anotherone", 1980});

	for (Car car : Cars) {
		for (Customer customer : Customers) {
			if (car.getCustomerID() == customer.getCustomerID()) {
				car.getCar();
				customer.getCustomer();
				cout << "\n";
			}
		}
	}
}
