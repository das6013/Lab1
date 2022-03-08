#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{
private:
    string surname;
    string name;
    string patronymic;
public:
        Person();
        Person(const Person&);
        void setSurname(string _surname);
        void setName(string _name) ;
        void setPatronymic(string _patronymic);
        const string& getSurname() const { return surname; }
        const string& getName() const { return name; }
        const string& getPatronymic() const { return surname; }

};

#endif // PERSON_H
