#include <iostream>
using namespace std;

int main(){

    int n,sum,count=1;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
 
    for(int i = 0 ; i < n ; i++){
            sum = 0;
         for(int j = i ; j < n ; j++){
             sum = sum + arr[j];
             cout<<"sum of sub array loop:"<<count<<"->"<<sum << endl;
         }
         count = count + 1;
    }
    

  


    return 0;
}