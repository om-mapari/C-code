#include <iostream>
#include <iomanip>
using namespace std;
#define max 100

class dictionery  //incomplete 
{
    string word;
    string meaning;
    friend class manage;
};
class manage
{
    dictionery d[max];
    int count = 0;

public:
    void addword()
    {
        cout << "Enter word : ";
        cin >> d[count].word;
        cout << "Enter it's meaning : ";
        cin >> d[count].meaning;
        count++;
    }
    // void deleteword()
    // {
    //     string word;
    //     cout<<"Enter word you wants to delete : ";
    //     cin>>word;
    //     int p = search(word);
    //     if(p==-1){cout<<"Word not found"<<endl;return;}
    //     else
    //     {
    //         swap(d[p],d[count-1]);
    //         count--;
    //     }
        
        
    // }
    // int search(string word){
    //     for (int i = 0; i < count; i++)
    //     {
    //         if(word==d[i].word);
    //         {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
    // void updateword()
    // {
    // }
    void print()
    {
        cout << setw(12) << "No." << setw(12) << "Word" << setw(12)
             << "Meaning"
             << "\n";
        for (int i = 0; i < count; i++)
        {
            cout << setw(12)<<i+1<< setw(12) << d[i].word << setw(12) << d[i].meaning << "\n";
        }
    }
    void sort()
    {
        int n = count;
        if(count==1){return;}
        for (int i = 0; i < n - 1; i++)
        {
            bool sorted = true;
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (d[j].word > d[j + 1].word)
                {
                    swap(d[i], d[i + 1]);
                    sorted = true;
                }
            }
            if (sorted)
            {
                break;
            }
        }
    }
};

int main()
{
    manage m;
    int choice = 0;
    do
    {
        cout << "\n*****MAIN MENU*****" << endl;
        cout << "PRESS 1 TO ADD WORD : " << endl;
        cout << "PRESS 2 TO REMOVE WORD : " << endl;
        cout << "PRESS 3 TO UPDATE WORD : " << endl;
        cout << "PRESS 4 TO SEARCH WORD : " << endl;
        cout << "PRESS 5 TO PRINT SORT BY WORD : " << endl;
        cout << "PRESS 6 TO REVERSE SORT BY WORD : " << endl;
        cout << "PRESS 0 TO EXIT PROGRAM : " << endl;
        cout << "**ENTER CHOICE** : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            m.addword();
            m.sort();
            break;
        case 2:
            // m.deleteword();
            // m.sort();
            break;
        case 3:

            break;
        case 4:
           m.sort();
            break;
        case 5:
            m.print();
            break;
        case 6:

            break;
        default:
            (choice == 0) ? cout << "Exiting... " << endl : cout << "Invaild input " << endl;
            break;
        }

    } while (choice != 0);
    return 0;

    return 0;
}