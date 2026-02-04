//#include <stdio.h>
//
//int main() {
//	int i, n = 5, num;
//	int a[] = { 10, 20 ,30 ,40, 50 };
//
//	printf("Enter the number to add in array: ");
//	scanf_s("%d", &num);
//
//	for (i = n - 1; i >= 0 && a[i] > num; i--) {
//		a[i + 1] = a[i];
//	}
//
//	a[i + 1] = num;
//	n++;
//
//	printf("Array after insertion: \n");
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
