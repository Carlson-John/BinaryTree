#include <iostream>
#include "Node.h"

using namespace std;
btree::btree(){  ///root is equal to NULL;
root = NULL;
}


void btree::delete_tree(Node *leaf){
    if(leaf != NULL){  ///If the leaf is not equal to null
        delete_tree(leaf->left);
        delete_tree(leaf->right);
        delete leaf;
    }
}

void btree::insert(int key, Node *leaf){ ///using the private function from class btree void insert(int key, Tree *leaf)

    if(key < leaf->num){ ///If the key is less than the leaf number
        if(leaf->left != NULL){ ///if the leaf to the left is not equal to NULL
            insert(key, leaf->left); ///then insert the leaf to the left.
        }else
        {
            leaf->left = new Node; ///else the leaf to the left is starts a new tree
            leaf->left->num =key; ///The leaf to the left number is equal to the key
            leaf->left->left = NULL; ///The leaf to the left is equal to NULL
            leaf->left->right = NULL; ///The leaf to the right is equal to NULL
        }
    }
}

void btree::insert(int key){
    if(root != NULL){ ///If the root value is not equal to NULL then
        insert(key,root); ///insert the key and root
    } else{        ///else the root is equal to the new tree
        root = new Node;
        root->num = key;  ///the root number is equal to the key
        root->left = NULL; ///root to the left is equal to null
        root->right = NULL; ///root to the right is equal to null
    }
}
Node *btree::search(int key, Node *leaf){
 if(leaf != NULL){  ///If the leaf is not equal to null
    if(key == leaf->num){ ///and if the key is equal to the leafs number then return the leaf
        return leaf;
    }
    if(key < leaf->num){ ///if the key is less than the leafs number then return back search for the key, leaf to the right.
        return search(key,leaf->left);
    }else{ ///else return the search for the key in the leaf to the right.
    return search(key, leaf->right);
    }
}else { ///else return NULL
 return NULL;
 }
}
Node *btree::search(int key){

return search(key,root);
}
void btree::delete_tree(){
delete_tree(root);
}
void btree::inorder_print(){
    cout <<"In-order print: ";
	inorder_print(root);
	cout << "\n";
}


void btree::inorder_print(Node *leaf){
	if(leaf != NULL){ ///if the leaf is not equal to null then print the leaf to the left
		inorder_print(leaf->left);
		cout << leaf->num << ",";
		inorder_print(leaf->right); ///Prints the leaf to the right
	}
}

void btree::preorder_print(){
    cout<<"pre-order print: ";
	preorder_print(root);
	cout << "\n";
}

void btree::preorder_print(Node *leaf){
	if(leaf != NULL){ ///if the leaf is not equal to NULL
		cout << leaf->num << ","; ///then the leaf points to the number and prints it out
		inorder_print(leaf->left); ///prints the in-order leaf to the left
		inorder_print(leaf->right); ///prints the in-order leaf to the right
	}
}
void btree::postorder_print(){
    cout <<"Post-order print: ";
	postorder_print(root);
	cout << "\n";
}

void btree::postorder_print(Node *leaf){
	if(leaf != NULL){     ///Opposite of preorder_print
		inorder_print(leaf->left);
		inorder_print(leaf->right);
		cout << leaf->num << ",";
	}
}
