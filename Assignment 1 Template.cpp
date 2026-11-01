#include <iostream>
#include <string>
#include <cstddef>   // For NULL
using namespace std;

class Node {
private:
    string cloth;
    Node* next;

public:
    Node() : cloth(""), next(NULL) {}

    void setCloth(string c) { cloth = c; }
    void setNext(Node* ptr) { next = ptr; }

    string getCloth() const { return cloth; }
    Node* getNext() const { return next; }
};

// Stack Class implemented using Linked List
class Stack {
private:
    Node* top;  // Points to the top of the stack

public:
    Stack() { top = NULL; }

    // TODO 1: Implement PushCloth to push a new clothing item onto the top
    void pushCloth(string c) {
       Node* newNode = new Node();
       newNode->setCloth(c);
       newNode->setNext(top);
       top = newNode;
    }

    //TODO 2: Implment popCloth to pop a clothing item from the top
    string popCloth() {
        if (top == NULL) {
        	return "Stack is Empty";
		}
		
		Node* temp = top;
		string removedCloth = temp->getCloth();
		top = top->getNext();
		delete temp;
		
		return removedCloth;
    }

    //TODO 3: Implement Display clothing items from top to bottom
    void displayClothStack() const {
        Node* current = top;
        
        while(current != NULL) {
        	cout <<current->getCloth() << endl;
        	current = current->getNext();
		}
    }

    // Release all remaining nodes
    ~Stack() {
        while (top != NULL) {
            Node* temp = top;
            top = top->getNext();
            delete temp;
        }
    }
};

int main() {
   
   // Todo 4: Replace this sample VUID with your own VUID
    string studentID = "BC250439760"; 
    char lastDigitChar = studentID[studentID.length() - 1];
    int lastDigit = lastDigitChar - '0';

    Stack s;

    cout << "----------------------------------------\n";
    cout << "Clothes Pile Management System - (" << studentID << ")\n";
    cout << "----------------------------------------\n";

    // Step 1: Push six clothing items in the given order
    cout << "Step 1: Six clothes added to the stack:\n";
    s.pushCloth("Jeans");
    s.pushCloth("Shirt");
    s.pushCloth("Trousers");
    s.pushCloth("Socks");
    s.pushCloth("Cap");
    s.pushCloth("Jacket");

    cout << "Stack (top to bottom):\n";
    s.displayClothStack();
    cout << endl;
//  Add clothes according to the last digit of the VUID
    cout <<"VUID last digit is " << lastDigit << ".\n";

    if (lastDigit > 5) {
        s.pushCloth("Sweater");
        s.pushCloth("Pant");
        cout << "Last digit is greater than 5: Sweater and Pant added.\n";
    } else {
        s.pushCloth("Sweater");
        cout << "Last digit is 5 or less: only Sweater added.\n";
    }

   
    // Step 2: Pop exactly three clothing items
    cout << "Step 2: Removing three clothes from the top:\n";
    cout << "Popped: " << s.popCloth() << endl;
    cout << "Popped: " << s.popCloth() << endl;
    cout << "Popped: " << s.popCloth() << endl;
       
    // Step 3: Display the final stack
    cout << "Step 3: Final stack (top to bottom):\n";
    s.displayClothStack();

    return 0;
}




