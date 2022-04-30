#include <iostream>
#include <climits>

using namespace std;

int main(){

  int n;
  cin >> n;
  
  int array[n];

  for(int i=0 ; i< n ; i++){

      cin >>array[i] ;
  }

  int maxNo = array[0]; 
  int minNo = array[0]; 
  
  for(int i=0 ; i<n ; i++){

     // these are the builtin library
    //  maxNo = max(maxNo,array[i]);
    //  minNo = min(minNo,array[i]);
      
      if(array[i] > maxNo){
          maxNo = array[i];
      }
      if(array[i] < minNo){
          minNo = array[i];
      }
  }


  cout <<"Max: "<<maxNo<<" "<<"Min: "<<minNo<<endl;

    return 0;
}