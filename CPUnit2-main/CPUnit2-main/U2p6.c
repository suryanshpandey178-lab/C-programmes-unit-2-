//#include <stdio.h>
//
//int main() {
//	int min = 0, max = 5;
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int mid, n = 40;
//
//	while (min <= max) {
//		mid = (min + max) / 2;
//
//		if (arr[mid] == n) {
//			printf("Element found at index %d\n", mid);
//			return 0;
//		}
//		else if (arr[mid] < n) {
//			min = mid + 1;
//		}
//		else {
//			max = mid - 1;
//		}
//	}
//	printf("Element not found\n");
//	return 0;	
//}