#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
// Height of Tree
int height(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }

    int l = height(root->left);
    int r = height(root->right);

     int diameter = max(diameter, l + r);

    return 1+max(l,r);
}






// Insert in BST
Node* insert(Node* root, int key) {
    if (root == NULL)
        return new Node(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}



int main() {
    Node* root = NULL;
    

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    int diameter =0;


    return 0;
}
