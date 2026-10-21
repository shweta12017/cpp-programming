#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    //string data;
    ifstream file;
string data;
    // Open file and write data
    file.open("student.txt");
    //file<<"Hello, Welcome to C++ File Handling!";
    //cout<<"file created succesfully";
  //  string data;
    while (getline(file, data))
    {
        cout << data << endl;
    }
    file.close();

    return 0;
}