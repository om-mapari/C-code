#include <iostream>
using namespace std;
/*how will you write
as sum = sum + PrevSum;
*/
// int sum_upto_n(int n){
//     if(n==1){
//         return 1;
//     }
//     int sum = n + sum_upto_n(n-1);
//     return sum;
// }
int sum_upto_n(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum_upto_n(n - 1);
}
// int sum_upto_n(int n){
//     if(n==1){
//         return 1;
//     }
//     int prevSum = sum_upto_n(n-1);
//     return n + prevSum;
// }

/*how will you write
as pow = n * pow (n-1);
*/
// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int pow = n * power(n,p-1);
//     return pow;
// }
int power_p(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevpower = power_p(n, p - 1);
    return n * prevpower;
}

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int fact = n*factorial(n-1);
//     return fact;
// }
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // int fact = n*factorial(n-1);
    return n * factorial(n - 1);
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << "Fibo(" << n << ") number is " << fibo(n) << endl;
    cout << "Sum till " << n << " is " << sum_upto_n(n) << endl;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    cout << "Enter Power : ";
    int p;
    cin >> p;
    cout << n << "^" << p << " is :  " << power(n, p);
    ;
    return 0;
}