#include <iostream>
#include "Bank.h"
using namespace std;
Bank::Bank() {
	name = "";
	surname = "";
	balance = 0;
	PasNum = "";
}
Bank::Bank(string fname, string fsurname, unsigned int fbalance, string fpasnum) {
	name = fname;
	surname = fsurname;
	balance = fbalance;
	PasNum = fpasnum;
}
void Bank::ShowParametrs() {
	cout << "Имя: " << name << endl;
	cout << "Фамилия: " << surname << endl;
	cout << "Индентификационный номер: " << PasNum << endl;
	cout << "Баланс :" << balance << "$" << endl;
}
float Bank::add_balance(float fbl) {
	balance += fbl;
	return balance;
}