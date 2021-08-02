#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    do
    {
        cout << "\n*****MAIN MENU*****" << endl;
        cout << "PRESS 1 TO : " << endl;
        cout << "PRESS 2 TO : " << endl;
        cout << "PRESS 3 TO : " << endl;
        cout << "PRESS 4 TO : " << endl;
        cout << "PRESS 5 TO : " << endl;
        cout << "PRESS 6 TO : " << endl;
        cout << "PRESS 0 TO EXIT PROGRAM : " << endl;
        cout << "**ENTER CHOICE** : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
  
            break;
        case 2:
 
            break;
        case 3:
      
            break;
        case 4:
  
            break;
        case 5:
    
            break;
        case 6:
          
            break;
        default:
            (choice == 0) ? cout << "Exiting... " << endl : cout << "Invaild input " << endl;
            break;
        }

    } while (choice != 0);
    return 0;
}