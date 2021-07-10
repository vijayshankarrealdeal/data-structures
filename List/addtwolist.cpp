#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode *addTwoNode(ListNode *l1,ListNode *l2)
{
    ListNode *l3 = nullptr;
    ListNode **node = &l3;
    int sum = 0;
    while (l1 != nullptr || l2 != nullptr || sum>0 )
    {
        if (l1 != nullptr)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != nullptr)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        *node = new ListNode(sum);
        sum = sum / 10;
        node = &(*node)->next;
    }
    return l3;
}

int main()
{
    ListNode *l1 = nullptr;
    ListNode **node1 = &l1;
    for (int i = 0; i < 3; i++)
    {
        *node1 = new ListNode(i);
        node1 = &(*node1)->next;
    }
    ListNode *l2 = nullptr;
    ListNode **node2 = &l2;
    for (int i = 3; i < 16; i++)
    {
        *node2 = new ListNode(i);
        node2 = &(*node2)->next;
    }
    ListNode *l3 = new ListNode;
    l3 = addTwoNode(l1,l2);
    while (l3 != nullptr)
    {
        cout<<l3->val<<"\t";
        l3 = l3->next;
    }
}