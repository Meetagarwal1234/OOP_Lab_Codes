#include<iostream>
using namespace std;
class complex{
    public:
    float real,img;
    complex(){
        real=0;
        img=0;
    }
    friend ostream & operator <<(ostream &,complex &);
    friend istream & operator >>(istream &,complex &);
    complex operator +(complex);
    complex operator *(complex);
};
istream & operator >>(istream &is,complex &obj){
    is>>obj.real;
    is>>obj.img;
    return is;
}
ostream & operator <<(ostream &os,complex &obj){
    os<<obj.real;
    os<<"+i"<<obj.img;
    return os;
}
complex complex::operator +(complex obj){
    complex temp;
    temp.real=real+obj.real;
    temp.img=img+obj.img;
    return temp;
}
complex complex::operator *(complex obj){
    complex temp;
    temp.real=obj.real*real -obj.img*img;
    temp.img=obj.img*real +img*obj.real;
    return temp;
}
int main(){
    complex a,b,c,d;
    cin>>a;
    cin>>b;
    c=a+b;
    cout<<endl<<c<<endl;
    d=a*b;
    cout<<d<<endl;;
}


