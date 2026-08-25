#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person()
        {
            name="no name";
            age=0;
        }
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void set_name(string name)
        {
            this->name=name;
        }
        void set_age(int age)
        {
            this->age=age;
        }
        string get_name()
        {
            return name;
        }
        int get_age()
        {
            return age;
        }
        void informations()
        {
            cout<<"enter your name"<<endl;
            cin>>name;
            cout<<"enter your age"<<endl;
            cin>>age;

        }
        void print()
        {
            cout<<"your name is:"<<name<<endl;
            cout<<"your age is:"<<age<<endl;
        }



};

#endif // PERSON_H
