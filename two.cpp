#include<bits/stdc++.h>
using namespace std;

vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    queue<Node*> Queue; 
    Queue.push(root);


    while(!Queue.empty())
    {
        Node* Current_Node = Queue.front();
        Queue.pop();
       v.push_back(Current_Node->data);

        if(Current_Node->right!=NULL) 
        Queue.push(Current_Node->right);
        if(Current_Node->left!=NULL) 
        Queue.push(Current_Node->left);
    }

    reverse(v.begin(),v.end());
    return v;
}