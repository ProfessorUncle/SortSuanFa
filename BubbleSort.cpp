#include <stdio.h>

void BubbleSort(int arr[],int length){
	int i,j;
// �������βΣ����˻���ָ�룬sizeof(arr) = sizeof(*arr) = 4 
//	int length = sizeof(arr)/sizeof(arr[0]);
// ��һ��forѭ��n��������n-1����Ҫ���бȽ�
// �ڶ���forѭ����ÿһ����һֱ������һ�����Ƚϣ��������ţ�ÿ��һ�֣��ٱȽ�һ�� 
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
