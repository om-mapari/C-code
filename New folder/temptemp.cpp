#include <iostream>
using namespace std;
#include "stack.h"
#include "stack.cpp"

int main(){
    Stack <int> l;
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
            cout<<"Enter data : ";
            int data;
            cin>>data;
            l.add(data);
            l.display();
            break;
        case 2:
            l.pop();
            l.display();
        case 3:
            l.display();
            break;
        case 4:
            cout<<"top is "<<l.top();
            break;
        // case 4:
        //     break;
        default:
            (choice == 0) ? cout << "Exiting... " << endl : cout << "Invaild input " << endl;
            break;
        }

    } while (choice != 0);
    return 0;
    return 0;
}