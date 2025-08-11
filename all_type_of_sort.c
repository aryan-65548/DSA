#include <stdio.h>
void bubbleSort(int a[], int n) {
 int i, j, temp;
 for(i = 0; i < n - 1; i++) {
 for(j = 0; j < n - i - 1; j++) {
 if(a[j] > a[j+1]) {
 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
 }
 }
 }
 printf("bubble sorted: ");
 for(i = 0; i < n; i++) {
 printf("%d ", a[i]);
 }
 printf("\n");
}
void insertionSort(int a[], int n) {
 int i, j, key;
 for(i = 1; i < n; i++) {
 key = a[i];
 j = i - 1;
 while(j >= 0 && a[j] > key) {
 a[j+1] = a[j];
 j--;
 }
 a[j+1] = key;
 }
 printf("insertion sorted: ");
 for(i = 0; i < n; i++) {
 printf("%d ", a[i]);
 }
 printf("\n");
}
void selectionSort(int a[], int n) {
 int i, j, min, temp;
 for(i = 0; i < n - 1; i++) {
 min = i;
 for(j = i + 1; j < n; j++) {
 if(a[j] < a[min]) {
 min = j;
 }
 }
 temp = a[i];
 a[i] = a[min];
 a[min] = temp;
 }
 printf("Selection srted: ");
 for(i = 0; i < n; i++) {
 printf("%d ", a[i]);
 }
 printf("\n");
}
int main() {
 int a[50], b[50], c[50], n, i;
 printf("Enter size of aray: ");
 scanf("%d", &n);
 printf("enter %d elements:\n", n);
 for(i = 0; i < n; i++) {
 scanf("%d", &a[i]);
 b[i] = a[i];
 c[i] = a[i];
 }
 bubbleSort(a, n);
 insertionSort(b, n);
 selectionSort(c, n);
 return 0;
}