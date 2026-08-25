#ifndef STUDENT_H
#define STUDENT_H
#include <Person.h>
#include <iostream>


using namespace std;



class Student:public Person
{
    private:
        string university;
    public:
        Student()
        {
            university="none";
        }
        Student(string university)
        {
            this->university=university;
        }
        void set_university(string university)
        {
            this->university=university;
        }
        string get_university()
        {
            return university;
        }
        void informations()
        {
            Person::informations();
            cout<<"enter your university:"<<endl;
            cin>>university;
        }
        void print()
        {
            Person::print();
            cout<<"your university is:"<<university<<endl;
        }

};

#endif // STUDENT_H
