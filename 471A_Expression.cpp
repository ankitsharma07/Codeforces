#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    int r1 = a + b * c;
    int r2 = a * (b+c);
    int r3 = a * b * c;
    int r4 = (a+b) * c;
    int r5 = a + b + c;

    int max;

    if (r1 > r2)
    {
        max = r1;
    }
    else
    {
        max = r2;
    }
    if (r3 > r4)
    {
        if (r3 > max)
        {
            max = r3;
        }
    }
    else
    {
        if (r4 > max)
        {
            max = r4;
        }
    }
    if (r4 > r5)
    {
        if (r4 > max)
        {
            max = r4;
        }
    }
    else
    {
        if (r5 > max)
        {
            max = r5;
        }
    }

    cout << max << endl;

    return 0;
}

/*
#include<stdio.h>
int main()
{
    int a,b,c,i,max=0,ar[100];
    scanf("%d %d %d",&a,&b,&c);
    ar[0]=a+b*c;
    ar[1]=a*(b+c);
    ar[2]=a*b*c;
    ar[3]=(a+b)*c;
    ar[4]=a+b+c;
    ar[5]=a*b+c;
    for(i=0;i<6;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    printf("%d\n",max);
    return 0;
    
}
*/