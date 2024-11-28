#include <stdio.h>

int main(){
	int arr[3][3]={{10, 1, 53,},{54,50, 24,},{11, 4, 3,}};
    int sum=0;
    for (int i=0; i<3; i++){
        for (int j = 0; j<3; j++) {
            if (i==0 || i==2 || j==0 || j==2) {
                sum += arr[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
	return 0; 
} 
