#include <iostream>
using namespace std;

int firstOccurance(int a[],int n,int key){
    int l=0,r=n-1,fi=-1; //l=left , r= right
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==key&&a[mid-1]==key)
       { r=mid-1;}
      else if(a[mid]==key&&a[mid-1]<key)
      { fi=mid;break;}
       else if(a[mid]>key)
       r=mid-1;
       else if(a[mid]<key)
       l=mid+1;
}
return fi;
}

int lastOccurance(int a[],int n,int key){
    int l=0,r=n-1,la=-1; //l=left , r= right
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==key&&a[mid+1]==key)
       { l=mid+1;}
      else if(a[mid]==key&&a[mid+1]>key)
      { la=mid;break;}
       else if(a[mid]>key)
       r=mid-1;
       else if(a[mid]<key)
       l=mid+1;
}
return la;
}

int main()
{
    int a[]={1,2,3,3,4,4,4,5,6},n=sizeof(a)/sizeof(int),l=0,r=n-1,key=4;
    int fi=firstOccurance(a,n,key);
    int la=lastOccurance(a,n,key);
    cout<<fi<<" "<<la;
    
}

