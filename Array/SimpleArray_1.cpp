#include <iostream>
using namespace std;

int main(){

     // User input array 

     int n;
     cin >> n;

     int array[n];
      
     for(int i=0 ; i < n ; i++){
         cin >> array[i];
     } 

     for(int i=0 ; i < n ; i++){
         cout << array[i]<<" ";
     } 












    //  int array[4] = {100,200,300,400};

    //  array[0]=10;
    //  array[1]=20;
    //  array[2]=30;
    //  array[3]=40;


    // printf("%d",array[0]);
    // int size = array / array[0];

    // int i = 0;

    // for(i ; i<4 ; i++){
    //    printf("%d\t",array[i]); 
    // }

    return 0;
}