#include<iostream>
using namespace std;

// class Node
// {
//     int data;
//     Node* next;
// public:
//     Node(): data(0), next(nullptr){}

//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }

//     int getData()
//     {
//         return this->data;
//     }

//     void setData(int data)
//     {
//         this->data = data;
//     }

//     Node* getNext()
//     {
//         return this->next;
//     }

//     void setNext(Node* next)
//     {
//         this->next = next;
//     }
//     void reduceDuplicate(Node* root)
//     {
//       Node *ptr1, *ptr2, *dup;
//       ptr1 = next;
  
      
//       while (ptr1 != NULL && ptr1->next != NULL) {
//           ptr2 = ptr1;
  
          
//           while (ptr2->next != NULL) {
              
//               if (ptr1->data == ptr2->next->data) {
                  
//                   dup = ptr2->next;
//                   ptr2->next = ptr2->next->next;
//                   delete (dup);
//               }
//               else 
//                   ptr2 = ptr2->next;
//           }
//           ptr1 = ptr1->next;
//     }
//     }
// };

int* foo(){
    int x;
    x = 1;
    return &x;
}
int main(){
    int* y = foo();
    cout<< *y<<endl;
}

self.visit(ast.stmt1, ctx)
self.emit.printout(self.emit.emitLABEL(frame.getContinueLabel(),frame))
self.emit.printout(self.emit.emitGOTO(label_stmt1, frame))
self.emit.printout(self.emit.emitLABEL(end_label, frame))
self.emit.printout(self.emit.emitLABEL(frame.getBreakLabel(), frame))
frame.exitLoop()

frame.enterLoop()
self.emit.printout(self.emit.emitLABEL(label_stmt2, frame))
self.visit(ast.stmt1, ctx)
self.emit.printout(self.emit.emitLABEL(frame.getContinueLabel(), frame))
self.emit.printout(self.emit.emitGOTO(label_stmt2, frame))
self.emit.printout(self.emit.emitLABEL(end_label, frame))
self.emit.printout(self.emit.emitLABEL(frame.getBreakLabel(), frame))
frame.exitLoop()