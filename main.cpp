 // Ашевский Алекснадр//
//////////////////////
#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	Bank person1("Kak-to","Kto-to",282.0,32.34,"4131087B052PB4");
	person1.ShowParametrs();
	person1.add_balance(83.25);
	person1.put_balance(32.4);
	person1.add_balanceUSD(320.5);
	person1.buyUSD_payBYN(25);
}