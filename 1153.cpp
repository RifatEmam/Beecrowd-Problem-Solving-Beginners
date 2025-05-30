#include<iostream>
using namespace std;
int fact(int n)
{

    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }



}
int main ()
{

    int n;
    cin>>n;
    int i;
    if(0<n && n<13)
    {

        i=fact(n);

        cout<<i<<endl;

    }


    return 0;
}

