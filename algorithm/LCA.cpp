// LCA(Lowest Common Ancestor) 공통조상 알고리즘

// 첫째줄에 n과 m : n개의 노드와 m개의 간선
// 두번째줄부터 m+1번째줄까지 간선 정보
// 마지막 줄에는 두개의 노드

// 마지막 두개의 노드들의 공통 조상을 출력


#include <iostream>
#include <vector>

using namespace std;

typedef struct Node{
    int ID;
    vector<Node*> CHILD;
}Node;

Node* arr[50];

void test(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int preorder(Node* node, int find, vector<int>& v) {
    v.push_back(node->ID);
    
    if(node->ID == find) return 1;
    else {
        for(int i = 0; i < node->CHILD.size(); i++) {
            if(preorder(node->CHILD[i], find, v)) return 1;
            else v.pop_back();
        }
    }
    
    return 0;
}

int LCA(int a, int b) {
    vector<int> first;
    vector<int> second;
    
    preorder(arr[1], a, first);
    preorder(arr[1], b, second);
    
    //test(first);
    //test(second);
    
    int res = -1;
    for(int i = 0; i < first.size(); i++) {
        if(first[i] == second[i]) res = first[i];
    }
    
    return res;
}



int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <= n; i++) {
        Node* temp = new Node();
        temp->ID = i;
        arr[i] = temp;
    }
    
    for(int i = 0; i < m; i++) {
        int st, en;
        cin >> st >> en;
        arr[st]->CHILD.push_back(arr[en]);
    }
    
    int a, b;
    cin >> a >> b;
    
    cout << LCA(a, b) << endl;
}
