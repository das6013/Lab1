#include "person.h"
Person::Person()
{
    name = "nope";
    surname = "nope";
    patronymic = "nope";
}
Person::Person(QString FIO)
{
    QStringList words = FIO.split(QRegularExpression("\\s+"), Qt::SkipEmptyParts); // разбиваем полученную строку на не пустые слова

        if (words.size() != 2 && words.size() != 3) // если в строке недостаточно, или слишком много слов, то это значит что входные данные в неверном формате
        {
            throw "Error: Person(): A string has incorrect format and could not be completely parsed."; // сответствтвенно об этом нужно предупредить пользователя
        }

        surname = words[0]; // используем первое слово в строке в качестве фамилии
        name = words[1]; // второе в качестве имени

        if (words.size() == 3) // если есть 3-е слово, используем его в качестве отчества
        {
            patronymic = words[2];
        }
}
Person::Person(const Person& person)
{
    name = person.name;
    name = person.surname;
    name = person.patronymic;
}

void Person::setName(QString newName)
{
    name = newName;
}
void Person::setSurname(QString newSurname)
{
    surname = newSurname;
}
void Person::setPatronymic(QString newPatronymic)
{
    patronymic = newPatronymic;
}
