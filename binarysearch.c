#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    int a[10];
    printf("size of array: ");
    scanf("%d",&n);
    
    printf("\nenter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("\nArray is:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int num;
    int low=0,high=n-1,mid;
    
    printf("\nenter required number:");
    scanf("%d",&num);

    while(low<=high)
    {
        mid=(low+high)/2;
        if(num<a[mid])
        {
            high=mid-1;
        }
        else if(num>a[mid])
        {
            low=mid+1;
        }
        else if(num==a[mid])
        {
            printf("required element %d is at index %d",num,mid);
            break;
        }
        
    }
    return 0;
}
