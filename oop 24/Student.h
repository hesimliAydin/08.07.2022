#pragma once

class Student
{
	static short staticId;
	short id = 0;
	string speciality = "";
	size_t score = 0;
	size_t money = 0;
	BankCard bankCard;
	vector<Exam> exams;

public:

	Student(string speciality, size_t score, size_t money, BankCard bankCard, string name, string surname, short age)
		:id(staticId++), speciality(speciality), score(score), money(money), bankCard(bankCard) {}

	short getId() { return id; }
	string getSpeciality() { return speciality; }
	size_t getScore() { return score; }
	size_t getMoney() { return money; }
	BankCard getBC() { return bankCard; }
	vector<Exam>& getExams() { return exams; }

	friend ostream& operator<<(ostream& out, const Student& s);
};

short Student::staticId = 0;

ostream& operator<<(ostream& out, const Student& s) {
	cout << "Id: " << s.id << endl
		<< "Speciality: " << s.speciality << endl
		<< "Score: " << s.score << endl
		<< "Money: " << s.money << endl

		<< "Bank Card: " << s.bankCard << endl;

	out << "Exams : ";
	for (size_t i = 0; i < s.exams.size(); i++)
		cout << "Exam: " << s.exams[i] << endl;

	return out;
}
