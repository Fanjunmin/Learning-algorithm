#ifndef TREENODE_H
#define TREENODE_H

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

#endif // TREENODE_H
