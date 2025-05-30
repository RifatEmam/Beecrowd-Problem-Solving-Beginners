#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double s=0.0;
    int i;
    int   lob=1;
   int  hor=1;

   while(lob<=39){
    s+=(double)lob/hor;
    lob+=2;
    hor*=2;
   }
   printf("%.2lf\n",s);

}
