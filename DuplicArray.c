//#include<stdio.h>
//void read(int a[100], int n);
//void duplicate(int a[100], int n);
//main()
//{
//    int a[100],n;
//    printf("Enter n : ");
//    scanf("%d",&n);
//    read(a,n);
//    duplicate(a,n);
//}
//void read(int a[100], int n)
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        printf("Enter array element[%d] : ",i);
//        scanf("%d",&a[i]);
//    }
//}
//void duplicate(int a[100], int n)
//{
//    int i,j,k=0;
//    int newA[100];
//    for(i=0;i<n;i++){
//        int found=0;
//        for(j=0;j<i;j++){
//            if(a[i]==a[j]){
//                found=1;
//                break;
//            }
//        }
//        if(!found){
//            newA[k++]=a[i];
//        }
//    }
//    printf("Array after removing duplicates: ");
//    for(i=0;i<k;i++){
//        printf("%d ",newA[i]);
//    }
//    printf("\n");
//}


#include <stdio.h>

int main()
{
    int a[20], b[20], c[40];
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements for a:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements for b:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        c[i] = a[i];

    for(i = 0; i < n; i++)
        c[i + n] = b[i];

    printf("Elements of array c:\n");
    for(i = 0; i < 2*n; i++)
        printf("%d ", c[i]);

    return 0;
}
