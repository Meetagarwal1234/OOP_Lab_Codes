#include<iostream>
using namespace std;
template<class t>
void sorting(t arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        t temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp; 
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the integer array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nThe sorted integer array\n";
    sorting(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the float array :\n";
    float arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"\nThe sorted float array\n";
    sorting(arr1,n);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    
}