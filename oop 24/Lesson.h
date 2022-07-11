#pragma once

class Lesson
{
	static short staticId;
	short id = 0;
	string name = "";
	string startLesson = "";
	string endLesson = "";

public:

	Lesson(string name, string startLesson, string endLesson)
		:id(staticId++), name(name), startLesson(startLesson), endLesson(endLesson) {}

	short getId() { return id; }
	string getName() { return name; }
	string getStartLesson() { return startLesson; }
	string getEndLesson() { return endLesson; }

	friend ostream& operator<<(ostream& out, const Lesson& l);
};

short Lesson::staticId = 0;

ostream& operator<<(ostream& out, const Lesson& l)
{
	cout << "Id: " << l.id << endl
		<< "Name: " << l.name << endl
		<< "Start Lesson: " << l.startLesson << endl
		<< "End Lesson: " << l.endLesson << endl;

	return out;
}
