#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	// your code goes here
	
		int t,input,small;
		long int n,place;
		std::cin>>t;
		for(int i=0;i<t;i++)
		 {	std::cin>>n;
		 	for(long int j=0;j<n;j++)
		 	{	std::cin>>input;
		 		if(j==0||input<small)
		 			{
		 				small=input;
		 				place=j;
		 			}

		 	}	
		  	std::cout<<place+1<<"\n";
		 }
	return 0;
}
