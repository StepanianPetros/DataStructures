#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"


void init(TreeNode* t)
{
    t->firstChild = NULL;
    t->nextSibling = NULL;
}

TreeNode* CreateNode(int value)
{
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->value = value;
    node->firstChild = NULL;
    node->nextSibling = NULL;

    return node;
}

void addChild(TreeNode* parent, TreeNode* child)
{
    if (parent->firstChild == NULL)
    {
        parent->firstChild = child;
    }
    else
    {
        TreeNode* ch = parent->firstChild;
        while(ch->nextSibling)
        {
            ch = ch->nextSibling;
        }
        ch->nextSibling = child;
    }
    
}

