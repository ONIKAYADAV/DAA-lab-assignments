#include<stdio.h>
void duplicate(int arr[],int n)
{
    int i=0;
    int flag=0;
    sort(arr,arr+n);
    while(i<n-1)
    {
        if(arr[i]==arr[i+1])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
    {
        printf("\n Yes");
    }else{
        printf("\n No");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        duplicate(arr,n);
    }
}
