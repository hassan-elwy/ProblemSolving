
#include<iostream>
using namespace std;
 
 
void Rec(int s)
{
    if(s==0)
    {
 
        return;
    }
    cout<<s;
    if(s!=1)
    {
        cout<<" ";
    }
    Rec(s-1);
}
 
int main()
{
    int s;
    cin>>s;
    
    Rec(s);
    return 0;
 
}
