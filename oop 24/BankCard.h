#pragma once

class BankCard
{
	static short staticId;
	short id = 0;
	string longCode = "";
	string password = "";
	size_t balance = 0;
	string expiredMonth = "";
	string expiredYear = "";

public:
	BankCard(string longCode, string password, size_t balance, string expiredMonth, string expiredYear)
		:longCode(longCode), password(password), balance(balance), expiredMonth(expiredMonth), expiredYear(expiredYear) {}

	short getId() { return id; }
	string getLongCode() { return longCode; }
	string getPassword() { return password; }
	size_t balace() { return balance; }
	string getEM() { return expiredMonth; }
	string getEY() { return expiredYear; }

	friend ostream& operator<<(ostream& out, const BankCard& b);
};

ostream& operator<<(ostream& out, const BankCard& b)
{
	cout << "Id: " << b.id << endl
		<< "Long Code: " << b.longCode << endl
		<< "Password: " << b.password << endl
		<< "Balance: " << b.balance << endl
		<< "Expired Month: " << b.expiredMonth << endl
		<< "Expired Year: " << b.expiredYear << endl;

	return out;
}

short BankCard::staticId = 0;
