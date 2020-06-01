#ifndef ULIST_H_INCLUDED
#define ULIST_H_INCLUDED
template<typename T, typename V>
class warehouse
{
public:
    T weight;///a
    T quantity;///b
    V name;///string///c
    T date;///d
    V coutry;///string///e
    warehouse* next;

};
template<typename T, typename V>
class ulist
{
private:
    warehouse<T, V>* head;
public:
    ulist();
    ~ulist();
    void ShowL();
    void AddToHead();
    int  Size();
    int SizePro();
    void changeName();
    void changeCountry();
    void read();
    void printelement();
    void findDate();
    void rewrite();
    bool delName();
    bool delCountry();
    bool delDate();
    void Lsort();
};



#endif // ULIST_H_INCLUDED




