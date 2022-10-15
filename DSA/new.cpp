#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} * first, *second, *third;

void create(int A[], int n)
{
    Node *t, *last;
    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void create2(int A[], int n)
{
    Node *t, *last;
    second = new Node();
    second->data = A[0];
    second->next = NULL;
    last = second;
    for (int i = 1; i < n; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void Rdisplay(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        Rdisplay(p->next);
    }
}
int count(Node *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
    return c;
}

int Rcount(Node *p)
{
    if (p)
        return 1 + Rcount(p->next);
    else
        return 0;
}
int sum(Node *p)
{
    int c = 0;
    while (p)
    {
        c += p->data;
        p = p->next;
    }
    return c;
}
int Rsum(Node *p)
{
    if (p)
    {
        return Rsum(p->next) + p->data;
    }
    else
        return 0;
}
int Lmax(Node *p)
{
    int mx = INT_MIN;
    while (p)
    {
        mx = max(mx, p->data);
        p = p->next;
    }
    return mx;
}
int Rmax(Node *p)
{
    int x = 0;
    if (p == NULL)
        return INT_MIN;
    else
    {
        x = Rmax(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}
Node *LSearch(Node *p, int k)
{
    while (p)
    {
        if ((p->data) == k)
            return p;
        p = p->next;
    }
    return NULL;
}

Node *ISearch(Node *p, int k)
{
    Node *q = new Node();
    while (p)
    {
        if (p->data == k)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
void insert(int k, int p)
{
    if (p < 0 || p > count(first))
    {
        return;
    }
    Node *t = new Node();
    if (p == 0)
    {
        t->data = k;
        t->next = first;
        first = t;
    }
    else
    {
        Node *q = new Node();
        q = first;
        for (int i = 0; i < p - 1 && q; i++)
        {
            q = q->next;
        }
        if (q)
        {
            t->data = k;
            t->next = q->next;
            q->next = t;
        }
    }
}
void insertLast(int k)
{
    Node *t = new Node();
    Node *last = new Node();
    last = first;
    t->data = k;
    t->next = NULL;
    if (last == NULL)
    {
        first = last = t;
    }
    else
    {
        while (last->next)
        {
            last = last->next;
        }
        last->next = t;
        last = t;
    }
}
void insertSort(Node *p, int k)
{
    Node *t = new Node();
    Node *q = new Node();
    t->data = k;
    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p && p->data < k)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
void Delete(Node *p, int pos)
{
    if (first == NULL)
    {
        cout << "No node exists" << endl;
    }
    else
    {
        Node *q = new Node();
        q = NULL;
        if (pos == 1)
        {
            q = first;
            first = first->next;
            int x = q->data;
            delete q;
        }
        else
        {
            for (int i = 0; i < pos - 1 && p; i++)
            {
                q = p;
                p = p->next;
            }
            if (p)
            {
                q->next = p->next;
                delete p;
            }
        }
    }
}
bool isSorted(Node *p)
{
    int x = INT_MIN;
    while (p)
    {
        if (p->data < x)
        {
            return false;
        }
        x = max(x, p->data);
        p = p->next;
    }
    return true;
}
void removeDup(Node *p)
{
    Node *q = new Node();
    while (p)
    {
        if (q->data != p->data)
        {
            q = p;
            p = p->next;
        }
        else
        {
            q->next = p->next;
            delete p;
            p = q->next;
        }
    }
}
void reverseList(Node *p)
{
    Node *q = new Node();
    Node *r = new Node();
    q = r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
void Rreverse(Node *q, Node *p)
{
    if (p)
    {
        Rreverse(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}
void concate(Node *p, Node *q)
{
    third = p;
    while (p->next)
    {
        p = p->next;
    }
    p->next = q;
}
void merge(Node *p, Node *q)
{
    Node *last = new Node();
    if (p->data < q->data)
    {
        last = third = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        last = third = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    if (q)
        last->next = q;
}
int isLoop(struct Node *f)
{
    Node *p;
    Node *q;
    p = q = first;

    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);

    if (p == q)
        return 1;
    else
        return 0;
}
int main()
{
    int A[] = {1,1};
    create(A, sizeof(A) / sizeof(A[0]));
    cout<<isLoop(first);
    return 0;
}