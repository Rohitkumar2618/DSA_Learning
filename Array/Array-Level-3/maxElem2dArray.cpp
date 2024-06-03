
#include <iostream>
#include <climits> 
using namespace std;


// Creation of 2D array 
void searchInTwoDArray(int arr[][3],int row,int col){

int max = INT_MIN;
for(int i=0;i<col;i++){
    for(int j=0; j< row; j++){
      if(arr[i][j] > max) {
       max = arr[i][j];
      }
     
    }

}
 cout<<max<<endl; 
 
}
int main(){
int arr[3][3] = {1,2,3,4,5,6,7,8,9};

 searchInTwoDArray(arr, 3, 3);

}