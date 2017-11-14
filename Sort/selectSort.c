#include<stdio.h>
#include<stdlib.h>
int main(){
	int nums[5] = {2,1,3,52,5};
	selectSort(nums,5);
	for (int i = 0; i< 5; i++){
		printf("%d is %d\n",i,nums[i]);
	}
}

void selectSort(int* nums,int length){
  for(int i=1;i<length;i++){
	  for(int j = i;j>=1;j--){
			if(nums[j]<nums[j-1]){
				int temp = nums[j];
				nums[j]= nums[j-1];
				nums[j-1] = temp;
			}
	  }
	}
}
