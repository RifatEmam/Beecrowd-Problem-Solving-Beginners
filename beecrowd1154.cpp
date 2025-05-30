#include <iostream>
using namespace std;
int main()
{

    int i,n,count=0;
    float sum=0;

    while(true)
    {

        cin>>n;
        if(n<0)
        {
            break;
        }
        else if(n>0)
        {
            sum+=n;
            count++;

        }

    }
    if(count>0)
    {
        float average=sum/count;
        printf("%.2f",average);
    }



    return 0;
}
