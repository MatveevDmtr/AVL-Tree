#ifndef NODE_HPP
#define NODE_HPP

#include "../src/logging/logging.hpp"

class Node
{
private:
    int value;

    Node* parent_;
    Node* left_;
    Node* right_;

public:
    Node(int val): value_{value} {}

    Node(int value, Node* parent): value_{value}, parent_{parent} {}

// getters
    Node* GetParent() const
    {
        return parent_;
    }
    
    Node* GetLeft() const
    {
        return left_;
    }

    Node* GetRight() const
    {
        return right_;
    }

// setters
    bool SetParent(Node* parent)
    {
        Assert(parent == nullptr);
        parent_ = parent;
    }

    bool SetLeft(Node* left)
    {
        Assert(left == nullptr);
        left_ = left;
    }

    bool SetRight(Node* right)
    {
        Assert(right == nullptr)
        right_ = right;
    }
};

#endif // NODE_HPP guard