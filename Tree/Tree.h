#include <stdio.h>
#include <stdlib.h>

// genereic tree
typedef struct TreeNode
{
    int value;

    struct TreeNode* firstChild;
    struct TreeNode* nextSibling;
    
} TreeNode;

void init(TreeNode* t);
TreeNode* CreateNode(int value);
void addChild(TreeNode* parent, TreeNode* child);