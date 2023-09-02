//search element in an array
#include<stdio.h>
int main()
{
    int n,a[100],find,flug=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
            printf("Element-%d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(a[i]==find){
            printf("%d element is found at index %d\n",find,i);
            flug=1;
            break;
        }
    }
        if(flug==0)
            printf("Not found\n");
    return 0;


}
