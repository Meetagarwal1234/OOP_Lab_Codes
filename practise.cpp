#include<iostream>
using namespace std;
class complex{
    public:
    float real,img;
    complex(){
        real=0;
        img=0;
    }
    friend ostream & operator <<(ostream&,complex&);
    friend istream & operator >>(istream&,complex&);
    complex operator+(complex&);
    complex operator*(complex&);
};
ostream & operator <<(ostream &out,complex &obj){
    out<<obj.real<<"+i"<<obj.img;
    return out;
}
istream & operator >>(istream &ist,complex &obj){
    ist>>obj.real;
    ist>>obj.img;
    return ist;
}
complex complex::operator +(complex &obj){
    complex t;
    t.real=real+obj.real;
    t.img=img+obj.img;
    return t;
}

complex complex::operator *(complex &obj){
    complex t;
    t.real=real*obj.real-obj.img*img;
    t.img=img*obj.real+obj.img*real;
    return t;
}
int main(){
    complex a,b,c,d;
    cin>>a;
    cin>>b;
    c=a+b;
    d=a*b;
    cout<<endl<<c;
    cout<<endl<<d;
}