#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},a,i;
    int *ptr=&arr[0];
    cout<<"enter the position to print:";
    cin>>a;
    cout<<*(ptr+a)<<endl;
       

}
