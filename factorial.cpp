#include<iostream>
using namespace std;
int main()
{
int num, factorial;
factorial=1;
cout<<"enter the number:"<<endl;
cin>>num;
for(int i=1;i<=num;i++){
factorial=factorial*i;
}
cout<<"factorial of "<<num<<endl;
cout<<factorial<<endl;
return 0;
}
