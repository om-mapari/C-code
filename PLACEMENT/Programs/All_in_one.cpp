#include <iostream>
#include <cmath>
using namespace std;
void divisibility();
void sqrtofn();
void sum_up_to_n();
void swapno();
void area();
void fibonacci();
int intinput();
float floatinput();
int main()
{
    int choice = 0;
    do
    {
        cout << "\n*****MAIN MENU*****" << endl;
        cout << "PRESS 1 TO TO DO DIVISIBLITY TEST ON NUMBER :" << endl;
        cout << "PRESS 2 TO FIND SQUARE ROOT OF NUMBER :" << endl;
        cout << "PRESS 3 TO FIND SUM OF NUMBER UPTO N :" << endl;
        cout << "PRESS 4 TO FIND AREA OF CIRCLE/SQUARE/RECTANGLE :" << endl;
        cout << "PRESS 5 TO SWAP THE NUMBER :" << endl;
        cout << "PRESS 6 TO PRINT FIBONACCI :" << endl;
        cout << "PRESS 0 TO EXIT PROGRAM :" << endl;
        cout << "**ENTER CHOICE** : ";
        choice = intinput();
        switch (choice)
        {
        case 1:
            divisibility();
            break;
        case 2:
            sqrtofn();
            break;
        case 3:
            sum_up_to_n();
            break;
        case 4:
            area();
            break;
        case 5:
            swapno();
            break;
        case 6:
            fibonacci();
            break;
        default:
            (choice == 0) ? cout << "Exiting... " << endl : cout << "Invaild input " << endl;
            break;
        }

    } while (choice != 0);
    return 0;
}

void divisibility()
{
    int n;
    int check;
    cout << "Enter number : ";
    n = intinput();
    cout << "Check divisibility by Number : ";
    check = intinput();
    (n % check == 0) ? cout << "YES, " << n << " is divisible by " << check << endl : cout << "NO, " << n << " is not divisible by " << check << endl;
}
void swapno()
{
    cout << "Enter first no x : ";
    float a;
    a = floatinput();
    cout << "Enter secoud no y : ";
    float b;
    b = floatinput();
    float temp;
    temp = a;
    a = b;
    b = temp;
    cout << "first no x is : " << a << endl;
    cout << "second no y is : " << b << endl;
}

void sqrtofn()
{
    cout << "Enter no : ";
    float n;
    n = floatinput();
    cout << sqrt(n) << endl;
}

void sum_up_to_n()
{
    cout << "Enter upto which no you want sum : ";
    int n;
    n = intinput();
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum upto " << n << " is " << sum << endl;
}
void area()
{
    int c = 0;
    do
    {
        cout << "   WHOSE AREA DO YOU WANTS TO FIND :" << endl
             << "      PRESS 1 FOR CIRCLE :" << endl
             << "      PRESS 2 FOR SQUERE :" << endl
             << "      PRESS 3 FOR RECTANGLE :" << endl
             << "      PRESS 0 TO RETURN MAIN MENU :" << endl;
        cout << "ENTER CHOICE : ";
        c = intinput();
        switch (c)
        {
        case 1:
            cout << "                Enter radius of circle : ";
            float r;
            r = floatinput();
            cout << "                Area of circle is : " << 3.14 * r * r << endl;
            break;
        case 2:
            cout << "                Enter side of squre : ";
            float s;
            s = floatinput();
            cout << "                Area of squre is : " << s * s << endl;
            break;
        case 3:
            cout << "                Enter length of rectangle : ";
            float l, b;
            l = floatinput();
            cout << "                Enter breadth of recrangle : ";
            b = floatinput();
            cout << "                Area of rectangle is " << l * b << endl;
            break;
        default:
            (c == 0) ? cout << "                Returning back to MAIN MENU.. " << endl : cout << "                Invaild input " << endl;
            break;
        }
    } while (c != 0);
}
void fibonacci()
{
    int t1 = 0, t2 = 1, n, sum;
    cout << "How much no you wants to print? : ";
    n = intinput();
    cout << "Printing..." << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << t1;
            continue;
        }
        if (i == 2)
        {
            cout << "  " << t2 << " ";
            continue;
        }
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
        cout << " " << sum << " ";
    }
    cout << endl;
}
float floatinput()
{
    float n;
    while (!(cin >> n))
    {
        cout << "  INVALID INPUT : Please ReEnter : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return n;
}
int intinput()
{
    int n;
    while (!(cin >> n))
    {
        cout << "  INVALID INPUT : Please ReEnter : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return n;
}