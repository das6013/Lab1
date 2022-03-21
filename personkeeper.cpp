#include "personkeeper.h"

PersonKeeper::PersonKeeper()
{

}

PersonKeeper::~PersonKeeper()
{
}

PersonKeeper &PersonKeeper::Instance()
{
    static PersonKeeper instance;

    return instance;
}



int PersonKeeper::Size()
{
    return stack_.Size();
}

void PersonKeeper::Clear()
{
    return stack_.Clear();
}
void PersonKeeper::readPersons(QString path)
{
    QFile file(path);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        throw "Error: readPersons(): Couldn't open a file!";
    }

    QTextStream stream(&file);
    QString line;

    while (stream.readLineInto(&line))
    {
        stack_.Push(Person(line));
    }

    file.close();
}

// функция записи информации из хранителя в файл
void PersonKeeper::writePersons(QString path) const
{
    QFile file(path);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        throw "Error: writePersons(): Couldn't open a file!";
    }

    QTextStream stream(&file);

    stack_.Iter([&](const Person &value)
    {
        stream << value.getSurname() << '\t' << value.getName() << '\t' << value.getPatronymic() << Qt::endl;
    });

    file.close();
}
