#include <QCoreApplication>
#include <stack.h>
#include<person.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
<<<<<<< HEAD
    Person kek;
    cout<<kek.getName().toStdString()<<endl;
    Person check2("Zubenko Mike Petrovich");
    cout<<check2.getName().toStdString()<<endl;
=======
    stack<int> kek;
    cout<<kek.Size()<<endl;
    kek.Push(1);//add 1
    kek.Push(2);// add 2
    kek.Iter();// show stack
    kek.Pop();// Вытащил последний элемент
    cout<<endl;
    kek.Iter();//show stack
    stack<char> lol;
    lol.Pop();//check except
>>>>>>> master


    return a.exec();
}
