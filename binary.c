#include<stdio.h>
#include<conio.h>
void merge(int a[],int low,int mid,int high)
{
    int i,j,k,b[20];
    i=low,j=mid+1,k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<=a[i])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=high)
        b[k++]=a[j++];
    for(k=low;k<=high;k++)
        a[k]=b[k];
}

void main()
{
int n,a[2000],k,l;
clock_t st ,et;
double ts;
printf("\n enter how many numbers:");
scanf("%d",&n);
printf("\n the random numbers are:\n");
for(k=1;k<n;k++)
{

    a[k]=rand();
    printf("%d\t",&a[k]);
}
st=clock();
mergesort(a,l,n);
et=clock();
ts=(double)(et-st)/CLOCKS_PER_SEC;
printf("\n sorted numbers are:\n");
for(k=1;k<=n;k++)
    printf("%d\n",&a[k]);
printf("\n the time taken is %e",ts);
getch();
}







