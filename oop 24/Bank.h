#pragma once

class Bank
{
	static short staticId;
	short id = 0;
	string name = "";
	string location = "";
	vector<BankCard> bankCards;

public:

	Bank(string name, BankCard bankCard, string location)
		:id(staticId++), name(name), location(location) {}

	short getId() { return id; }
	string getName() { return name; }
	vector<BankCard>& getBankCards() { return bankCards; }
	string getLocation() { return location; }

	friend ostream& operator<<(ostream& out, const Bank& b);
};

short Bank::staticId = 0;

ostream& operator<<(ostream& out, const Bank& b)
{
	cout << "Id: " << b.id << endl
		<< "Name: " << b.name << endl
		<< "Location: " << b.location << endl;

	out << "Bank Cards : ";
	for (size_t i = 0; i < b.bankCards.size(); i++)
		out << b.bankCards[i] << endl;

	return out;
}

