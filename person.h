#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{
public:
    std::string surname;
    std::string name;
    std::string patronymic;
public:
    Person();
    Person(string FIO);
    Person(const Person&);
    void setSurname(std::string _surname);
    void setName(std::string _name);
    void setPatronymic(std::string _patronymic);
    const std::string& getSurname() const { return surname; }
    const std::string& getName() const { return name; }
    const std::string& getPatronymic() const { return surname; }
    void PrintPersonData();

};

#endif // PERSON_H
