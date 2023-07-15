#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class publication{
    public:
    string title;
    float price;
};

class book:public publication{
    public:
    int count;
    void getdata1(){
        cout<<"Enter the name of the publication :\n";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter the price of the publication :\n";
        cin>>price;
        try{
            cout<<"Enter the page count of the book :\n";
            cin>>count;
            if(count<=0){
                throw count;
                }
        }
        catch(int i){
            cout<<"Invalid value for count\n";
            count=0;
        }
    }
    void display(){
    
            cout<<endl<<title<<"\t"<<price<<"\t"<<count<<endl;
    
    }
};
class tape:public publication{
    public:
    float playtime;
    void getdata2(){
        cout<<"Enter the name of the publication :\n";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter the price of the publication :\n";
        cin>>price;
        try{
        cout<<"\nEnter the page count of the book :";
        cin>>playtime;
        if(playtime<=0){
            throw playtime;
            }
        }
        catch(float i){
            cout<<"Invalid value for playtime";
            playtime=0;
        }
    }
    void display(){
        cout<<title<<"\t"<<price<<"\t"<<playtime;
    }
};
int main(){
    book b[10];
    tape t[10];
    int b_count=0;
    int t_count=0;
    int flag=0;
    do{
        cout<<"\t\t\n***Menu***\n";
        cout<<"1.Enter information for book.\n";
        cout<<"2.Display information for book.\n";
        cout<<"3.Enter information for tape.\n";
        cout<<"4.Display information for tape.\n";
        cout<<"5.Break\n";
        int s;
        cout<<"Enter your choice:\n";
        cin>>s;
        switch(s){
            case 1:
            b[b_count].getdata1();
            b_count++;
            break;
            
            case 2:
            cout<<"Title\t"<<"Price\t"<<"Page_count";
            for(int i=0;i<b_count;i++)b[i].display();
            break;
            
            case 3:
            t[t_count].getdata2();
            t_count++;
            break;
            
            case 4:
            cout<<"Title\t"<<"Price\t"<<"Play_time";
            for(int i=0;i<t_count;i++)t[i].display();
            break;
            
            case 5:
            flag=1;
            break;
        }
    }while(flag!=1);
}