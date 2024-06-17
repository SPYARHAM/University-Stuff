#include<iostream>
#include<string>

using namespace std;
class Stack {
    private:
        int top;
        int arr[5];
    public:
         Stack ()
         {
            top =-1;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
         }
         bool isEmpty()
         {
             if(top == -1)
                return true;
             else
                return false;
         }
         bool isFull()
         {
             if(top == 4)
                 return true;
             else
                 return false;
         }
         void push(int val)
         {
            if(isFull())
            {
                cout<<"\nStack Overflow\n\n";
            }
            else
            {
                top++;
                arr[top]=val;
            }
         }
         int pop()
         {
             if(isEmpty())
             {
                  cout<<"\nStack Underflow\n";
                  return 0;
             }
             else
             {
                 int popValue = arr[top];
                 arr[top] = 0;
                 top--;
                 return popValue;
             }
         }
         int count()
         {
             return(top+1);
         }
         int peek(int pos)
         {
             if(isEmpty())
             {
                 cout<<"Stack underflow"<<endl;
                 return 0;
             }
             else
             {
                 return arr[pos];
             }
         }
         void change(int pos,int val)
         {
             arr[pos] = val;
             cout<<"Value changed at location"<<pos<<endl;
         }
         void display()
         {
             cout<<"All value in the Stack are "<<endl;
             for(int i = 4;i >= 0;i--)
             {
                 cout<<arr[i]<<endl;
             }
         };
};
int main()
{
    Stack s1;
    int option,position,value;
    do
    {
        cout<<"\nWhat operation do you want to perform ?\n";
        cout<<"Select option number\n";
        cout<<"Enter 0 to exit\n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. isEmpty()\n";
        cout<<"4. isFull()\n";
        cout<<"5. peek()\n";
        cout<<"6. count()\n";
        cout<<"7. change()\n";
        cout<<"8. display()\n";
        
        cin>>option;
        switch(option)
        {
            case 1:
                 cout<<"Enter an item to push in the Stack\n";
                 cin>>value;
                 s1.push(value);
            break;
            case 2:
                 cout<<"Pop Function called - Poped Value: \n"<<s1.pop();
            break;
            case 3:
                 if(s1.isEmpty())
                    cout<<"Stack is Empty\n";
                 else
                    cout<<"Stack is not Empty\n";
            break;
            case 4:
                 if(s1.isFull())
                    cout<<"Stack is Full\n";
                 else
                    cout<<"Stack is not Full\n";
            break;
            case 5:
                 cout<<"Enter Position of item you want to peek: \n";
                 cin>>position;
      cout<<"Peek Function Called - Value at position "<<position<<" is \n"<<s1.peek(position);
            case 6:
                 cout<<"Cout Function Called - Number of Items in the Stack are : \n"<<s1.count();
            break;
            case 7:
                 cout<<"Change Function Called -\n";
                 cout<<"Enter Position of item you want to Change : \n";
                 cin>>position;
                 cout<<"Enter the Value Item you want to change : \n";
                 cin>>value;
                 s1.change(position,value);
            break;
            case 8:
                 cout<<"Display Function Called - \n";
                 s1.display();
            break;
           
            default:
                cout<<"Enter Correct Choice Number : \n";
        }

    }while(option !=0);

    return 0;
}