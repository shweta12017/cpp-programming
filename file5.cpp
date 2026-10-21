#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;
int main()
{
    ofstream file;
    char data[100];
    cout<<"Enter data:";
    cin.getline(data,100);
    // Open file and write data
    file.open("stud.txt",ios::binary);   //data erased and then write
    file.write(data,strlen(data));
    cout<<"data write succesfully";
    file.close();

    return 0;
}