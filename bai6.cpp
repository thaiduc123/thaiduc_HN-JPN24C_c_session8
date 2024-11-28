#include <stdio.h>

int main(){
	int arr[3][3]={{10, 1, 53,},{54,50, 24,},{11, 4, 3,}};
    int sum=0;
    for (int i=0; i<3; i++){
    	printf("%d ", arr[i][i]); 
        sum+=arr[i][i]; 
    }
    printf("Tong cac phan tu tren duong cheo la: %d\n", sum);
	return 0; 
} 
