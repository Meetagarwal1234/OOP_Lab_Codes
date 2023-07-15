#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out;
    out.open("Model.txt",ios::app);
    cout<<"Enter the content for the file :"<<endl;
    getline(cin,str);
    out<<str;
    out.close();

    ifstream in;
    in.open("Model.txt");
    while(in.eof()==0)
    {
       // cout<<"R"<<endl;
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();
    return 0;
}