#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include <QString>
#include <QRegularExpression>
using namespace std;

class Person
{
public:
    QString surname;
    QString name;
    QString patronymic;
public:
    Person();
    Person(QString FIO);
    Person(const Person&);
    void setSurname(QString _surname);
    void setName(QString _name);
    void setPatronymic(QString _patronymic);
    const QString& getSurname() const { return surname; }
    const QString& getName() const { return name; }
    const QString& getPatronymic() const { return surname; }

};

#endif // PERSON_H
