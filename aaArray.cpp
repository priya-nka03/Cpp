#include <iostream>
using namespace std;

void matrixSum(int (*arr)[4],int row,int column,int (*arr2)[4]){
    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[][4],int row,int column){
    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            
        }
    }
}
int main (){
    /*
    2D Array 
    2 Dimensional Array => it is used to represent the data in 2-D form, row-column or martix
    
    syntax: arr[m][n] => where m=row , n=column 
    */
   int arr_2d[3][2];         //initialization row=3 and column =2
   arr_2d[0][1]=9;
   arr_2d[1][0]=90;
   arr_2d[1][1]=67;
   cout<<arr_2d[0][0]<<" "<<arr_2d[0][1]<<endl<<arr_2d[1][0]<<" "<<arr_2d[1][1]<<endl<<arr_2d[2][0]<<" "<<arr_2d[2][2]<<endl;

   int arr2_2d[2][2]={{3,4},{32,43}};
   cout<<arr_2d[0][0]<<" "<<arr_2d[0][1]<<endl<<arr_2d[1][0]<<" "<<arr_2d[1][1]<<endl;

//    int arr3_2d={{7,3},{3,21}};

    // Ques1: input and output of 2D array with the help of loops
    int row=4; int column =2;
    int arr4_2D[row][column];
    cout<<"Enter the elements:";
    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr4_2D[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr4_2D[i][j]<<" ";
        }
        cout<<endl;
    }

    /*2d array in function => arr[][column]
         OR
         (*arr)[column]*/

    // Ques2: Matrix sum 
    int mat1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int mat2[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    matrixSum(mat1,4,4,mat2);
}