#include<bits/stdc++.h>
using namespace std;

struct Node   //membuat tipe data struct dengan beberapa tipe daya yg berbeda
{
    int data;
    struct Node *next;    //nama struct Node*next
};

struct Node *addToEmpty(struct Node *last, int data)
{
    // fungsi yg hanya sebagai empty list
    if (last != NULL)
      return last;

    // membuat node
    struct Node *temp =
           (struct Node*)malloc(sizeof(struct Node));

    // memasukkan data
    temp -> data = data;
    last = temp;

    last -> next = last;

    return last;
}

struct Node *addBegin(struct Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);

    struct Node *temp =
            (struct Node *)malloc(sizeof(struct Node));

    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;

    return last;
}

struct Node *addEnd(struct Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);

    struct Node *temp =
        (struct Node *)malloc(sizeof(struct Node));

    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
    last = temp;

    return last;
}

struct Node *addAfter(struct Node *last, int data, int item)
{
    if (last == NULL)
        return NULL;

    struct Node *temp, *p;
    p = last -> next;
    do
    {
        if (p ->data == item)
        {
            temp = (struct Node *)malloc(sizeof(struct Node));
            temp -> data = data;
            temp -> next = p -> next;
            p -> next = temp;

            if (p == last)
                last = temp;
            return last;
        }
        p = p -> next;
    }  while(p != last -> next);

    cout << item << " tidak ada dalam daftar." << endl;
    return last;

}

void traverse(struct Node *last)
{
    struct Node *p;

    if (last == NULL)
    {
        cout << "Daftar kosong." << endl;
        return;
    }

    // Menunjuk ke Node pertama dari daftar.
    p = last -> next;

    // Melintasi daftar.
    do
    {
        cout << p -> data << " ";
        p = p -> next;

    }
    while(p != last->next);

}

// Program Didorong
int main()
{
    struct Node *last = NULL;

    last = addToEmpty(last, 6);
    last = addBegin(last, 4);
    last = addBegin(last, 2);
    last = addEnd(last, 9);
    last = addEnd(last, 10);
    last = addAfter(last, 10, 8);

    traverse(last);

    return 0;
}
