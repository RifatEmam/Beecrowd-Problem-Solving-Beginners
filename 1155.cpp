#include<iostream>
using namespace std;
int main()
{
    double s=0.0;
    int i;
    for(i=1;i<=100;i++){
        s+=1.0/i;
    }

   printf("%.2lf\n",s);

}
