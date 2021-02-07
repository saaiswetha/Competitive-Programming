#include <iostream>
using namespace std;
 
//total no.of substrings = n*(n+1)/2
 
int main()
{
	string c="abc";
	int n=3;
	for(int i=0;i<n;i++){
    	string s="";
    	for(int j=i;j<n;j++)
    	{
        	s+=c[j];
        	cout<<s<<endl;
    	}
	}
}

