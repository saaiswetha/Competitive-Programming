#include <iostream> 
using namespace std;
 int mleft(int a[],int i)       	// O(n) = time.c
	{
    	int j=0,maximum=0;
   	while(j<=i-1)
   	{
       	maximum=max(maximum,a[j]);
       	j++;
   	}
   	return maximum;
	}
	
 	int mright(int a[],int i,int n)	// O(n) = time.c
	{
    	int j=i+1,maximum=0;
   	while(j<=n)
   	{
       	maximum=max(maximum,a[j]);
       	j++;
   	}
   	return maximum;
	}
 
	int rain(int a[],int n)
	{
    	int r=0;
    	for(int i=1;i<n-1;i++)      	// i=0 to i<n-1 as water cant be trapped on top of 1st nd last wall.
    	{                                        	// O(n) = time.c
            int maxLeft=mleft(a,i),maxRight=mright(a,i,n); 
 
// as we are calling these 2 functions of time.c = O(n)  ‘n’ times à O(n2) = time.c
 
            if(maxLeft>=a[i]&&maxRight>=a[i])
        	r+=min(maxLeft,maxRight)-a[i];            	// maxLeft and maxRight can include ‘i’ th index	
                                                                                    // if that index element is highest in right and left    	
                                                                            // then, min(a[i],a[i])-a[i] = 0                                                     
 	   }
    	return r;
	}
int main()
{   	
    	int a[]={3,0,0,2,0,4};
    	int x=rain(a,6);
    	cout<<x<<endl;
	
}
