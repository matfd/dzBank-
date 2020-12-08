#pragma once
#include <string>
class Bank {
private:
	std::string name;
	std::string surname;
	float balanceBYN;
	float balanceUSD;
	std::string PasNum;
public:
	Bank();
	Bank(std::string, std::string, float,float,std::string);
	void ShowParametrs();
	void add_balance(float);
	void put_balance(float);
	void add_balanceUSD(float);
	void put_balanceUSD(float);
	void buyUSD_payBYN(float);
};