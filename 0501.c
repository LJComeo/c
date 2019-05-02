#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr;
	int sz = sizeof(arr) ;
	for (int i = 0; i < sz; ++i){
		printf("%d ", *(p + i));
	}
	system("pause");
	return 0;
}
