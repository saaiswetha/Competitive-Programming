#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6},n=sizeof(a)/sizeof(int);
    int r=4,temp[r];
    for(int i=0;i<r;i++)
    {
        temp[i]=a[i];
    }
    
    for(int j=0,k=r;j<n-r,k<n;j++,k++){
        a[j]=a[k];
    }
    for(int l=0,k=n-r;l<r,k<n;l++,k++){
        a[k]=temp[l];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
