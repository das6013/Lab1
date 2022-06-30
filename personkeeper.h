#ifndef PERSONKEEPER_H
#define PERSONKEEPER_H
#include<person.h>
#include<stack.h>
#include <QString>
#include <QTextStream>
#include <QFile>
class PersonKeeper
{
private:
    //consructors
    PersonKeeper();
    PersonKeeper(const PersonKeeper &);
    ~PersonKeeper();
    //overdrive operator = 
    PersonKeeper &operator=(const PersonKeeper &);
    stack<Person> _stack;

public:

    static PersonKeeper &Instance();//instanse
    void readPersons(QString path);//read file 
    void writePersons(QString path) const;// write file
    QStringList ToQStringList() const; //
    int Size();// size
    void Clear();// clear data
};

#endif // PERSONKEEPER_H
