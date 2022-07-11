#pragma once

class University
{
	static short staticId;
	short id = 0;
	string name = "";
	string location = "";
	vector<Teacher> teachers;
	vector<Student> students;

public:

	University(string name, string location)
		:id(staticId++), name(name), location(location) {}

	short getId() { return id; }
	string getName() { return name; }
	string getLocation() { return location; }
	vector<Teacher>& getTeachers() { return teachers; }
	vector<Student>& getStudents() { return students; }

	void showAllStudents()
	{
		for (size_t i = 0; i < students.size(); i++)
			cout << students[i] << endl;
	}

	void showAllTeachers()
	{
		for (size_t i = 0; i < teachers.size(); i++)
			cout << teachers[i] << endl;
	}

	friend ostream& operator<<(ostream& out, const University& u);
};

short University::staticId = 0;

ostream& operator<<(ostream& out, const University& u)
{
	cout << "Id: " << u.id << endl
		<< "Name: " << u.name << endl
		<< "Location: " << u.location << endl;

	out << "Teachers : ";
	for (size_t i = 0; i < u.teachers.size(); i++)
		cout << u.teachers[i] << endl;

	out << "Students : ";
	for (size_t i = 0; i < u.students.size(); i++)
		cout << u.students[i] << endl;

	return out;
}
