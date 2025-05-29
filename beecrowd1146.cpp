#include<iostream>
using namespace std;
int main()
{


    int x;

    int i;
    while (true)
    {
        cin>>x;
        if(x==0)
        {
            break;
        }


        for(i=1; i<=x; i++)
        {

            cout<<i;
            if(i<x)
            {
                cout<<" ";

            }


        }

        cout<<endl;

    }



    return 0;
}
