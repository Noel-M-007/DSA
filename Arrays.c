#include<stdio.h>
void read(int a[100], int n);
void Largest(int a[100], int n);
int main ()
{
    int a[100],n;
    printf("Enter n : ");
    scanf("%d",&n);
    read(a,n);
    Largest(a,n);
}
void read(int a[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d/n",&a[i]);
    }
    printf(" \n");

}
void Largest(int a[100], int n)
{
    int i,lst=0,Slst=0;
    for(i=0;i<n;i++)
    {
        if(lst<a[i])
            lst=a[i];
    }
     for(i=0;i<n;i++)
    {
        if(lst==a[i])
            a[i]=0;
        else
            continue;
    }
    printf("%d\n",lst);
    for(i=0;i<n;i++)
    {
        if(Slst<a[i])
            Slst=a[i];
    }
    printf("%d",Slst);
}
