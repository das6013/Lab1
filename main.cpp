#include <QCoreApplication>
#include <stack.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    stack<int> kek;
    cout<<kek.Size()<<endl;
    kek.Push(1);
    kek.Push(2);
    kek.Iter();
    kek.Pop();
    cout<<endl;
    kek.Iter();

    return a.exec();
}
