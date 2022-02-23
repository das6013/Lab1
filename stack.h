#ifndef STACK_H
#define STACK_H
#include<iostream>
#include <functional>
using namespace std;

template <class T>

class stack
{
    struct Node//список
    {
        const T value;//Значения переменной
        Node *prev=nullptr;// указатель на прошлое звено

    };
    Node *back=nullptr;//последний элемент
    int size=0;//размер
public:
    ~stack();//Деструктор
    void Push(const T &value);//Добавления элемента
    const T Pop();//извлечения значения из стека
    void Iter(function<void(const T &value)>f) const;//Проход по стеку
    int Size();//Размер
    void Clear();//очистка

};
template <class T>
void stack<T>::Push(const T &value)
{
   Node *node=new Node(value,back);
   if (node==nullptr)
   {
       cout<<"kek"<<endl;
   }
   back=node;
   size++;
}
template <class T>
void stack<T>::Clear()
{
    while (back!=nullptr)
    {
        Node *last=back;//Последний элемент
        back=back->prev;
        delete last;
    }
}
template <class T>
stack<T>::~stack()//Деструктор
{
    Clear();
}
template <class T>
int stack<T>::Size()
{
    return size;
}

#endif // STACK_H
