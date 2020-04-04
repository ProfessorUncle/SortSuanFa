#include <stdio.h>

//找到最小数的索引是关健
//将数组分为有序和无序部分，刚开始，我们默认数组0位置为有序部分令i=0，minIndex=i，比较length-1次，无序部分为1~len-1;令j=i+1 
//在无序部分中，我们依次从无序部分的每个数和arr[minIndex]比较（通过比较minIndex会发生变化)，较小的数的索引保存到minIndex，这样内层循环，每次都会找到无序部分中最小值的索引。 
//然后有序部分的最末尾数（即arr[i])与arr[minIndex]相互转换值 ,而后,i++,minIndex = i，无序部分就为i+1~len,这样有序部分由小到大排序。 

void SelectionSort(int arr[],int length){
	int minIndex,temp;
	for(int i =0;i<length-1;i++){
		minIndex = i;
		for(int j = i+1;j<length;j++){
			if(arr[j]<arr[minIndex]){
				minIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	for(int i = 0;i<length;i++){
		printf("%d ",arr[i]);
	}
}


int main(){
	int arr[] = {1,2,0,0,5,88,2,3,7,46};
	int length = sizeof(arr)/sizeof(arr[0]); 
	SelectionSort(arr,length);
	
	return 0;
}
