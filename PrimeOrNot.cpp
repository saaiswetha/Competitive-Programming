#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int num=10;bool x;
   for(int i=2;i<=sqrt(num);i++)     // i<=n/2 or i<=n  are also possible nd correct conditions but more 
                                                             // time consuming.
   {
       if(num%i==0)
       {x=true;break;}
   }
   x==true?cout<<"non-prime":cout<<"prime";
}

