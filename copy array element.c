//program to copy array element to another element.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a1[100],a2[100];
    printf("Enter array element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        a2[i]=a1[i];
    }
    printf("\n The elements stored in the first array are: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a1[i]);
    }
     printf("\n The elements stored in the another array are: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a2[i]);
    }
    return 0;


}
