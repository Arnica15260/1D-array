//delete element from array at specified position...
#include<stdio.h>
int main()
{
    int n,a[1000],pos,ele,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        printf("Element-%d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter delete element: ");
    scanf("%d",&ele);
    printf("Enter element position: ");
    scanf("%d",&pos);
    if(pos<0||pos>n)
        printf("Invalid\n");
    else
    {
    for(i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    }
    printf("Array element after delete: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

