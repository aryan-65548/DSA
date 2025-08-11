#include<stdio.h>
int main()
{
 int n;
 printf("Enter the total no. of element : ");
 scanf("%d",&n);
 int a[n],b,c,mid,flag=0,item;
 printf("Enter the Number : ");
 for(int i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
 printf("Enter the element you want to search : \n");
 scanf("%d",&item);
 b = 0;
 c = n;
 while(b <= c)
 {
 mid = (b + c) / 2;
 if(a[mid] == item)
 {
 flag = 1;
 break;
 }
 else if(a[mid] < item)
 {
 b = mid + 1;
 }
 else
 {
 c = mid - 1;
 }
 }
 if(flag)
 printf("Item found at position %d\n", mid+1);
 else
 printf("Item not found.\n");
 return 0;
}