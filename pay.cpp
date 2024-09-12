#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "How many hours you worked: ";
    cin>>a;
    cout<<"What is Pay rate per hour: ";
    cin >>b;
    int grosspay = a * b;
    cout<< "Gross Pay: "<<grosspay<<endl;


    return 0;
}