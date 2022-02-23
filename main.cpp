#include <QCoreApplication>
#include <stack.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    stack<int> kek;
    cout<<kek.Size();
    return a.exec();
}
