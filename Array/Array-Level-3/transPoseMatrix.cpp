#include <iostream>
using namespace std;

// Creation of 2D array 
void printTwoDArray(int arr[][3],int row,int col){

for(int i = 0; i<row; i++){
    for(int j = i+1; j<col; j++){
   swap(arr[i][j],arr[j][i]);
    }
}

for(int i=0; i< row;i++){
    for(int j=0; j< col; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}
int main(){
int arr[3][3] = {1,2,3,4,5,6,7,8,9};
printTwoDArray(arr,3,3);

}