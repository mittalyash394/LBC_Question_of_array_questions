#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int size_of_array, array[10000], index, maximum, minimum;
	printf("Enter the size of array\n");
	scanf("%d", &size_of_array);
	printf("Enter the elements of the array\n");
	for(index=0; index<size_of_array; index++){
		scanf("%d", &array[index]);
	}
	for(index=0; index<size_of_array; index++){
		if(array[0] < array[index]){
			minimum = array[0];
			maximum = array[index];
		}
		if(array[0] > array[index]){
			minimum = array[index];
			maximum = array[0];
		}
	}
	printf("%d\t%d",minimum, maximum);
	return 0;
}
