//make cos series
#include<stdio.h>
#include<conio.h>
#include<math.h>
float series(float,int);
void main()
{
    int n;
    float ans,x;
    printf("enter x:");
    scanf("%f",&x);
    printf("enter n:");
    scanf("%d",&n);
    ans=series(x,n);
    printf("\n ans=%f",ans);
}
float series(float x,int y)
{
    long factorial(int);
    float power(float,int);
    float sum=0;
    int i,s=1,n;
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+(power(x,i)/factorial(i))*s;
        s=s*-1;
    }
    return sum;
}
float power(float x,int y)
{
    float p=1;
    int i;
    for(i=1;i<=y;i++)
        p=p*x;
    return p;
}
long factorial(int p)
{
    long f=1;
    int i;
    for(i=1;i<=p;i++)
        f=f*1;
    return f;
}
