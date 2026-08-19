#include<iostream>
using namespace std;
void binarySearch(int arr[],int n,int a){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==a){
            cout<<"Element found at position: "<<mid+1<<endl;
            return;
        }
        else if(arr[mid]<a){
            low=mid+1;
        }
        else{
            high=mid-1;
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
    binarySearch(arr,n,a);
    return 0;
}
