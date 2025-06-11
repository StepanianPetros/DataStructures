#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

int main()
{
    TreeNode* n1 = CreateNode(1);
    TreeNode* n2 = CreateNode(2);
    TreeNode* n3 = CreateNode(3);
    TreeNode* n4 = CreateNode(4);
    TreeNode* n5 = CreateNode(5);

    addChild(n1, n2);    
    addChild(n1, n3);
    addChild(n1, n4);
    addChild(n1, n5);

    addChild(n2, n5);
    return 0;
}