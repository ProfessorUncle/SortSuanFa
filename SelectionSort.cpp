#include <stdio.h>

//�ҵ���С���������ǹؽ�
//�������Ϊ��������򲿷֣��տ�ʼ������Ĭ������0λ��Ϊ���򲿷���i=0��minIndex=i���Ƚ�length-1�Σ����򲿷�Ϊ1~len-1;��j=i+1 
//�����򲿷��У��������δ����򲿷ֵ�ÿ������arr[minIndex]�Ƚϣ�ͨ���Ƚ�minIndex�ᷢ���仯)����С�������������浽minIndex�������ڲ�ѭ����ÿ�ζ����ҵ����򲿷�����Сֵ�������� 
//Ȼ�����򲿷ֵ���ĩβ������arr[i])��arr[minIndex]�໥ת��ֵ ,����,i++,minIndex = i�����򲿷־�Ϊi+1~len,�������򲿷���С�������� 

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
