#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int answer=0;
 
 if(m*a<=b){
 	
 answer=n*a;
 	
 }	
 
 else
 {
 	answer=(n/m)*b+min((n%m)*a,b);
 	
 }
	
	cout<<answer;
	return 0;
}