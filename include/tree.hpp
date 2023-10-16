#ifndef TREE_HPP
#define TREE_HPP

class Tree
{
private:
    Node*  root_ = nullptr;
    size_t size_ = 0;

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
};

#endif // TREE_HPP guard