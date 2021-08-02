#include <iostream>
#include <iomanip>
using namespace std;

struct student
{
    int rollno;
    string name;
    float sgpa;
};

class info
{
    student s[100];
    int n;

public:
    void input();
    void display();
    void topperlist();
    void display(student d);
    // void rollsorts(int,int); //using quicksort
    void namesort();     // using insertion Sort   & Usisng bubble sort
    void sgpasort();     // using  bubble sort
    void linearsearch(); // linear search
    void binsearch();    // binery search
    void rollsort(); // using Bubble Sort
    
};

void info ::input()
{
    cout << "  Enter Total No of Student in SE10 : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\n  Enter name of the student "<<i+1<<" : ";
        cin >> s[i].name;
        cout << "  Enter rollno : ";
        cin >> s[i].rollno;
        cout << "  Enter Percentage/SGPA : ";
        cin >> s[i].sgpa;
    }
}
void info ::display()
{
    cout << "\n** CLASS SE10 SORTED LIST **\n";
    cout <<setw(12)<< "Roll No"
         << setw(12)
         << "Name"<<setw(12)
         << "SGPA" << '\n';
    for (int i = 0; i < n; i++)
    {
        cout <<setw(12)<< s[i].rollno <<setw(12)<< s[i].name <<setw(12)<< s[i].sgpa << "\n";
    }
}
void info ::topperlist()
{
    cout << "\n** CLASS SE10 SORTED TOPPER LIST **\n";
    cout << setw(12)<< "Rank"<< setw(12)
         << "Roll No"
         << setw(12)
         << "Name"<< setw(12)
         << "SGPA" <<'\n';
    for (int i = 0; i < min(10, n); i++)
    {
        cout <<setw(12)<< i + 1 <<setw(12)<< s[i].rollno << setw(12)<< s[i].name <<setw(12)<< s[i].sgpa << "\n";
    }
}
void info ::display(student d)
{
    cout << "Roll No. "
         << " "
         << "Name "
         << " SGPA " << '\n';
    cout << d.rollno << "  " << d.name << " " << d.sgpa << "\n";
}
// void info ::rollsorts(int low,int high) //quick sort
// {
//     int i,j;
//         if(low<high){
//             int pivot = s[low].rollno;
//             i=low+1;
//             j=high;
//             do{
//                 while(s[i].rollno<pivot && i<=high)
//                     i+=1;
//                 while(s[j].rollno>pivot && j>=high)
//                     j-=1;
//                 if(i<j)   
//                 {
//                     swap(s[i],s[j]);
//                     i+=1;
//                     j-=1;
//                 }while(i<=j);
//                 swap(s[low],s[j]);
//                 rollsort(low,j-1);
//                 rollsort(j+1,high);
//             }
//         }
// }

void info ::namesort() // using insertion Sort
{
    for (int i = 1; i < n; i++)
    {
        student key = s[i];
        int j = i - 1;
        while (j >= 0 && s[j].name > key.name)
        {
            s[j + 1] = s[j];
            j = j - 1;
        }
        s[j + 1] = key;
    }
}
   /* void info :: namesort()// using Bubble Sort
    { 
        student temp;
    
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < (n - 1-i); j++)
            {
                if (s[j].name > s[j + 1].name)
                {
                    temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                } 
            }
        }
    }*/
void info ::sgpasort() // using bubble sort
{
    student temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (s[j].sgpa < s[j + 1].sgpa)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

void info ::linearsearch() // linear search
{
    float check;
    cout << "Enter The sgpa to be searched For" << '\n';
    cin >> check;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].sgpa == check)
        {
            cout << s[i].rollno << "  " << s[i].name << " " << s[i].sgpa << "\n";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Not Found" << '\n';
    }
}

void info ::rollsort() 
{
    student temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (s[j].rollno > s[j + 1].rollno)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void info ::binsearch() // Binery search
{
    string check;
    cout << "Enter The Name to be searched For" << '\n';
    cin >> check;
    int l = 0;
    int r = n - 1;
    bool flag = 0;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (s[m].name == check)
        {
            display(s[m]);
            flag = 1;
        }
        if (s[m].name < check)
            l = m + 1;
        else
            r = m - 1;
    }
    if (flag == 0)
    {
        cout << "Not Found" << '\n';
    }
}

int main()
{

    info se10;
    int choice = 0;
    while (choice != 7)
    {
        cout << "\n ** MENU Disigned By OM MAPARI ** \n ";
        cout << "1. Press 1 to  Enter Students Information\n";
        cout << " 2. Press 2 for Sorted Roll No List\n";
        cout << " 3. Press 3 for Sorted Name List\n";
        cout << " 4. Press 4 for Sorted Toppers List\n";
        cout << " 5. Press 5 for Searching With SGPA\n";
        cout << " 6. Press 6 for Searching With Name\n";
        cout << "Enter 7 to end the program\n";
        cout << " Enter Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            se10.input();
            break;
        case 2:
            se10.rollsort();
            se10.display();
            break;
        case 3:
            se10.namesort();
            se10.display();
            break;
        case 4:
            se10.sgpasort();
            se10.topperlist();
            break;
        case 5:
            se10.linearsearch();
            break;
        case 6:
            se10.namesort();
            se10.binsearch();
            break;
        default:
            break;
        }
    }
    return 0;
}