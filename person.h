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
    Person();//конструктор по умолчанию
    Person(QString FIO);//Конструтор одной строки
    Person(const Person&);//consructor for person
    void setSurname(QString _surname);//setters
    void setName(QString _name);
    void setPatronymic(QString _patronymic);
    const QString& getSurname() const { return surname; }//getters
    const QString& getName() const { return name; }
    const QString& getPatronymic() const { return patronymic; }

};

#endif // PERSON_H
