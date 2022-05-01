#include <iostream>

using namespace std;


int binarySearch(int arr[], int n, int k){

int s = 0,e = n;

while(s <= e){

int mid = (s+e)/2;


if(arr[mid]==k){
   return mid;

}else if(arr[mid] > k){
    e = mid - 1;
}else{
    s=mid+1;
}



}
 return -1;


}




int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }

    int key;
    cin>> key;

  

    cout<<"position: "<<binarySearch(arr,n,key);



    return 0;
}