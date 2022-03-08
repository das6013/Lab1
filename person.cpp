#include "person.h"
Person::Person()
{
    name = "nope";
    surname = "nope";
    patronymic = "nope";
}
Person::Person(string FIO)
{
    string dil = " ";
    size_t pos = 0;
    string token;
    int k = 0;
    while ((pos = FIO.find(dil)) != std::string::npos) {
        token = FIO.substr(0, pos);

        if (k == 0) surname = token;
        if (k == 1) name = token;
        FIO.erase(0, pos + dil.length());
        k++;
    }
    patronymic = FIO;
}
Person::Person(const Person& person)
{
    name = person.name;
    name = person.surname;
    name = person.patronymic;
}

void Person::PrintPersonData()
{
    cout << surname << " " << name << " " << patronymic << endl;
}
void Person::setName(string newName)
{
    name = newName;
}
void Person::setSurname(string newSurname)
{
    surname = newSurname;
}
void Person::setPatronymic(string newPatronymic)
{
    patronymic = newPatronymic;
}
