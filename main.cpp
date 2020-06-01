#include <iostream>
#include"ULIST.h"
#include"UList.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    ulist<int, std::string> lisT;
    cout << "############################################################################" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                        ##   ##  ####  #  #  #   ##                       #" << endl;
    cout << "#                        # # # #  #     #  #  #  #  #                      #" << endl;
    cout << "#                        #  #  #  ####  ####  ####  #                      #" << endl;
    cout << "#                        #     #  #     #  #  #  #  #                      #" << endl;
    cout << "#                        #     #  ####  #  #  #   ##                       #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "############################################################################" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                 �������� �� ������������ ���� ���������                  #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#     0) ��������� ������ ���������                                        #" << endl;
    cout << "#     1) �������� ���� �� �����                                            #" << endl;
    cout << "#     2) ������ ���������� ������� �� ������                               #" << endl;
    cout << "#     3) �������� ���������� � ������� �� ������                           #" << endl;
    cout << "#     4) �������� ������������� �����                                      #" << endl;
    cout << "#     5) ������� ������� �������� �� �����                                 #" << endl;
    cout << "#     6) �������� ������� ��������                                         #" << endl;
    cout << "#     7) ������� ���� �� ������                                            #" << endl;
    cout << "#     8) ���������� ���������� � ������ �� ��� ��������                    #" << endl;
    cout << "#     9) ���������� ������� ������� �� ������ �� ����                      #" << endl;
    cout << "#     10) ������������� ����� �� ������ �� ��� ����������                  #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "############################################################################" << endl;
    int q = -1;
    while (q != 0)
    {
        cout << "#    ��� �����:                                                            #" << endl;
        cout << "#                                                                          #" << endl;
        cin >> q;

        switch (q)
        {
        case 0:
            return 0;
            break;
        case 1:
            cout << "#     ������� �������������� ������, � ������:                             #" << endl;
            cout << "#     ����� �����, ����������, ��������, ���� ��������                     #" << endl;
            cout << "#     � ������ �������������.                                              # " << endl;
            lisT.AddToHead();
            cout << "#     ����� ������� �������� �� �����!                                     # " << endl;
            break;
        case 2:
            lisT.SizePro();
            break;
        case 3:
            lisT.ShowL();
            break;
        case 4:
            int z;
            cout << "#     �������� ��������������, �� ������� ������ ����������� �����:        #" << endl;
            cout << "#     0. ��������� ������. 1. ������. 2. �������� 3.��������� ����:        #" << endl;
            cin >> z;
            if (z == 1)
            {
                cout << "#      ������� ��������������, � �����:                                    #" << endl;
                cout << "#     ������� �������������� ������, � ������:                             #" << endl;
                cout << "#     ����� �����, ����������, ���� ��������, ��������                     #" << endl;
                lisT.changeCountry();
            }
            else if (z == 2)
            {
                cout << "#      ������� ��������������, � �����:                                    #" << endl;
                cout << "#     ������� �������������� ������, � ������:                             #" << endl;
                cout << "#     ����� �����, ����������, ���� ��������, ������                       #" << endl;
                lisT.changeName();
            }
            else if (z == 0)
            {
                return 0;
            }
            else if (z == 3)
            {
                cout << "#    ������� ����� �����, ����� ����������:                                #" << endl;
                cout << "#                                                                          #" << endl;
                cin >> q;
            }
            break;
        case 5:
            lisT.read();
            break;
        case 6:
            lisT.rewrite();
            cout << "������� �������� ������� �������!";
            break;
        case 7:
            int q;
            cout << "�������� ��������������, �� ������� ������ �����c����� ��������:" << endl;
            cout << "0. ��������� ������. 1. ������. 2. �������� 3.���� 4. ��������� � ������� ����: " << endl;
            cin >> q;
            if (q == 1)
            {
                cout << "������� �������� ������:" << endl;
                lisT.delCountry();
                cout << "������!" << endl;
            }
            else if (q == 2)
            {
                cout << "������� �������� ������:" << endl;
                lisT.delName();
                cout << "������!" << endl;
            }
            else if (q == 0)
            {
                return 0;
            }
            else if (q == 3)
            {
                cout << "������� ����:" << endl;
                lisT.delDate();
                cout << "������!" << endl;
            }
            else if (q == 4)
            {
                cout << "#    ������� ����� �����, ����� ���������� :                               #" << endl;
                cout << "#                                                                          #" << endl;
                cin >> q;
            }
            break;
        case 8:
            cout << "������� �������� ������, � ������� ������ ������ ����������: " << endl;
            lisT.printelement();
            break;
        case 9:
            cout << "������� ����, �� ������� ������ ������ ������� ������ " << endl;
            lisT.findDate();
            break;
        case 10:
            lisT.Lsort();
            cout << "����� ������� ������������!" << endl;
            break;
        }
    }
    return 0;
}


