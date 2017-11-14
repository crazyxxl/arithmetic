#include<stdio.h>
#include<stdlib.h>
typedef struct BTNode{
	int index;
	int data;
	struct BTNode *Lchild;
	struct BTNode *Rchild;
}Bitnode,*Bittree;
int main(){
	int nums[5]= {1,2,3,4,5};
	Bittree tree;
	createBinarySearchTRee(tree,nums,5);
	int result = searchValue(tree,3);
	printf("result = %d/n",result);
}

int createBinarySearchTRee(Bittree *T, int* nums,int length){
	for (int i =0;i<length;i++){
		Insert(T,nums[i],i);
	}
	return 1;
}

void Insert(Bittree* T, int data,int i){
	Bitnode * pInsert = (Bitnode* ) malloc(sizeof(Bitnode));
	pInsert->index = i;
	pInsert->data = data;
	pInsert->Lchild = NULL;
	pInsert->Rchild = NULL;
	if((*T) ==NULL){
		*T = pInsert;
	}
	if ((*T)->Lchild == NULL && data < (*T)->data){
		(*T)->Lchild = pInsert;
	}
	if ((*T)->Rchild == NULL && data > (*T)->data) {
		(*T)->Rchild = pInsert;
	}	    
	if (data < (*T)->data) {
		Insert(&(*T)->Lchild, data,i);
	}		                 
	if (data > (*T)->data) {
		Insert(&(*T)->Rchild, data,i);
	}
	 return;
}

int searchValue(Bittree T,int target){
	if (T == NULL){
	return -1;
	}else{
		if(target < T->data){
			return searchValue(T->Lchild ,target);
		}else if (target > T->data){
			return searchValue(T->Rchild, target);
		}else{
			return T->index;
		}
		
	}
}


