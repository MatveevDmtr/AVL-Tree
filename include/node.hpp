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

    Node* GetLeft() const
    {
        return left_;
    }

    Node* GetRight() const
    {
        return right_;
    }
}