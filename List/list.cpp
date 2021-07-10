#include <iostream>

struct node
{
    int data_;
    struct node *next_;
};

class List
{
private:
    struct node *newnode_, *tempnode_;
public:
    struct node *head_ = NULL;
    
    void transverse_()
    {
        ///Print the List
        tempnode_ = head_;
        while (tempnode_ != NULL)
        {
            std::cout << tempnode_->data_ << "\t";
            tempnode_ = tempnode_->next_;
        }
        std::cout << "\n";
    }
    void append_(int element)
    {
        ///Add new data to List
        newnode_ = new node;
        newnode_->data_ = element;
        newnode_->next_ = NULL;
        if (head_ == NULL)
        {
            head_ = tempnode_ = newnode_;
        }
        else
        {
            tempnode_->next_ = newnode_;
            tempnode_ = tempnode_->next_;
        }
    }
    void insertAt(int element_, int key_)
    {
        ///Add Element After the given Element
        try
        {
            if (head_ != NULL)
            {
                newnode_ = new  node;
                newnode_->data_ = key_;
                newnode_->next_ = NULL;
                tempnode_ = head_;
                node *rel = new node;
                while (tempnode_->data_ != element_)
                {
                    rel =tempnode_;
                    tempnode_ = tempnode_->next_;
                }
                rel->next_ = newnode_;
                newnode_->next_ = tempnode_;
            }
            else
            {
                throw "No ELement";
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    int last_()
    {
        ///Return Last Element of The List
        try
        {
            if (head_ != NULL)
            {
                tempnode_ = head_;
                while (tempnode_->next_ != NULL)
                {
                    tempnode_ = tempnode_->next_;
                }
                return tempnode_->data_;
            }
            else
            {
                throw "Error";
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    int first_()
    {
        ///Return the first element of the List
        try
        {
            if (head_ != NULL)
            {
                return head_->data_;
            }
            else
            {
                throw "Add data to List";
            }
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
    }
    void pop_()
    {
        ///Removes last elemet of the List
        tempnode_ = head_;
        node *remove_ = new node;
        while (tempnode_->next_ != NULL)
        {
            remove_ = tempnode_;
            tempnode_ = tempnode_->next_;
        }
        remove_->next_ = NULL;
        delete (tempnode_);
    }
    void reverse()
    {
        tempnode_ = head_;
        node *prev = new node;
        node *next = new node;
        next = nullptr;
        prev = nullptr;
        while (tempnode_ != nullptr)
        {
            next = tempnode_->next_;
            tempnode_->next_ = prev;
            prev = tempnode_;
            tempnode_ = next;
        }
        head_ = prev;
    }
};

int main()
{
    List l;
    for (int i = 2; i < 7; i++)
    {
        l.append_(i);
    }
    l.transverse_();
    std::cout<<"\n";
    l.reverse();
    l.transverse_();

}
