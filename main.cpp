#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
   btree userTree;
   float x;
   char input='Y';'N';
    int a;
   cout<<"Enter values you want to see in your tree "<<endl;
   cin >>x;

    cout<<"Want to enter another number? Enter 'Y' or 'N' "<<endl;
    cin>>input;
switch(input){

    case 'Y':


    if(input == 'Y')
    {
    cout<<"Enter values you want to see in your tree "<<endl;
    cin >>x;
    userTree.insert(x);
    cout<<" "<<endl;
    userTree.insert(input);
	userTree.preorder_print();
	userTree.inorder_print();
	userTree.postorder_print();
    }
    case 'N':

        if (input=='N')
        {
    userTree.insert(x);
	userTree.preorder_print();
	userTree.inorder_print();
	userTree.postorder_print();
        }
    default:

    cout <<"Error please enter correct input "<<endl;



}



}
