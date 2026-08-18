#include<iostream>
using namespace std;
void insertion(int arr[],int &n,int a,int pos){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=a;
    n++;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a;
    cout<<"Enter the element to be inserted: ";
    cin>>a;
    int pos;
    cout<<"Enter the position to insert the element: ";
    cin>>pos;
    insertion(arr, n, a, pos);
    cout<<"Array after insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}