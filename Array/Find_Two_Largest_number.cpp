#include <iostream>
using namespace std;

int main(){
     /*  
        initial first & second will be 0.001

        input -> 7 10 9 5
                    first | second
        1st loop =    7   |  0.001 
        2nd loop =   10   |  7
        3rd loop =   10   |  9
        4th loop =   10   | 9 
    
        1stMax = 10 and 2ndMax = 9

     */
     int n;
     cin >> n;

     int arr[n];

     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }
     
     int first = 0.001;
     int second = 0.001;

     for(int i = 0 ; i < n ; i++){
           
           int current = arr[i];

           if(first < current){
               second = first;
               first = current;
           }
           else if(second < current){
               second = current;
           }
     }


    cout<<"first value: "<<first<<endl;
    cout<<"second value: "<<second;

    return 0;
}