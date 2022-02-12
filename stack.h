#ifndef STACK_H
#define STACK_H

//A templatized implementation of a Stack
template <typename T>
class Stack{
    private:
        class Node{
            public:
                Node* next;
                T value;
                Node(Node* n, T v) : value(v), next(n){};
                ~Node(){}
        };
        Node* front;
        int my_size;
    public:
        Stack<T>();
        ~Stack<T>();
        void push(T value); //push value onto top of stack
        bool pop(); //pop value from top of stack
        bool empty(); //returns if the stack is empty or not
        int size(); //returns size of stack
        bool top(T& value); // returns value on top of stack pass by reference

};


//Stack Constructor
template <typename T>
Stack<T>::Stack()
    :front(NULL), my_size(0){}

//Stack Destructor
template <typename T>
Stack<T>::~Stack(){
    for(int i = 0; i < my_size;){
        this->pop();
    }
}

//Pushes value to top of stack
template <typename T>
void Stack<T>::push(T value){
    front = new Node(front, value);
    my_size++;
}

//Removes value from top of stack
template <typename T>
bool Stack<T>::pop(){
    if(this->empty())
        return false;
    Node* temp = front;
    front = front->next;
    delete temp;
    my_size--;
    return true;
}

//checks if stack is empty
template <typename T>
bool Stack<T>::empty(){
    return (front == NULL) ? 1:0;
}

//returns current size of stack
template <typename T>
int Stack<T>::size(){
    return my_size;
}

//returns value on top of stack
template <typename T>
bool Stack<T>::top(T& value){
    if(empty())
        return false;  
    value=front->value;
    return true;

}

#endif