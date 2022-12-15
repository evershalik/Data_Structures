/*
QUESTION-6:
            Perform Stack operations using Linked List implementation.
SOLUTION:
*/
#include <iostream>
using namespace std;

template <typename T>
class Node
{
    public:
        T info;
        Node<T>* next;

        Node()
        {
            next=0;
        }
        
        Node(T el, Node<T>* ptr=0)
        {
            info=el;
            next=ptr;
        }
};

template <typename T>        
class Stack
{
    public:
        Node<T> *head,*tail;
        Stack()
        {
            head=tail=0;
        }
        
        int count=0;
        
        void push(T);
        T pop();
        int size();
        void empty();
        void display();
        void operation();
    
        
};

template <typename T> void Stack<T>::push(T n)
{
    head= new Node<T>(n,head);
    if(tail==0)
        tail=head;
    count++;
}

template <typename T> T Stack<T>::pop()
{
    count--;
    if(head==0)
        cout<<"List is Empty..!!"<<endl;
    else
    {
        Node<T> *tmp= head;
        if(head==tail)
            head=tail=0;
        else
            head=head->next;
        
        return tmp->info;
        delete tmp;
    }
}

template <typename T> int Stack<T>::size()
{
    return count;
}

template <typename T> void Stack<T>::empty()
{
    if(count<=0)
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
        
}

template <typename T> void Stack<T>::display()
{
    Node<T> *tmp;
    tmp=head; 
    do
    {    
        cout<<tmp->info<<" ";
        tmp=tmp->next;
        cout<<endl;
    }
    while(tmp!=0);
    
}

template <typename T> void Stack<T>::operation()
{
    int choice;
    char ch;
    
    do
    {
        cout<<"1) Push\n2) Pop\n3) Size\n4) Empty\n5) Display\n";
        cout<<"Enter operation you want perform: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            {
                T el;
                cout<<"Enter element to push: ";
                cin>>el;
                push(el);
                break;
            }
            case 2:
            {
                cout<<pop()<<endl;
                break;
            }
            case 3:
            {
                cout<<size()<<endl;
                break;
            }
            case 4:
            {
                empty();
                break;
            }
            case 5:
            {
                display();
                break;
            }
            default:
                cout<<"Invalid input"<<endl;
        }
        cout<<"Want to perform more operations?(Y/N): ";
        cin>>ch;
    }
    while(ch=='y'||ch=='Y');
}

int main()
{
    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 6~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
    int choice;
    char ch;
    do
    {
        cout<<"Select one of the following datatype to proceed:\n1) Integer\n2) Character\n3) Float\n4) String\n";
        cout<<"Input: ";
        cin>>choice;
        cout<<endl;
        
        switch(choice)
        {
            case 1:
            {
                Stack<int> obj;
                obj.operation();
                break;
            }
            case 2:
            {
                Stack<char> obj;
                obj.operation();
                break;
            }
            case 3:
            {
                Stack<float> obj;
                obj.operation();
                break;
            }
            case 4:
            {
                Stack<string> obj;
                obj.operation();
                break;
            }
            default:
                cout<<"Invalid input"<<endl;
        }
    cout<<"Want to perform more operations with new array(Y/N): ";
    cin>>ch;
    }
    while(ch=='y'||ch=='Y');
return 0;
}