// 旅行家的预算
#include <stdio.h>
#include <stdbool.h>
int main()
{
    float d1, c, d2, p;
    int n, i, j;
    scanf("%f %f %f %f %d", &d1, &c, &d2, &p, &n);
    float pri[n+2];
    float dis[n+2];
    float nowOil=0.0;
    float maxdis;
    int min;
    bool flag = false,is = false; 
    pri[0] = p;
    dis[0] = 0;
    dis[n+1] = d1;
    pri[n+1] = 0; 
    float fpri = 0;
    for(i = 1; i <= n; i++)
    {
        scanf("%f %f",&dis[i], &pri[i]);
    }
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            if(dis[i] > dis[j])
            {
                float td = pri[i];
                pri[i] = pri[j];
                pri[j] = td;
                p = dis[i];
                dis[i] = dis[j];
                dis[j] = p;
            }
        }
    }
    i = 0;
    j = 0;
    while(1)
    {
        if(i >= n+1)
        {
            is = true;
            break;
        }
        maxdis = dis[i] + c * d2;
        if(maxdis < dis[i+1])
        {
            is = false;
            break;
        }
        flag = false;
        min = i+1; 
        for(j = i+1; j < n+2; j++)
        {
            if(maxdis < dis[j])
            {
                break;
            }
            if(pri[j] <= pri[min] && j < n+1)
            {
                if(pri[j] != pri[min])
                    min = j;
                if(pri[min] <= pri[i])
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag)
        {
            fpri += (dis[min] - dis[i] - nowOil*d2) / d2 * pri[i];
            nowOil += (dis[min] - dis[i]) / d2;
            nowOil -= (dis[min]-dis[i])/d2;
            i = min;
            nowOil -= (dis[min]-dis[i])/d2;
            i = min;
        }
        else
        {
            if(j >= n+2)
            {
                fpri = fpri + (dis[n+1] - dis[i] - nowOil*d2) / d2 * pri[i];
                nowOil += (dis[j] - dis[i]) / d2;
                i = j;
            }
            else
            {
                fpri += (c-nowOil)*pri[i];
                nowOil = c;
                nowOil -= (dis[min]-dis[i])/d2;
                i = min;
            }
        }

    }
    
    if(!is)
    {
        printf("No Solution");
    }
    else
    {
        fpri = ((int)(100*fpri + 0.5))/100.0;
        printf("%.2f", fpri);
    }
    return 0;
}