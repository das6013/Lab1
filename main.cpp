#include <QCoreApplication>
#include <stack.h>
#include<person.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Person kek;
    cout<<kek.getName().toStdString()<<endl;
    Person check2("Zubenko Mike Petrovich");
    cout<<check2.getName().toStdString()<<endl;


    return a.exec();
}
