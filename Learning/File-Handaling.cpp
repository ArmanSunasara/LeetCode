#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream outfile("ex.txt");
    // outfile<<"kaise ho";
    // outfile.close();


    // ifstream inFile("ex.txt");
    // string line;
    // while(getline(inFile,line))
    // {
    //     cout<<line<<endl;
    // }
    // inFile.close();

    string name="Arman.bat";
    fstream file;

    file.open(name,ios :: in | ios :: out | ios :: trunc);

    if(!file.is_open())
    {
        cout<<"erroe";
        return 0;
    }

    cout<<"open";

    file.close();
    
    










    return 0;

}