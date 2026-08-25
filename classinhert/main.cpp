#include <iostream>
#include <Person.h>
#include <Student.h>
using namespace std;

int main()
{
    Person p;
    Student s;
    s.informations();
    s.print();

    return 0;
}
/*
Advantages of Static Members in OOP
Static members in OOP offer several advantages, including:
Shared Data: Static members allow sharing data across all instances of a class,
 which is useful for tracking information common to all instances, such as a counter for the number of objects created.
Example: Counting how many objects of a class have been created
class Student {
public:
    static int studentCount;
};

Class-Level Functions: Static functions can be called on the class itself without needing an instance,
making them useful for utility functions and factory methods.

Memory Efficiency: Static members save memory when you need to share common data across many instances,
as they occupy a single memory location regardless of how many instances exist.

Encapsulation: Static members can encapsulate global data within a class,
 improving code organization and reducing the risk of naming conflicts with global variables.

