#include <iostream>

using namespace std;

int main(){

   int array[10] = {1,5,4,7,5,3,6,7,8,9};
   
   int count = 0;
   int value;
   cout<<"enter e value:";
   cin >> value;

   for(int i=0; i<10;i++){
      
      if(value == array[i]){
          count = count + 1;
          break;
      }
      count++;

   }

    cout<<"position of the item is:"<<count;

    return 0;
}