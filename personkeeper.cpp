#include "personkeeper.h"

PersonKeeper::PersonKeeper()
{

}

PersonKeeper::~PersonKeeper()
{
    //отсутвеут ,потому что нет динамически созданных объектов
}

PersonKeeper &PersonKeeper::Instance()
{
    static PersonKeeper instance;//Инициализуруем объект через статик,чтоб повторно не создовать его при вызове

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

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))//проверка открытия
    {
        throw "Error: readPersons(): Couldn't open a file!";
    }

    QTextStream stream(&file);//данные с файла
    QString line;//строка для считывания данных

    while (stream.readLineInto(&line))
    {
        stack_.Push(Person(line));
    }

    file.close();
}

void PersonKeeper::writePersons(QString path) const
{
    QFile file(path);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))//проверка открытия
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
