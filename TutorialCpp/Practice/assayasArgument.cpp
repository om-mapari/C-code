
#include <iostream>
using namespace std;
void array(int b[]) {
    int sum=0;
     for (int i = 0; i < 10; i++){
         sum+=b[i];
     
     }
     cout <<"Sum is " <<sum<<endl;   
} 
void array(float k[]) {
    int sum=0;
     for (int i = 0; i < 10; i++){
         sum+=k[i];
        
     }
     cout <<"Sum is " <<sum;
}
int main(){
    int a[10]={3,6,2,7,8,6,2,5,2,8};
    float f[10]={5.3,3,6,5,2,8,9,8,3.7};
    array(a);
    array(f);

return 0;
}