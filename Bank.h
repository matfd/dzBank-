#pragma once
#include <string>
class Bank {
private:
	std::string name;
	std::string surname;
	float balance;
	std::string PasNum;
public:
	Bank();
	Bank(std::string, std::string, unsigned int,std::string);
	void ShowParametrs();
	float add_balance(float);
};