#include <iostream>
#include <vector>

using namespace std;

typedef struct Node{
    int ID;
    vector<Node*> CHILD;
}Node;

Node* arr[50];

void preorder(Node* node) {
    cout << node->ID << " ";
    for(int i = 0; i < node->CHILD.size(); i++) {
        preorder(node->CHILD[i]);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        Node* temp = new Node();
        temp->ID = i;
        arr[i] = temp;
    }
    
    for(int i = 0; i < n; i++) {
        int st, en;
        cin >> st >> en;
        arr[st]->CHILD.push_back(arr[en]);
    }
    
    preorder(arr[0]);
    cout << endl;
}
