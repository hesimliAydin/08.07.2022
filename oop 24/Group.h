#pragma once

class Group
{
	static short staticId;
	short id = 0;
	string name = "";
	vector<Student> students;
	vector<Lesson> lessons;

public:

	Group(string name)
		:id(staticId++), name(name) {}

	short getId() { return id; }
	string getName() { return name; }
	vector<Student>& getS() { return students; }
	vector<Lesson>& getL() { return lessons; }

	friend ostream& operator<<(ostream& out, const Group& g);
};

short Group::staticId = 0;

ostream& operator<<(ostream& out, const Group& g) {
	cout << "Id: " << g.id << endl
		<< "Name: " << g.name << endl;

	out << "Students: ";
	for (size_t i = 0; i < g.students.size(); i++)
		cout << g.students[i] << endl;

	out << "Lessons : ";
	for (size_t i = 0; i < g.lessons.size(); i++)
		cout << "Lesson: " << g.lessons[i] << endl;

	return out;
}
