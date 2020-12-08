#include <iostream>
#include "Bank.h"
#include <fstream>
using namespace std;
Bank::Bank() {
	name = "";
	surname = "";
	balanceBYN = 0;
	balanceUSD = 0;
	PasNum = "";
}
Bank::Bank(string fname, string fsurname, float fbalanceBYN,float fbalanceUSD, string fpasnum) {
	name = fname;
	surname = fsurname;
	balanceBYN = fbalanceBYN;
	balanceUSD = fbalanceUSD;
	PasNum = fpasnum;
}
void Bank::ShowParametrs() {
	cout << "Имя: " << name << endl;
	cout << "Фамилия: " << surname << endl;
	cout << "Индентификационный номер: " << PasNum << endl;
	cout << "Баланс рублей: " << balanceBYN << "R" << endl;
	cout << "Баланс долларов: " << balanceUSD <<"$"<< endl;
}
void Bank::add_balance(float fbl) {
	balanceBYN += fbl;
	cout << endl;
	cout << "Пополнен на: " << fbl << "R" << endl;
	cout << "Баланс BYN:" << balanceBYN << "R" << endl;
}
void Bank::put_balance(float pb) {
	balanceBYN -= pb;
	cout << endl;
	cout << "Снято BYN: " << pb << "R" << endl;
	cout << "Баланс BYN: " << balanceBYN << "R" << endl;
}
void Bank::add_balanceUSD(float fbl) {
	balanceUSD += fbl;
	cout << endl;
	cout << "Пополнено на USD: " << fbl << "$" << endl;
	cout << "Баланс: " << balanceUSD << "$" << endl;
}
void Bank::put_balanceUSD(float pb) {
	balanceUSD -= pb;
	cout << endl;
	cout << "Снято USD: " << pb << "$" << endl;
	cout << "Баланс: " << balanceUSD << "$" << endl;
}
void Bank::buyUSD_payBYN(float USD) {
	ifstream InKurs;
	string str;
	InKurs.open("kurs.txt");
	if (InKurs.is_open()) {
		InKurs >> str;
		float usdToBYN = stoi(str);
		float sumToPutOfBYN = USD * usdToBYN;
		if (sumToPutOfBYN < balanceBYN) {
			Bank::put_balance(sumToPutOfBYN);
			cout << "После перевода баланс.";
			cout << endl << "Баланс BYN:" << endl;
			Bank::add_balanceUSD(USD);
		}
		else cout << "Не хвататет грошай!";
	}
	else cout << "Открывай!!!!";
}