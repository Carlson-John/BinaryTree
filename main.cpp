#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include "Node.h"
using namespace std;

int main()
{
   btree userTree;
   int a,b,c,x,y;
   char input='Y';'N';

                                                                ///Allows users to enter their own input instead of it being pre-set values



cout<<"Enter values you want to see in your tree \n "<<endl;
cout<<"Must be numbers or program will not run properly\n "<<endl;
cin>>a>>b>>c>>x;


cout<<"Want to enter another number? Enter 'Y' or 'N' "<<endl;
cin>>input;





switch(input){

    case 'Y':


    if(input == 'Y')
    {
    cout<<"Enter values you want to see in your tree "<<endl;
    cin >>y;
    userTree.insert(a);
    userTree.insert(b);
    userTree.insert(c);
    userTree.insert(x);
    userTree.insert(y);
    cout<<" "<<endl;
	userTree.preorder_print();
	userTree.inorder_print();
	userTree.postorder_print();
    }
    break;
    case 'N':

        if (input=='N')
        {
    userTree.insert(a);
    userTree.insert(b);
    userTree.insert(c);
    userTree.insert(x);
	userTree.preorder_print();
	userTree.inorder_print();
	userTree.postorder_print();

        }
        cin.get();
        return 0;
    if (input!='Y'||input!='N')
    {
    default:

    cout<<endl;
    cout <<"Error please enter either Y or N (Caps please) "<<endl;
    cout <<"thanks "<<endl;
    cout <<endl;
    }
}



}
