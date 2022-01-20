#include<iostream>
#include<algorithm>  

using namespace std;

/*Structure of a node*/
struct bstNode{
	int data;
	bstNode* left,*right;
};
bstNode* root;

bstNode* createNode(int x){    // Here we are creating node to insert in tree
	bstNode* temp = new bstNode();
	temp->data = x;
	temp->left = temp->right = NULL;
	return(temp);
}

bstNode* insert(bstNode* head,int x){    // Here we are inserting nodes in the tree
	bstNode* temp = head;
	if(temp == NULL){
		temp = createNode(x);
	}
	else if(x<temp->data){
		temp->left = insert(temp->left,x);
	}
	else{
		temp->right = insert(temp->right,x);
	}
	return temp;
}

//Here we are checking whether a value exists in the tree or not

bool find(bstNode* root,int k){   
	bstNode* temp = root;            
	if(temp->data == k)return true;
	else if(temp == NULL) return false;
	else if(k < temp->data) return(find(temp -> left,k));
	else return(find(temp -> right,k));
}

//This is the sample code to test the program
int main(){
	bstNode* root = NULL;
	root = insert(root,5);
	root = insert(root,8);
	root = insert(root,2);
	root = insert(root,1);
	root = insert(root,50);
	bool k =f ind(root,505);
	cout<<k;
	
}
