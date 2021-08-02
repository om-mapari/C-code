#include <iostream>
using namespace std;
#include "stackh.h"
#include "stackh.cpp"
int main(){

    stack<char> l;
    int choice = 0;
    do
    {
        cout << "\n*****MAIN MENU*****" << endl;
        cout << "PRESS 1 TO Push : " << endl;
        cout << "PRESS 2 TO Pop : " << endl;
        cout << "PRESS 3 TO Print : " << endl;
        cout << "PRESS 4 TO Print Top: " << endl;
        cout << "**ENTER CHOICE** : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            char ch;
            cout<<"input char : ";
            cin>>ch;
            l.push(ch);
            l.print();
            break;
        case 2:
            l.pop();
            l.print();
            break;
        case 3:
            l.print();
            break;
        case 4:
            cout<<"top is "<<l.Top();
            break;
        default:
            (choice == 0) ? cout << "Exiting... " << endl : cout << "Invaild input " << endl;
            break;
        }

    } while (choice != 0);
    return 0;
    return 0;
}