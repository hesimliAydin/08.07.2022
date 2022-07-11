#pragma once

class Teacher
{
	static short staticId;
	short id = 0;
	string departament = "";
	short salary = 0;
	BankCard bankCard;
	vector<Group> groups;
public:
	Teacher(string departament, short salary, BankCard bankCard, string name, string surname, short age)
		:departament(departament), salary(salary), bankCard(bankCard) {}

	short getId() { return id; }
	string getDepartment() { return departament; }
	short getSalary() { return salary; }
	BankCard getBC() { return bankCard; }
	vector<Group>& getG() { return groups; }

	friend ostream& operator<<(ostream& out, const Teacher& t);
};

short Teacher::staticId = 0;

ostream& operator<<(ostream& out, const Teacher& t)
{
	cout << "Id: " << t.id << endl
		<< "Depatament: " << t.departament << endl
		<< "Salary: " << t.salary << endl
		<< "BankCard: " << t.bankCard << endl;

	out << "Groups : ";
	for (size_t i = 0; i < t.groups.size(); i++)
		cout << "Groups: " << t.groups[i] << endl;

	return out;
}

