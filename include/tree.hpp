#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"
#include "../src/logging/logging.hpp"

typedef KeyT int;

class Tree
{
private:
    Node*  root_ = nullptr;
    size_t size_ = 0;

    struct Node
    {
        KeyT value = 0;

        Node* parent = nullptr;
        Node* left   = nullptr;
        Node* right  = nullptr;

        size_t subtree_size = 0;

        Node(Node* newparent, KeyT newvalue): parent{newparent}, value{newvalue} {}
    };

public:

    Tree() = default;

    Tree(Node* root): root_{root}, size_{1} {}

// getters
    Node* GetRoot() const
    {
        return root_;
    }
    
    Node* GetSize() const
    {
        return size_;
    }

// setters
    bool SetRoot(Node* root)
    {
        Assert(root == nullptr);
        root_ = root;
    }

public:

    Node* InsertNode(KeyT newvalue)
    {
        Node* curr_node = root_;
        while (curr_node)
        {
            if (newvalue < curr_node->value && curr_node->left)
            {
                curr_node = node->left;
            }
            else if (newvalue > curr_node->value && curr_node->right)
            {
                curr_node = node->right;
            }
            else if (newvalue == curr_node->value)
            {
                log("Node %d already exists\n", newvalue);
                return curr_node;
            }
            else
            {

            }
        }

        log("Making new node %d", newvalue);

        Node* newnode = new Node(curr_node, newvalue);

        if (curr_node->left == nullptr)
        {
            curr_node->left = newnode;
        }
        else if (curr_node->right == nullptr)
        {
            curr_node->right = newnode;
        }
        else
        {
            print_log(FRAMED, "Algorythm error: trying to add a new child to a node with 2 children");
        }
    }
};

#endif // TREE_HPP guard