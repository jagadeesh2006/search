#include<stdio.h>
#include <stdlib.h>

int binarySearch(int a[],int n,int ans)
{
    int mid,first=0,last=n-1;
    while(first<=last){
        
        mid=(first+last)/2;
        
        if(a[mid]==ans){
            return mid;
        }
        
        else if(a[mid]>ans){
            last=mid-1;
        }
        
        else{
             first=mid+1;
        }
        
    }
    return -1;
}


int main()
{
    int a[10000],n,ans,i,pos;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
	printf("Enter the %d element:",i);
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&ans);
    
    pos=binarySearch(a,n,ans);
    
    printf("Your element is in: %dth position",pos);
    

}
