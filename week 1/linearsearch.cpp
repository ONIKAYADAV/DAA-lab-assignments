#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
        A: int a[50],n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int c=0,z=0;
        for(int i=0;i<n;i++)
        {
            if(k==a[i])
            {
                c++;
                z++;
                break;
            }
            else 
                c++;
        }
        if(z==0)
            cout<<"not present "<<c;
        else
            cout<<"present "<<c;
        n--;
    if(n!=0)
        goto A;
    return 0;
}