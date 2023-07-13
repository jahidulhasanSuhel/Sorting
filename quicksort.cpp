#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int count=0;
    for(int i= s+1; i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex=s+count;
    swap(arr[pivotindex], arr[s]);
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
    while(arr[j]>pivot){
            j--;
        }
    }
    if(i<pivotindex && j>pivotindex){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return pivotindex;
}
void QuickSort(int arr[], int s, int e){
    if(s>=e)
    return;
    int p=partition(arr, s, e);
    QuickSort(arr, s, p-1);
    QuickSort(arr, p+1, e);
}
int main(){
system("cls");
    int arr[]={9,7,4,5,3,2,};
    int n = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    getch();
    return 0;
}