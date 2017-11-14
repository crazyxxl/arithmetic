#include<stdio.h>
#include<stdlib.h>
int main(){
	int nums[5] = {1,4,2,5,3};
	shellSort(nums,5);
	for (int i = 0;i < 5;i++){
		printf("%d is %d\n",i, nums[i]);
	}
}

void shellSort(int* nums,int length){
	int h = 1;
	while (h<length/3) h = 3*h+1;
	while (h>=1){
		for(int i =h;i < length; i++){
			for (int j = i ; j - h >=0 ;j-=h){
				if(nums[j]<nums[j-h]){
					int temp = nums[j];
					nums[j] = nums[j-h];
					nums[j-h] = temp;
				}
			}
		}
		h = h/3;
	}
}

