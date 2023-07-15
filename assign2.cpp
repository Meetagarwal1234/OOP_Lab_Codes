#include<iostream>
using namespace std;
class student{
    public:
    int roll,dob,tel;
    string name,div,bg,add;
    student(){
        name="Meeta";
        roll=7;
        bg="a+";
        div="H";
    }
    student(student &s){
        this->roll=s.roll;
        this->name=s.name;
        this->bg=s.bg;
        this->bg=s.bg;
        this->add=s.add;
       // this->sub=p.sub;
    }
    static int count;
    static int c(){
        count++;
    }
    ~student(){
        cout<<"\nMemory deleted\n";
    }
    void getdata();
    void display();
};
class publication{
    public:
    string sub;
    friend class student;
};
void student::getdata(){
    publication p;
    cout<<"Enter the name of the student :";
    cin>>name;
    cout<<"Enter the roll no of the student :";
    cin>>roll;
    cout<<"Enter the div of the student :";
    cin>>div;
    cout<<"Enter the blood grp of the student :";
    cin>>bg;
    cout<<"Enter the address of the student :";
    cin.ignore();
    getline(cin,add);
    cout<<"Enter the subject of the student :";
    cin.ignore();
    getline(cin,p.sub);
}
void student::display(){
    publication p;
    cout<<name<<"\t"<<roll<<"\t"<<div<<"\t"<<bg<<"\t"<<add<<"\t"<<p.sub<<endl;
}
int student::count;
int main(){
    student *s= new student[1];
    for(int i=0;i<3;i++){
        s[i].getdata();
    }
    cout<<"Name"<<"\t"<<"Roll no"<<"\t"<<"Div"<<"\t"<<"Bg"<<"\t"<<"Address"<<endl;
    for(int i=0;i<3;i++){
        s[i].display();
    }
    student a1;
    a1.getdata();
    student a2(a1);
    a2.display();
}

