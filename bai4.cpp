#include <stdio.h>

int main(){
	int arr[3][3]={{2,1,3},{21,57,68},{31,645,62}};
	int max=arr[0][0];
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if (max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("Max: %d", max);
	return 0; 
} 
