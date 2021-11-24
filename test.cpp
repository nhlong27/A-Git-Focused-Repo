#include<iostream>
using namespace std;

class Node
{
    int data;
    Node* next;
public:
    Node(): data(0), next(nullptr){}

    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }

    int getData()
    {
        return this->data;
    }

    void setData(int data)
    {
        this->data = data;
    }

    Node* getNext()
    {
        return this->next;
    }

    void setNext(Node* next)
    {
        this->next = next;
    }
    void reduceDuplicate(Node* root)
    {
      Node *ptr1, *ptr2, *dup;
      ptr1 = next;
  
      
      while (ptr1 != NULL && ptr1->next != NULL) {
          ptr2 = ptr1;
  
          
          while (ptr2->next != NULL) {
              
              if (ptr1->data == ptr2->next->data) {
                  
                  dup = ptr2->next;
                  ptr2->next = ptr2->next->next;
                  delete (dup);
              }
              else 
                  ptr2 = ptr2->next;
          }
          ptr1 = ptr1->next;
    }
    }
};

int main(){
  cout<<1;
  return 0;
}