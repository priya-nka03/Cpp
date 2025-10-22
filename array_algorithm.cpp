#include <iostream>
using namespace std;

int linearsearch(int *arr,int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int binarysearch(int *arr,int start,int end,int target){
    int mid=(start+end)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        binarysearch(arr,mid+1,end,target);
    }
    else{
        binarysearch(arr,start,end-1,target);
    }
}
int main (){
    int arr[]={3,2,4,3,90,93,8};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int start=0;
    int end=size-1;
    cout<<linearsearch(arr,size,0)<<endl;
    cout<<binarysearch(arr,start,end,90)<<endl;
}