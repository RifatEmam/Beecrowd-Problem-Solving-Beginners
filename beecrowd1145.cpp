#include<iostream>
using namespace std;
int main(){

int x,y;
cin>>x>>y;

if(1<x && x<20 && x<y && y<100000)
{
    for(int i=1;i<=y;i++){

        cout<<i;
        if(i%x==0){
            cout<<endl;

        }else {

        cout<<" ";
        }


}


}

return 0;
}
