#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int a){
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            cout<<"Element found at position: "<<i+1<<endl;
            return;
        }
    }
    cout<<"Element not found"<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a;
    cout<<"Enter the element to be searched: ";
    cin>>a;
    linearSearch(arr,n,a);
    return 0;
}