#include<iostream>
#include<queue>
using namespace std;

struct minHeap{
    char data;
    unsigned frequency;
    minHeap* left;
    minHeap* right;
    minHeap(char item, unsigned count){
        this->data=item;
        this->frequency=count;
        left=right=NULL;
    }
};

struct compare{
    bool operator()(minHeap* mh1, minHeap *mh2){
        return (mh1->frequency>mh2->frequency);
    }
    
};

void deCode(struct minHeap* root, string s)
{
    if (!root)
        return;
 
    if (root->data != '$')
        cout << root->data << ": " << s << "\n";
 
    deCode(root->left, s + "0");
    deCode(root->right, s + "1");
}

void HuffManCodes(char arr[],int frequency[], int n){
    struct minHeap *left, *right, *top;
    priority_queue<minHeap*,vector<minHeap*>,compare> minH;
    for(int i=0;i<n;i++){
        minH.push(new minHeap(arr[i],frequency[i]));
    }
    while (minH.size() != 1) {
        left = minH.top();
        minH.pop();
 
        right = minH.top();
        minH.pop();

        top = new minHeap('$', left->frequency + right->frequency);
 
        top->left = left;
        top->right = right;
 
        minH.push(top);
    }
    deCode(minH.top(), "");
}

