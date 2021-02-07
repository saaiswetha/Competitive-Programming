#include <iostream>
#include <bits/stdc++.h>   // used for memset function to set all the array vals as true.
int main()
{
   bool prime[21]; int n=sizeof(prime);  // checking for primes nos till 20 --> array size is of 20+1 as 20 is also inclusive as the question was to compute prime nos. till 20 including 20
   memset(prime,true,n);
 
   // 2 for loops , one for finding the prime no. and another for crossing this prime num's multiples.
   for(int i=2;i<sqrt(n);i++)
   {
   	if(prime[i])
   	{
  	for(int j=i*i;j<=n;j=j+i)
      	prime[j]=false;
   	}
   }
   for(int k=2;k<=n;k++)
   {
   	if(prime[k])
   	cout<<k<<" ";
   }
}
