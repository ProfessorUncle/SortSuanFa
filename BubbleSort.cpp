#include <stdio.h>

void BubbleSort(int arr[],int length){
	int i,j;
// 数组做形参，会退化成指针，sizeof(arr) = sizeof(*arr) = 4 
//	int length = sizeof(arr)/sizeof(arr[0]);
// 第一个for循环n个数，有n-1个数要进行比较
// 第二个for循环，每一个数一直跟后面一个数比较，大的往后放，每过一轮，少比较一次 
	for(i=0;i<length-1;i++){
		for(j=0;j<length-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = tmp; 
			}
		}
	}
	for (i = 0;i<length;i++){
		printf("%d ",arr[i]);
	}
}


int main(){
	int arr[] = {1,2,0,0,5,88,2,3,7,46};
	int length = sizeof(arr)/sizeof(arr[0]); 
	BubbleSort(arr,length);
	
	return 0;
}
