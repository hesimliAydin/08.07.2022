#pragma once

class myMain
{
public:
    static void MyMain()
    {
        Student s1("Programmer", 12, 500, BankCard{ "1111 1111 1111 1111", "aydin", 3000, "4", "2023" }, "Aydin", "Surname", 18);
        s1.getExams().push_back(Exam(11, "24.01.2022", "14:00", "15:30", Lesson{"IT", "12.12.2021", "02.05.2022"}));

        Student s2("IT", 11, 450, BankCard{ "3333 3333 3333 3333","revan123",2500,"5","2024" }, "Revan", "surname", 17);
        s2.getExams().push_back(Exam(9, "22.07.2022", "14:00", "15:30", Lesson{ "C++","12.12.2021", "02.05.2022" }));

        Group group("FBAS");
        group.getS().push_back(s1);
        group.getL().push_back(Lesson{ "Python", "6.11.2021", "10.5.2022" });

        Teacher t1("Department", 2000, BankCard{ "2222 2222 2222 2222", "password", 5000, "expiredM", "expiredY" }, "Tural", "Novruzov", 30);
        t1.getG().push_back(group);

        University academy("STEP", "Baku");
        academy.getStudents().push_back(s1);

        cout << "Students : " << endl;
        academy.showAllStudents();  // check of method
        
    }
};
