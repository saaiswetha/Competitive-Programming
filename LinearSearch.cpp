#include <iostream>
using namespace std;

int main()
{
    int a[]={23,9,17,99},n=sizeof(a)/sizeof(int),key,index=-1;
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==a[i])
        {index=i;break;}
    }
    cout<<index;
}
