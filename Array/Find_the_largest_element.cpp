#include<iostream>

using namespace std;

int main(){

   int n;
   cin>>n;
   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }

   // 4 7 6 3 9

   for(int i=1; i < n ; i++){
      
      if (arr[0] < arr[i])
      {
          arr[0] = arr[i];
      }
      

   }

      cout <<arr[0] <<endl;

    return 0 ;
}