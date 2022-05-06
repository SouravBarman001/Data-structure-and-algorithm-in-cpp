#include<iostream>

using namespace std;

int main(){

   int n;
   cin>>n;
   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }

//    int a = arr[0];
//    int b = arr[1];

   int temp = arr[1];

   for(int i=0; i < n ; i++){
      
      if (arr[i] > temp)
      {
          temp = arr[i];
      }if(arr[i] < temp){
          temp = arr[i+1];
      }
      

   }

      cout <<temp<<endl;

    return 0 ;
}