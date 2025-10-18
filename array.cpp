#include<iostream>
using namespace std;

int maxArray(int *arr,int size){
    int arrayMax=arr[0];
    for (int i=0;i<size;i++){
        if(arr[i]>arrayMax){
            arrayMax=arr[i];
        }
    }
    return arrayMax;
}

int minArray(int *arr,int size){
    int arrayMin=arr[0];
    for (int i=0;i<size;i++){
        if(arr[i]<arrayMin){
            arrayMin=arr[i];
        }
    }
    return arrayMin;
}

void reverseArray(int *arr,int size){
    int start=0;
    int end=size-1;
    while(end>start){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main (){
    // Arary : array is a linear data structure which store multiple values of same datatype in a single varaible.
    // It store data in contigous memory location.
    // It is static in nature.

    //syntax: declaration =>datatype variable_name[lenght];

    int arr1[8]={9,3,4,5,3};
    for (int i=0;i<8;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    int arr2[4];
    arr2[0]=0;
    arr2[1]=90;
    arr2[2]=8;
    arr2[3]=77;
    for (int i=0;i<8;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    int arr3[]={3,90,43,902};
    for (int i=0;i<(sizeof(arr3)/sizeof(arr3[0]));i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    //Ques1: Max in an array
    cout<<maxArray(arr3,(sizeof(arr3)/sizeof(arr3[0])))<<endl;

    //Ques2: Min in an array
    cout<<minArray(arr3,(sizeof(arr3)/sizeof(arr3[0])))<<endl;
    //Ques 3: reverse of an array
    reverseArray(arr3,(sizeof(arr3)/sizeof(arr3[0])));
    for (int i=0;i<(sizeof(arr3)/sizeof(arr3[0]));i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}