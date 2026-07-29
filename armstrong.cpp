#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, reminder,original;
    int result=0;
    int digit=0;
    cout<<"Enter the number:";
    cin>>n;
    original=n;
    while(n!=0){

        digit++;
        n=n/10;
    }n=original;
    while (n!=0)
    {
        reminder=n%10;
        result=result+pow(reminder,digit);
        n=n/10;
    }
    if(result==n){
        cout<<"number is armstrong";
    }else{
        cout<<"number is not armstrong";
    }
    return 0;
}