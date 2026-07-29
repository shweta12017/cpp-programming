#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int choice, n;
    cout<<"1. reverse number";
    cout<<"2. check palindrome";
    cout<<"3. check armstrong";
    cout<<"enter the choice";
    cout<<"Enter the number:";
    cin>>n;
    switch(choice){
        case 1:{
            int rev=0, temp=n;
            while (temp>0){
        int reminder=temp%10;
        rev=rev*10+reminder;
        temp=temp/10;
    }
    cout<<"reverse number"<<rev;
    break;
        }case 2:{
            int rev=0, temp=n;
            while (temp>0){
        int reminder=temp%10;
        rev=rev*10+reminder;
        temp=temp/10;
    }if(n==rev){
        cout<<"number is palindrome";
    }else{
        cout<<"number is not palindrome";
    }break;
        }case 3:{
            int temp=n, digit=0, result=0, reminder;
            while(n!=0){
        digit++;
        temp=temp/10;
    }temp=n;
    while (temp!=0)
    {
        reminder=temp%10;
        result=result+pow(reminder,digit);
        temp=temp/10;
    }
    if(result==n){
        cout<<"number is armstrong";
    }else{
        cout<<"number is not armstrong";
    }break;
        }
        default:
        cout<<"invalid choice";
    }
    return 0;
}