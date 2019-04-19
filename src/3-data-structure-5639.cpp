#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

struct node {
	int value;
	node* left;
	node* right;
	node(int value) {
		this->value = value;
		left = NULL;
		right = NULL;
	}
};

void post_order(node* current) {
	if (current->left != NULL) {
		post_order(current->left);
	}
	
	if(current->right != NULL){
		post_order(current->right);
	}

	cout << current->value << endl;
}


int main() {
	
	vector<int> v;
	int input;

	while (scanf("%d", &input) != EOF) {
		v.push_back(input);
	}

	node* root = new node(v[0]);

	for (int i = 1; i < v.size(); i++) {
		node* current = root;
		while (true) {
			if (v[i] < current->value) {
				if (current->left != NULL) {
					current = current->left;
				}
				else {
					current->left = new node(v[i]);
					break;
					// 할당
				}
			}
			else if (v[i] > current->value) {
				if (current->right != NULL) {
					current = current->right;
				}
				else {
					current->right = new node(v[i]);
					break;
					// 할당
				}
			}
		}
	}

	post_order(root);

	return 0;
}
