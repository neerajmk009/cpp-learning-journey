# include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;
    int temp;
     temp = a;
     a = b;
     b = temp;

    cout<<"After swap a = "<<a<<",\n b="<<b;

    return 0;
}