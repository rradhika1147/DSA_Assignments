#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = arr[i];
        int loc = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                loc=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int ptr = i-1;
        while(ptr>=0 && arr[ptr]>temp){
            arr[ptr+1]=arr[ptr];
            ptr--;
        }
        arr[ptr+1]=temp;
    }
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
    int s;
    cout<<"Choose sorting algorithm:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n";
    cin>>s;
    switch(s){
        case 1:
            bubbleSort(arr,n);
            break;
        case 2:
            selectionSort(arr,n);
            break;
        case 3:
            insertionSort(arr,n);
            break;
        default:
            cout<<"Invalid choice!";
            return 0;
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}