#include <stdio.h>

int main(){
	int n;
	printf ("Nhap vao so nguyen bat ki: ");
	scanf("%d", &n);
	if (n<=0){
		printf("Nhap lai");
		return 1;
	}
	int arr[3][3];
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			printf("%d ", n);
		}
		printf("\n");
	}
	return 0; 
} 
