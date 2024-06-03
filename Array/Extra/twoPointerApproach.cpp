#include <iostream>
using namespace std;


void placeNegative(int arr[],int n,int i,int j){


for(i = 0; i<n; i++) {

if(arr[i] < 0) {
    swap(arr[i],arr[j]);
    j++;
}
}


for(i = 0; i<n; i++) {
    cout<<arr[i]<<" ";
}


}

int main(){

    int arr [] = {23,-7,12,-10,-11,40,60};
    int n = 6;
    int i = 0;
    int j = 0;
placeNegative(arr,n,i,j);

}