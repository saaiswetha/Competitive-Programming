#include <iostream>
using namespace std;

int sqRoot(int num,int l,int r){
   int mid,root;
    while(l<=r){
        mid=(l+r)/2;
        if(mid*mid==num)
        {root=mid;break;}
        else if((mid*mid)>num)
        {r=mid-1;}
        else
       { l=mid+1;root=mid;}
    }
    cout<<root;
}
int main()
{
    int num=35,l=0,r=num/2;
    sqRoot(num,l,r);
}
