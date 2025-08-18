#include<stdio.h>
int main()
{
    int i,n;
    float P=0,N=0,Z=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            P+=1;
        }
        else if(arr[i]<0){
            N+=1;
        }
        else{
            Z+=1;
        }
    }
    printf("%f\n",P/n);
    printf("%f\n",N/n);
    printf("%f\n",Z/n);
}