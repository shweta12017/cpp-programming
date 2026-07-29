#include<iostream>
using namespace std;
int main()
{
    int n;
    int rev=0;
    cout<<"enter the value of number:";
    cin>>n;
    while (n>0){
        int reminder=n%10;
        rev=rev*10+reminder;
        n=n/10;
    }
    cout<<"reverse number:"<<rev;
    return 0;
}