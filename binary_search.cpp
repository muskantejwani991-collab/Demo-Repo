#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int st=0, end=n-1;
    while (st<=end){
        int mid=st+((end-st)/2);
        if (arr[mid]<target){
            st=mid+1;
        }else if (arr[mid]>target){
            end=mid-1;
        }else if (arr[mid]==target){
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[]={-1, 0, 3, 5, 9, 12};
    int target=9;
    int n=sizeof(arr)/sizeof(int);
    cout << binarySearch(arr, n, target);
}