#include <stdio.h>

int main()
{
    int a[100], n,b[100];
    int p;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&p);
    for(int i = 0; i < n-1; i++)
        for(int j = 0;j<n-i-1; j++)
            if(a[j]<a[j+1])
            {
                int t = 0;
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
    b[0] = a[0];
    for(int i = 1, j = 1;i<n;i++)
    {
        if(a[i] == a[i-1]) continue;
        else {b[j] = a[i];j++;}
    }
    for(int i = 0;i < n;i++)
    {
        if(p == b[i]) printf("%d",i+1);
    }
    return 0;
}