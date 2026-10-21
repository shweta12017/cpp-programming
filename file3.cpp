#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;
    char data[100];
    // Open file and write data
    file.open("stud.txt",ios::binary);
    //char data[100];
    file.read(data, 100);
    cout<<"Data read"<<data;
    file.close();

    return 0;
}

/**/