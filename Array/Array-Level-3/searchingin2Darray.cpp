
#include <iostream>
using namespace std;

// Creation of 2D array 
bool searchInTwoDArray(int arr[][3],int row,int col,int target){

for(int i=0;i<col;i++){
    for(int j=0; j< row; j++){
      if(arr[i][j] == target) {
        return true;
      }
     
    }

}
  return false;
}
int main(){
int arr[3][3] = {1,2,3,4,5,6,7,8,9};
 int target = 6;
bool found = searchInTwoDArray(arr, 3, 3, target);

if(found) {
    cout << "Found" << endl;
}
else{
    cout << "Not Found" << endl;
}
}