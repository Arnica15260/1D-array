//program to find the average of n numbers using array
#include<stdio.h>
int main()
{
    int n,sum=0;
    float average;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    average=(float)sum/n;
    printf("Average: %.2f\n",average);
    return 0;
}
