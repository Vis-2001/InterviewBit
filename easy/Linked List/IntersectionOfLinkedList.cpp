#include <stdio.h>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};
ListNode *res(ListNode *A, ListNode *B)
{
    ListNode *l1 = A;
    ListNode *l2 = B;

    while (l1 != l2)
    {

        if (l1 == NULL)
        {
            l1 = B;
        }
        else
        {
            l1 = l1->next;
        }
        if (l2 == NULL)
        {
            l2 = A;
        }
        else
        {
            l2 = l2->next;
        }
    }
    return l1;
}
int main()
{
    int n;
    cin >> n;
    ListNode *head = NULL;
    ListNode *temp;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (head = NULL)
        {
            head = new ListNode(t);
            temp = head;
        }
        else
        {
            temp->next = new ListNode(t);
            temp = temp->next;
        }
    }
    int m;
    cin >> m;
    ListNode *head1 = NULL;
    // ListNode* temp;
    // int t;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        if (head1 = NULL)
        {
            head1 = new ListNode(t);
            temp = head1;
        }
        else
        {
            temp->next = new ListNode(t);
            temp = temp->next;
        }
    }
    ListNode *out = res(head, head1);
    temp = out;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}