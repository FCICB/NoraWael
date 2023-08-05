 
#include <iostream>
#include "binaryTree.h"
using namespace std;

int main()
{
    binaryTree bst;
    bst.insert(50);
    bst.insert(10);
    bst.insert(22);
    bst.insert(40);
    bst.insert(25);
    bst.insert(66);
    cout << "Display the tree content :\n";
    bst.preOrder(bst.root);
    cout << "\n------------------------------\n";
    bst.inOrder(bst.root);
    cout << "\n------------------------------\n";
    bst.postOrder(bst.root);
    cout << "\n------------------------------\n";
    int key;
    cout << "Enter item to search :\n";
    cin >> key;
    if (bst.search(key))
        cout << " item found \n";
    else
        cout << " Sorry ,item not found \n";
        

    cout << " Find minimum \n";
    node* min = bst.findMin(bst.root);
    if (min == 0)
        cout << " No item exist ";
    else
        cout << " Minimum is " << min->info << "\n";

    cout << " Find Maximum \n";
    node* max = bst.findMax(bst.root);
    if (max == 0)
        cout << " No item exist ";
    else
        cout << " Maximum is " << max->info << "\n";

    cout << "\n Delete item \n";
    node* result = bst.deletee(bst.root,22);
    cout << "\n Preorder after delete 22 \n";
    bst.preOrder(result);
    result = bst.deletee(bst.root,40);
    cout << "\n Preorder after delete 40 \n";
    bst.preOrder(result);

    cin.get();
    return 0;

}

 