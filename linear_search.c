#include <stdio.h>
int main()
{
 int n,a,i, count=0;
 printf("enter number of elements:\n");
 scanf("%d",&n);
 int arr[n];
 printf("enter the elements of array:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("enter the number to be searched:\n");
 scanf("%d",&a);
 for(i=0;i<n;i++)
 {
 if(arr[i]==a)
 {
 printf("%d is present at location %d.\n",a, i+1);
 count++;
 }
 }
 if(count==0)
 {
 printf("%d is not present in the array.\n",a);
 }
 else
 {
 printf("%d is present %d times in the array.",a, count);
 }
 return 0;
}