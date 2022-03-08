#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{
private:
    long key;
    string last_name;
    string first_name;
public:
        Person();
        Person(const Person&);
        const string& getLastName() const { return last_name; }
        const string& getFirstName() const { return first_name; }
        void setLastName(const std::string&);
        void setFirstame(const std::string&);
};

#endif // PERSON_H
