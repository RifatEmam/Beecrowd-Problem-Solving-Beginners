#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
    {
        return n;

    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}


int main()
{

    int n;
    cin>>n;
    int i;
    if(0<n && n<46)
    {
        for(i=0; i<n; i++)
        {
            cout<<fibo(i);
            if(i<n-1)
            {

                cout<<" ";
            }






        }
        cout<<endl;


    }









    return 0;
}
