#include <iostream>
using namespace std;

int main()
{
    //give sorted array
    int a[]={-2,3,5,9,11,16,43},n=sizeof(a)/sizeof(int),key,index=-1,l=0,r=n-1,mid;
    cin>>key;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==key)
       { index=mid;
        break;
       }
       else if(key>a[mid])
       {
           l=mid+1;
       }
       else
       {
         r=mid-1;  
       }
    }
    cout<<index;
}
