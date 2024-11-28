#include <stdio.h>

int main(){
	int arr[] = {5, 12, 568, 423, 41}; 
    int size = sizeof(arr)/sizeof(arr[0]);
	int n, count;
	printf("Nhap gia tri bat ki: ");
	scanf("%d", &n);
	for (int i=0; i<size-1; i++){
        if (n==arr[i]){
        	n=i;
        	count+=1;
		} else {
			count+=0;
		}
    } 
    if (count>0){
    	printf("Vi tri phan tu trong mang la: a[%d]", n);
	} else {
		printf("Khong ton tai");
	}
	return 0; 
} 
