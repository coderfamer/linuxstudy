#pragma once

#include <string>

using namespace std;


class TreeNode
{
public:
    TreeNode() : m_value(string()), m_count(new int(1)), left(nullptr), right(nullptr)
    {  }
    TreeNode(const TreeNode &rhs) : m_value(rhs.m_value), m_count(rhs.m_count), left(rhs.left), right(rhs.right)
    { ++*m_count; }
    TreeNode &operator=(const TreeNode &rhs);
    ~TreeNode()
    {
        if (--*m_count == 0)
        {
            delete left;
            delete right;
            delete m_count;
        }
    }
private:
    string m_value;
    int *m_count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree
{
public:
    BinStrTree() : root(new TreeNode())
    {  }
    BinStrTree(const BinStrTree &bst) : root(new TreeNode(*bst.root))
    {  }
    BinStrTree &operator=(const BinStrTree &bst);
    ~BinStrTree() { delete root; }

private:
    TreeNode *root;
};

TreeNode &TreeNode::operator=(const TreeNode &rhs)
{
    ++*rhs.m_count;
    if (--*m_count == 0)
    {
        delete left;
        delete right;
        delete m_count;
    }
    m_value = rhs.m_value;
    left = rhs.left;
    right = rhs.right;
    m_count = rhs.m_count;
    return *this;
}


BinStrTree &BinStrTree::operator=(const BinStrTree &bst)
{
    TreeNode *new_root = new TreeNode(*bst.root);
    delete root;
    root = new_root;
    return *this;
}
