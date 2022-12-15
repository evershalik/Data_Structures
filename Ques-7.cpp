/*
QUESTION-7:
           Perform Stack operations using Array implementation. Use Templates.
SOLUTION:
*/
#include<iostream>


using namespace std;

template <class X_Type> class LinkedList_using_Array
{
    
    X_Type arr[100];
    int n , top;
    
    
    public:
        
    LinkedList_using_Array()
    {
        top = -1;
    }
    
    void choice();
    void push(int n);
    void pop(int n);
    bool isFull(int n);
    bool isEmpty(int n);
    void Display(int n);
    void peek(int n);
};



template <class X_Type> void LinkedList_using_Array<X_Type> :: push(int n)
{
    
    X_Type val;
    
    cout<<"Enter the element to be inserted in stack : ";
    cin>>val;
    
     if(top>=n-1)
     cout<<"Stack Overflow......"<<endl;
     
     
        else
    {
      top++;
      arr[top]=val;
   }
    
    
    
}


template <class X_Type> void LinkedList_using_Array<X_Type> :: pop(int n)
{
    
    
    if(top<=-1)
   cout<<"Stack Underflow........."<<endl;
   
   
   else
    {
      cout<<"The popped element is : "<<arr[top] <<endl<<endl;
      top--;
   }

    
}


template <class X_Type> bool LinkedList_using_Array<X_Type> :: isFull(int n)
{
    
    
    if(top == n-1)
    return true;
    
    else
    return false;
    
    
        
}


template <class X_Type> bool LinkedList_using_Array<X_Type> :: isEmpty(int n)
{

    
    if(top == -1)
    return true;
    
    else
    return false;
    
    
        
}


template <class X_Type> void LinkedList_using_Array<X_Type> :: peek(int n)
{

    
    if(top == -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    
    else
    cout<<"Top Element in stack is : "<<arr[top];
    
        
}


template <class X_Type> void LinkedList_using_Array<X_Type> :: Display(int n)
{

    
    
      if(top>=0)
       {
           
          cout<<"Stack elements are : ";
          for(int i=top; i>=0; i--)
          cout<<arr[i]<<" ";
          cout<<endl;
          }
          
        else
           cout<<"Stack is empty";
    
    
    
        
}

template <class X_Type> void LinkedList_using_Array<X_Type> :: choice()
{
    

    cout<<"Enter the size of stack : ";
    cin>>n;
    LinkedList_using_Array<int> D1;
    LinkedList_using_Array<char> D2;
    LinkedList_using_Array<float> D3;
    
    int c, ch;
    char p;
    
    
    start:
    cout<<endl<<"Which datatype you want in your Array : "<<endl;
    cout<<"1. Int"<<endl;
    cout<<"2. Char"<<endl;
    cout<<"3. Float"<<endl;
       cout<<"Enter your choice : ";
    cin>>c;
    
    if(c != 1 && c != 2 && c !=3 )
    {
        cout<<"\n Wrong Choice !!! \n";
        goto start;
    }
    
    first:
    cout<<" Press 1 for insert a new element in stack : "<<endl;
       
       cout<<" Press 2 for deleting an element from stack : "<<endl;
       
       cout<<" Press 3 for check if stack is full or not  : "<<endl;
       
       cout<<" Press 4 for check if stack is empty or not : "<<endl;
       
       cout<<" Press 5 for displaying top element : "<<endl;
       

        
    if(c == 1)
    {
        
        begint :
    cout<<endl<<"Enter your choice from above menu : ";
    cin>>ch;
    
    if(ch<0 || ch>12)
    {
        cout<<"\n Wrong Choice \n";
        goto first;
    }
        do
        {
            switch(ch)
            {
                case 1:
                {
                        
                    D1.push(n);
                    D1.Display(n);
                    break;
                        
                }
                
                
                
                case 2:
                {
                    
                    D1.pop(n);
                    D1.Display(n);
                    break;
                    
                    
                }
                
                case 3:
                {
                    if(D1.isFull(n)==true)
                    cout<<"Stack is Full....."<<endl;
                    
                    else
                    {
                        cout<<"Stack is not full ---"<<endl;
                        D1.Display(n);
                    }
                    
                    
                    break;
                    
                }
                
                
                
                case 4:
                {    
                    
                    if(D1.isEmpty(n)==true)
                    cout<<"Stack is Empty....."<<endl;
                    
                    else
                    {
                        cout<<"Stack is not Empty ---"<<endl;
                        D1.Display(n);
                    }
                    
                    break;
                }
                
                case 5:
                {
                    D1.peek(n);
                
                    break;
                   
                }
                default:
                {
                    cout<<"Wrong choice "<<endl;
                }

            
            
        }
            cout<<endl<<endl<<"Do you want to continue with the same operation ? (1/0)  :  ";
            cin>>p;
            
        }
        
        while(p == '1');
        
        goto begint;
    }
    
    
    
        else if(c == 2)
    {
        begchar :
        cout<<endl<<"Enter your choice from above menu : ";
        cin>>ch;
        do
        {
            switch(ch)
            {
                case 1:
                    {
                        D2.push(n);
                        D2.Display(n);
                        break;
                        
                }
                
                
                
                case 2:
                {
                    
                    D2.pop(n);
                    D2.Display(n);
                    break;
                    
                    
                }
                
                case 3:
                {
                    if(D2.isFull(n)==true)
                    cout<<"Stack is Full....."<<endl;
                    
                    else
                    {
                        cout<<"Stack is not full ---"<<endl;
                        D2.Display(n);
                    }
                    
                    break;
                }
                
                
                
                case 4:
                {    
                    
                    if(D2.isEmpty(n)==true)
                    cout<<"Stack is Empty....."<<endl;
                    
                    
                    else
                    {
                        cout<<"Stack is not Empty ---"<<endl;
                        D2.Display(n);
                    }
                    break;
                }
                
                case 5:
                {
                    D2.peek(n);
                
                    break;
                   
                }
                
                    default:
                {
                    cout<<"Wrong choice "<<endl;
                }
                
            }
            
            cout<<endl<<endl<<"Do you want to continue with the same operation ? (1/0)   :  ";
            cin>>p;
        }
        
        while(p == '1');
        
        goto begchar;
    }
    
    else if(c == 3)
    {
        
        
        begfloat :
        cout<<endl<<"Enter your choice from above menu : ";
        cin>>ch;
        
        do
        {
            switch(ch)
            {
                case 1:
                {
                    D3.push(n);
                    D3.Display(n);
                    break;
                        
                }
                
                
                
                case 2:
                {
                    
                    D3.pop(n);
                    D3.Display(n);
                    break;
                    
                    
                }
                
                case 3:
                {
                    if(D3.isFull(n)==true)
                    cout<<"Stack is Full....."<<endl;
                    
                    else
                    {
                        cout<<"Stack is not full ---"<<endl;
                        D3.Display(n);
                    }
                    
                    break;
                }
                
                
                
                case 4:
                {    
                    
                    if(D3.isEmpty(n)==true)
                    cout<<"Stack is Empty....."<<endl;
                    
                    
                    else
                    {
                        cout<<"Stack is not Empty ---"<<endl;
                        D3.Display(n);
                    }
                    
                    break;
                    
                }
                
                case 5:
                {
                    D3.peek(n);
                
                    break;
                   
                }


                    default:
                {
                    cout<<"Wrong choice "<<endl;
                }
                
            }
            
            cout<<endl<<endl<<"Do you want to continue with the same operation ? (1/0)   :  ";
            cin>>p;
            
        }
        while(p == '1');
        
        goto begfloat;
    }
}


int main()

{
    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 7~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
   LinkedList_using_Array<int> obj;
   
    obj.choice();
    
   return 0;
   
}