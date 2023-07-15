#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class item{
    public:
    int code;
    string nm;
    int cost,quan;
    bool operator ==(const item& i){
        if(code==i.code)return 1;
        return 0;
    }
    bool operator <(const item &i){
        if(cost<i.cost)return 1;
        return 0;
    }
};
vector<item>vec;
void insert(){
    item i;
    cout<<"Enter the name of the item :";
    cin>>i.nm;
    cout<<"Enter the code of the item :";
    cin>>i.code;
    cout<<"Enter the cost of the item :";
    cin>>i.cost;
    cout<<"Enter the quantity of the item :";
    cin>>i.quan;
    vec.push_back(i);
}
void print(const item&i){
    cout<<i.code<<"\t"<<i.nm<<"\t"<<i.cost<<"\t"<<i.quan<<endl;
}
void display(){
cout<<"Code\tName\tCost\tQuantity\n";
for_each(vec.begin(),vec.end(),print);
}
void display1(const item&i){
    cout<<"Code\tName\tCost\tQuantity\n";
    cout<<i.code<<"\t"<<i.nm<<"\t"<<i.cost<<"\t"<<i.quan<<endl;

}

void search(){
    cout<<"Enter the code of the item to search";
    vector<item>::iterator p;
    item i;
    int code;
    cin>>i.code;
    p=find(vec.begin(),vec.end(),i);
    if(p==vec.end()){
        cout<<"Item not found";
    }
    else{
        display1(vec[p-vec.begin()]);
    }
}
bool compare(const item& i1,const item&i2){
    return i1.cost<i2.cost;
}
int main(){
    int s;
    do{
        cout<<"\t\t\n***Menu***\n";
        cout<<"1.Enter information for item\n";
        cout<<"2.Display information for item\n";
        cout<<"3.Sort cost\n";
        cout<<"4.Search item\n";
        cout<<"5.Break\n";
        int s;
        cout<<"Enter your choice:\n";
        cin>>s;
        switch(s){
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:
            sort(vec.begin(),vec.end(),compare);
            break;
            case 4:
            search();
            break;
            case 5:
            break;
        }
    }while(s!=5);

}
