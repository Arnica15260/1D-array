//display array values in reverse order..
#include<stdio.h>
int main()
{
    int n,a[100];
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n The values store into the array are: \n");
    for(int i=0;i<n;i++){
       printf("%d\t",a[i]);
    }
    printf("\n The values store into the array in reverse are: \n");
    for(int i=n-1;i>=0;i--){
     printf("%d\t",a[i]);
    }

  return 0;
}
