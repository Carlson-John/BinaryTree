#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>
using namespace std;

struct Node {
int num;
Node *left;
Node *right;



};
class btree
{
    public:
    btree(); ///constructor
    void insert(int data);
    Node *search(int data);
    void delete_tree();
    void inorder_print();
    void preorder_print();
    void postorder_print();

    private:
    void insert(int data, Node *leaf);
    Node *search(int data, Node*leaf);
    void delete_tree(Node *leaf);
    void inorder_print(Node *leaf);
    void preorder_print(Node *leaf);
    void postorder_print(Node *leaf);

    Node *root;
};




#endif // NODE_H_INCLUDED
