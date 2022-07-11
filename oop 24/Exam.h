#pragma once

class Exam {
	static short staticId;
	short id = 0;
	short point = 0;
	string examDay = "";
	string startExam = "";
	string endExam = "";
	Lesson lessons;

public:

	Exam(short point, string examDay, string startExam, string endExam, Lesson lesson)
		:id(staticId++), point(point), examDay(examDay), startExam(startExam), endExam(endExam), lessons(lesson) {}

	short getId() { return id; }
	short getPoint() { return point; }
	string getExamDay() { return examDay; }
	string getStartExam() { return startExam; }
	string getEndExam() { return endExam; }
	Lesson getLesson() { return lessons; }

	friend ostream& operator<<(ostream& out, const Exam& e);
};

short Exam::staticId = 0;

ostream& operator<<(ostream& out, const Exam& e)
{
	cout << "Id: " << e.id << endl
		<< "Point: " << e.point << endl
		<< "Exam Day: " << e.examDay << endl
		<< "Start Exam: " << e.startExam << endl
		<< "End Exam: " << e.endExam << endl
		<< "Lessons : " << e.lessons << endl;

	return out;
}
