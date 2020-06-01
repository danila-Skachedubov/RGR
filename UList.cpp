#include <iostream>
#include <fstream>
#include <string>
#include "ULIST.h"
using namespace std;
template<typename T, typename V>
ulist<T, V>::ulist()
{
    head = NULL;
}
template<typename T, typename V>
ulist<T, V>::~ulist()
{
    while (head != NULL)
    {
        warehouse<T, V>* temp = head->next;
        delete head;
        head = temp;
    }
}
template<typename T, typename V>
void ulist<T, V>::AddToHead()
{
    warehouse<T, V>* temp = new warehouse<T, V>;
    T a, b, d;
    V c, e;
    ofstream fout("sklad.txt", std::ios::app);
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    temp->weight = a;
    temp->quantity = b;
    temp->name = c;
    temp->date = d;
    temp->coutry = e;
    temp->next = head;
    head = temp;
    fout << "На склад прибыл товар:" << c << " в " << d << " из " << e << " массой: " << a << " в количестве: " << b << '\n';
    fout.close();
}
template<typename T, typename V>
void ulist<T, V>::ShowL()
{
    warehouse<T, V>* temp = head;
    while (temp != NULL)
    {
        cout << "Вес груза:" << temp->weight << " ";
        cout << "Количество товара:" << temp->quantity << " ";
        cout << "Название товара:" << temp->name << " ";
        cout << "Дата погрузки на склад:" << temp->date << " ";
        cout << "Груз из:" << temp->coutry << " " << endl;
        temp = temp->next;
    }
}
template<typename T, typename V>
int ulist<T, V>::Size()
{
    int c = 0;
    warehouse<T, V>* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
}
template<typename T, typename V>
int ulist<T, V>::SizePro()
{
    int c = 0;
    warehouse<T, V>* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    cout << "Сейчас на складе " << c << " товара" << endl;
    return c;
}
template<typename T, typename V>
void ulist<T, V>::rewrite()
{
    std::ofstream ofs;
    ofs.open("sklad.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
}
template<typename T, typename V>
void ulist<T, V>::changeName()
{
    V v, e;
    T a, b, d;
    cin >> v;
    warehouse<T, V>* temp = head;
    int f = 0;
    while (temp != NULL)
    {
        if (temp->name == v)
        {
            cin >> a;
            cin >> b;
            cin >> d;
            cin >> e;
            temp->weight = a;
            temp->quantity = b;
            temp->date = d;
            temp->coutry = e;
            f++;
            break;
        }
        temp = temp->next;
    }
}
template<typename T, typename V>
void ulist<T, V>::changeCountry()
{
    V v, e;
    T a, b, d;
    cin >> v;
    warehouse<T, V>* temp = head;
    int f = 0;
    while (temp != NULL)
    {
        if (temp->coutry == v)
        {
            cin >> a;
            cin >> b;
            cin >> d;
            cin >> e;
            temp->weight = a;
            temp->quantity = b;
            temp->date = d;
            temp->name = e;
            f++;
            break;
        }
        temp = temp->next;
    }
}
template<typename T, typename V>
void ulist<T, V>::read()
{
    string line;
    string text;
    ifstream myfile("sklad.txt");
    if (myfile.is_open())
    {
        while (!myfile.eof())
        {
            getline(myfile, line);
            text += line;
            cout << line << endl;
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}
template<typename T, typename V>
void ulist<T, V>::printelement()
{
    V x, c;
    cin >> x;
    warehouse<T, V>* temp = head;
    while (temp != NULL)
    {
        if (temp->name == x)
        {
            cout << "Вес груза:" << temp->weight << " ";
            cout << "Количество товара:" << temp->quantity << " ";
            cout << "Название товара:" << temp->name << " ";
            cout << "Дата погрузки на склад:" << temp->date << " ";
            cout << "Груз из:" << temp->coutry << " " << endl;
        }
        temp = temp->next;
    }
}
template<typename T, typename V>
void ulist<T, V>::findDate()
{
    T v;
    cin >> v;
    warehouse<T, V>* temp = head;
    while (temp != NULL)
    {
        if (temp->date == v)
        {
            cout << "Вес груза:" << temp->weight << " ";
            cout << "Количество товара:" << temp->quantity << " ";
            cout << "Название товара:" << temp->name << " ";
            cout << "Дата погрузки на склад:" << temp->date << " ";
            cout << "Груз из:" << temp->coutry << " " << endl;
        }
        temp = temp->next;
    }
}
template<typename T, typename V>
bool ulist<T, V>::delName()
{
    V x;
    cin >> x;
    ofstream fout("sklad.txt", std::ios::app);
    warehouse<T, V>* temp = head;
    warehouse<T, V> * help=NULL;
    int f = 0;
    while (temp != NULL)
    {

        if (temp->name == x)
        {
            f++;
            if (temp == head)
            {
                head = temp->next;
            }
            else {
                help->next = temp->next;
            }
            fout << "Со склада ушел товар:" << temp->name << " в " << temp->date << " из " << temp->coutry << " массой: " << temp->weight << " в количестве: " << temp->quantity << endl;
            delete temp;
            fout.close();
            return true;
        }
        if (f == 0)
        {
            return false;
        }
        temp = temp->next;
    }
}
template<typename T, typename V>
bool ulist<T, V>::delCountry()
{
    V x;
    cin >> x;
    ofstream fout("sklad.txt", std::ios::app);
    warehouse<T, V>* temp = head, *help=NULL;
    int f = 0;
    while (temp != NULL)
    {

        if (temp->coutry == x)
        {
            f++;
            if (temp == head)
            {
                head = temp->next;
            }
            else
            {
                help->next = temp->next;
            }
            fout << "Со склада ушел товар:" << temp->name << " в " << temp->date << " из " << temp->coutry << " массой: " << temp->weight << " в количестве: " << temp->quantity << endl;
            delete temp;
            fout.close();
            return true;
        }
        if (f == 0)
        {
            return false;
        }
        temp = temp->next;
    }
}
template<typename T, typename V>
bool ulist<T, V>::delDate()
{
    T x;
    cin >> x;
    ofstream fout("sklad.txt", std::ios::app);
    warehouse<T, V>* temp = head, * help=NULL;
    int f = 0;
    while (temp != NULL)
    {
        if (temp->date == x)
        {
            f++;
            if (temp == head)
            {
                head = temp->next;
            }
            else {
                help->next = temp->next;
            }
            fout << "Со склада ушел товар:" << temp->name << " в " << temp->date << " из " << temp->coutry << " массой: " << temp->weight << " в количестве: " << temp->quantity << endl;
            delete temp;
            fout.close();
            return true;
        }
        if (f == 0)
        {
            return false;
        }
        temp = temp->next;
    }
}
template<typename T, typename V>
void ulist<T, V>::Lsort()
{
    for (int i = 0; i != Size(); i++)
    {
        warehouse<T, V>* temp = head;
        while (temp->next != NULL) {
            if (temp->quantity > temp->next->quantity)
            {
                int t = temp->quantity;
                temp->quantity = temp->next->quantity;
                temp->next->quantity = t;
                int s = temp->date;
                temp->date = temp->next->date;
                temp->next->date = s;
                int p = temp->weight;
                temp->weight = temp->next->weight;
                temp->next->weight = p;
                string y = temp->name;
                temp->name = temp->next->name;
                temp->next->name = y;
                string j = temp->coutry;
                temp->coutry = temp->next->coutry;
                temp->next->coutry = j;
            }
            temp = temp->next;
        }
    }
}
