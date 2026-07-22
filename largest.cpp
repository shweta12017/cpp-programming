#include<iostream>
using namespace std;
int main()
{
int a, b, c;
cout<<"enter the 3 numbers:";
cin>>a>>b>>c;
if(a>=b&&a>=c){
cout<<"largest number="<<a<<endl;
}else if(b>=a&&b>=c){
cout<<"largest number="<<b<<endl;
}else{
cout<<"largest number="<<c<<endl;
}
return 0;
}
