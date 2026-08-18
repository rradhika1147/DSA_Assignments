#include<iostream>
using namespace std;
void deletion(int arr[],int &n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main(){int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter the position of the element to be deleted: ";
    cin>>pos;
    deletion(arr, n, pos);
    cout<<"Array after deletion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}