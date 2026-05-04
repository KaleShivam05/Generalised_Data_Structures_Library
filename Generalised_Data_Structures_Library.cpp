#include<iostream>
using namespace std;

//
// This is generic Queue of type T
//
template <class T>
struct Queuenode 
{
    T data;
    struct Queuenode<T> *next;
};

/////////////////////////////////////////////////////////////
//
//  Class :       Queue
//  Description:  Generic implementation of Queue
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////
template <class T>
class QueueX
{
    private : 
        struct Queuenode<T> *first;   // Pointing at start of linked list
        int iCount;

    public :
        
        QueueX();

        void Enqueue(
                      T
                    );
        T Dequeue();

        void Display();

        int Count();

};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	QueueX
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is constructor of class QueueX
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
QueueX<T> :: QueueX()
{
    this->first = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Enqueue
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data
//	Description:
//		This is function of class QueueX
//      Used to add elements at last
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void QueueX<T> :: Enqueue(
                            T no
                        ) 
{
    struct Queuenode<T> *temp = NULL;
    struct Queuenode<T> *newn = NULL;

    newn = new struct Queuenode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Dequeue
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is function of class QueueX
//      Used to remove elements at first
//
//	Returns					:   Removed Data
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
T QueueX<T> :: Dequeue()
{
    struct Queuenode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to Dequeue \n";
        return NULL;
    }
    else 
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;

        return value;
    }    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is function of class QueueX
//      Used to Display all data present in Queue
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void QueueX<T> :: Display()
{
    struct Queuenode<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is function of class QueueX
//      Used to count nodes present in Queue
//
//	Returns					:   Integer
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int QueueX<T> :: Count()
{
    return iCount;
}

/////////////////////////////////////////////////////////////
//
//  Class :       StackX
//  Description:  Generic implementation of Stack
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////

//
// This is generic Stack of type T
//
template <class T>
struct stacknode 
{
    T data;
    struct stacknode<T> *next;
};

template <class T>
class StackX
{
    private : 
        struct stacknode<T> *first;
        int iCount;

    public :
        
        StackX();

        void push(
                    T
                );

        T pop();

        void Display();

        int Count();

};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	StackX
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is constructor of class StackX
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
StackX<T> :: StackX()
{
    this->first = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	push
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		This is function of class StackX
//      Used to add node in first
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void StackX<T> :: push(T no)
{
    struct stacknode<T> *newn = NULL;

    newn = new struct stacknode<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	pop
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is function of class StackX
//      Used to remove first node
//
//	Returns					:   Integer
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
T StackX<T> :: pop()
{
    struct stacknode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to pop \n";
        return NULL;
    }
    else 
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;

        return value;
    }   
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is function of class StackX
//      Used to Display all data present in StackX
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void StackX<T> :: Display()
{
    struct stacknode<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	StackX
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is function of class StackX
//      Used to count nodes present in StackX
//
//	Returns					:   Integer
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int StackX<T> :: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////
//
//  Class :       Singly_Circular_linkedList
//  Description:  Generic implementation of Singly circular linked list
//  Author :      Shivam Rajendra kale
//
////////////////////////////////////////////////////////////////////////

template <class T>
struct SinglyCLLnode
{
    T data;
    struct SinglyCLLnode<T> *next;
};

template <class T>
class Singly_Circular_linkedList
{
    private :
        struct SinglyCLLnode<T> * first;
        struct SinglyCLLnode<T> * last;
        int iCount;

    public :

        Singly_Circular_linkedList();
        void InsertFirst(T no);
        void InsertLast(T no);
        int Count();
        void Display();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no, int pos);
        void DeleteAtPos(int pos);
        
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Singly_linkedList
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is constructor of class Singly_Circular_linkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
Singly_Circular_linkedList<T>::Singly_Circular_linkedList()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;

    cout<<"Inside constructor of Singly_Circular_linkedList\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		 This function adds node to Singly Circular Linked List.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Circular_linkedList<T>::InsertFirst(
                                                    T no
                                                )
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if((NULL == first) && (NULL == last))  // if(iCount == 0)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        newn->next = first;
        first = newn;

        last->next = first;
    }

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertLast
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		 This function adds node to Singly Circular Linked List.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Circular_linkedList<T>::InsertLast(
                                                    T no
                                                )
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if((NULL == first) && (NULL == last))  // if(iCount == 0)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        last->next = newn;
        last = newn;

        last->next = first;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Count nodes present in Singly Circular Linked List.
//
//	Returns					:   Integer
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int Singly_Circular_linkedList<T>::Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Display all data present in Singly Circular Linked List.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Circular_linkedList<T>::Display()
{

    if((NULL == first) && (NULL == last))
    {
        return;
    }

    struct SinglyCLLnode<T> * temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;

    }while(temp != last->next);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Remove first node from Singly Circular Linked List.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Circular_linkedList<T>::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;

        last->next = first;
    }
    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteLast
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Remove Last node from Singly Circular Linked List.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Circular_linkedList<T>::DeleteLast()
{
    struct SinglyCLLnode<T> * temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete last;
        last = temp;

        last->next = first;
    }

    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Generic , Integer
//	Description:
//		 This function Add node in any position in Singly Circular Linked List.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Circular_linkedList<T>::InsertAtPos(
                                                    T    no , 
                                                    int  pos
                                                )
{
    struct SinglyCLLnode<T> * newn = NULL;
    struct SinglyCLLnode<T> * temp = NULL;
    int i = 0;
    
    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        temp = first;

        newn = new struct SinglyCLLnode<T>;
        newn->data = no;
        newn->next = NULL;

        for(i = 1; i < (pos - 1); i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        
        iCount++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		 This function Remove node in any position in Singly Circular Linked List.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Circular_linkedList<T>::DeleteAtPos(int pos)
{
    struct SinglyCLLnode<T> * target = NULL;
    struct SinglyCLLnode<T> * temp = NULL;
    int i = 0;
    
    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < pos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;

        delete target;

        iCount--;
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Class :       Doubly_Circular_LinkedList
//  Description:  Generic implementation of Doubly Circular Linked List
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////////////////

template <class T>
struct DoublyCLLnode 
{
    T data;
    struct DoublyCLLnode<T> *next;
    struct DoublyCLLnode<T> *prev;   
};

template <class T>
class Doubly_Circular_LinkedList
{
    private :
        struct DoublyCLLnode<T> * first;
        struct DoublyCLLnode<T> * last;
        int iCount;

    public :

        Doubly_Circular_LinkedList();

        void Display();
        int Count();
    
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Doubly_Circular_LinkedList
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This is Constructor of Doubly_Circular_LinkedList class
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
Doubly_Circular_LinkedList<T>:: Doubly_Circular_LinkedList()
{
    cout<<"Inside Constructor\n";
    first = NULL;
    last = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		 This function add node in first position of Doubly_Circular_LinkedList.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Circular_LinkedList<T>:: InsertFirst(
                                                    T  no
                                                )
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new struct DoublyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)     // LL is empty
    {
        first = newn;
        last = newn;
    }
    else                                  // LL contain atleast one node
    {
        newn->next = first;
        first->prev = newn;

        first = newn;
    }

    last->next = first;
    first->prev = last;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertLast
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		 This function add node in Last position of Doubly_Circular_LinkedList.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Circular_LinkedList<T>:: InsertLast(
                                                    T  no
                                                )
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new struct DoublyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)     // LL is empty
    {
        first = newn;
        last = newn;
    }
    else                                  // LL contain atleast one node
    {
        last->next = newn;
        newn->prev = last;
    
        last = newn;

    }

    last->next = first;
    first->prev = last;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Display all data of Doubly_Circular_LinkedList.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Circular_LinkedList<T>:: Display()
{
    cout<<"Elements of the LinkedList are :\n";
    struct DoublyCLLnode<T> * temp = NULL;

    if(first == NULL && last == NULL)
    {
        cout<<"LinkedList is empty\n";
        return;
    }

    temp = first;

    do 
    {
        cout<<"<=> | "<<temp->data<<" | <=> ";
        temp = temp->next;

    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Count all node of Doubly_Circular_LinkedList.
//
//	Returns					:   Integer
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int Doubly_Circular_LinkedList<T>:: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Remove first node of Doubly_Circular_LinkedList.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Circular_LinkedList<T>:: DeleteFirst()
{
    if(first == NULL & last == NULL) // LL IS empty
    {
        return;
    }
    else if(first == last)          // LL Contains one node
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else                            // LL  contains more than 1 node
    {
        first = first->next;
        delete first->prev;  // last->next;

        last->next = first;
        first->prev = last;
    }

    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteLast
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		 This function Remove Last node of Doubly_Circular_LinkedList.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Circular_LinkedList<T>:: DeleteLast()
{
    if(first == NULL & last == NULL) // LL IS empty
    {
        return;
    }
    else if(first == last)          // LL Contains one node
    {
        delete last;
        first = NULL;
        last = NULL;
    }
    else                            // LL contains more than 1 node
    {
        last = last->prev;
        delete last->next;

        last->next = first;
        first->prev = last;
    }

    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   T , Integer
//	Description:
//		 This function add node any position of Doubly_Circular_LinkedList.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Circular_LinkedList<T>:: InsertAtPos(
                                                    T    no , 
                                                    int  pos
                                                )
{
    struct DoublyCLLnode<T> * newn = NULL;
    struct DoublyCLLnode<T> * temp = NULL;
    int i = 0;

    if((pos < 1) || (pos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct DoublyCLLnode<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(i = 1; i < (pos - 1); i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		 This function Remove node any position of Doubly_Circular_LinkedList.
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Circular_LinkedList<T>:: DeleteAtPos(
                                                    int pos
                                                )
{
    struct DoublyCLLnode<T> * temp = NULL;

    int i = 0;

    if((pos < 1) || (pos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < (pos - 1); i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        delete temp->next->prev;

        temp->next->prev = temp;

        iCount--;
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Class :       SinglyLL   
//  Description:  Generic implementation of Singly Linear Linked List
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////////////////

template <class T>
struct node 
{
    T data;
    struct node<T> *next;
};
 
template <class T>
class Singly_Linear_LinkedList 
{
    private :
        struct node<T> *first;
        int iCount;

    public :

        Singly_Linear_LinkedList();

        void Display();
        
        int Count();

        void InsertFirst(
                                T
                        );

        void InsertLast(
                                T
                        );

        void InsertAtPos(
                                T ,
                                int
                        );
        
        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(
                                int
                        );
};   

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Singly_Linear_LinkedList
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:			    :   NONE
//	Description:
//		This is constructor of class Singly_Linear_LinkedList
//
//	Returns			        :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
Singly_Linear_LinkedList<T> :: Singly_Linear_LinkedList()
{
     this->first = NULL;
     this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   InsertFirst
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   Data
//	Description:
//		This function add node in first position of Singly_Linear_LinkedList
//
//	Returns				    :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Linear_LinkedList<T> :: InsertFirst(
                                                        T  no
                                                )
{
        struct node<T> *newn = NULL;

        newn = new node<T>;

        newn->data = no;
        newn->next = NULL;

        newn->next = first;
        first = newn;

        iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   InsertLast
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   Data
//	Description:
//		This function add node in Last position of Singly_Linear_LinkedList
//
//	Returns				    :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Linear_LinkedList<T> :: InsertLast(
                                                        T   no
                                                )
{
        struct node<T> *newn = NULL;
        struct node<T> *temp = NULL;

        newn = new node<T>;

        newn->data = no;
        newn->next = NULL;

        if(first == NULL)
        {
                first = newn;
        }
        else 
        {
                temp = first;

                while(temp->next != NULL)
                {
                        temp = temp->next;
                }
                temp->next = newn;
        }
        iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   Display
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   NONE
//	Description:
//		This function Display all nodes of Singly_Linear_LinkedList
//
//	Returns				    :    NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Linear_LinkedList<T> :: Display()
{
        struct node<T> *temp = NULL;

        temp = first;

        while(temp != NULL)
        {
                cout<<"| "<<temp->data<<" | ->";
                temp = temp->next;
        }
        cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   Count
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   NONE
//	Description:
//		This function Count all nodes of Singly_Linear_LinkedList
//
//	Returns				    :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int Singly_Linear_LinkedList<T> :: Count()
{
        return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   DeleteFirst
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   NONE
//	Description:
//		This function Remove first node of Singly_Linear_LinkedList
//
//	Returns				    :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Linear_LinkedList<T> :: DeleteFirst()
{
        struct node<T> *temp = NULL;

        if(first == NULL)
        {
                return;
        }
        else if(first->next == NULL)
        {
                delete first;
                first = NULL;
        }
        else 
        {
                temp = first;
                first = temp->next;

                delete temp;
        }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   DeleteLast
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   NONE
//	Description:
//		This function Remove Last node of Singly_Linear_LinkedList
//
//	Returns				    :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Linear_LinkedList<T> :: DeleteLast()
{
        struct node<T> *temp = NULL;
        
        if(first == NULL)
        {
                return;
        }
        else if(first->next == NULL)
        {
                delete first;
                first = NULL;
        }
        else 
        {
                temp = first;
                while(temp->next->next != NULL)
                {
                        temp = temp->next;
                }

                delete temp->next;
                temp->next = NULL;
        }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   InsertAtPos
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   Data , Integer
//	Description:
//		This function add node in any position of Singly_Linear_LinkedList
//
//	Returns				    :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Linear_LinkedList<T> :: InsertAtPos(
                                                    T     no , 
                                                    int   pos
                                                )
{
        struct node<T> *temp = NULL;
        struct node<T> *newn = NULL;
        int i = 0;

        if((pos < 1) || (pos > iCount+1))
        {
                cout<<"Invalid position \n";
                return;
        }

        if(pos == 1)
        {
                InsertFirst(no);
        }
        else if(pos == iCount+1)
        {
                InsertLast(no);
        }
        else 
        {
                newn = new node<T>;

                newn->data = no;
                newn->next = NULL;

                temp = first;

                for(i = 1; i < (pos - 1); i++)
                {
                        temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;

                iCount++;
        }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:   DeleteAtPos
//	Function Date			:	07/11/2013
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:	            :   Integer
//	Description:
//		This function remove node in any position of Singly_Linear_LinkedList
//
//	Returns				    :   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Singly_Linear_LinkedList<T> :: DeleteAtPos(
                                                    int  pos
                                                )
{
        struct node<T> *temp = NULL;
        struct node<T> *target = NULL;
        int i = 0;

        if((pos < 1) || (pos > iCount))
        {
                cout<<"Invalid position \n";
                return;
        }

        if(pos == 1)
        {
                DeleteFirst();
        }
        else if(pos == iCount)
        {
                DeleteLast();
        }
        else 
        {
                temp = first;

                for(i = 1; i < (pos - 1); i++)
                {
                        temp = temp->next;
                }

                target = temp->next;
                temp->next = target->next;

                delete target;

                iCount--;
        }
}


/////////////////////////////////////////////////////////////////////////
//
//  Class :       DoublyLL  (342.c)
//  Description:  Generic implementation of Doubly Linear Linked List
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////////////////

//
// This is generic linked list of type T
//

template <class T>
struct Doubly_Linear_LinkedListnode 
{
    T data;
    struct Doubly_Linear_LinkedListnode<T> *next;
    struct Doubly_Linear_LinkedListnode<T> *prev;
};

template <class T>
class Doubly_Linear_LinkedList
{
    private : 
        struct Doubly_Linear_LinkedListnode<T> *first;
        int iCount;

    public :
        
        Doubly_Linear_LinkedList();

        void Display();

        int Count();

        void InsertFirst(
                            T
                        );

        void InsertLast(
                            T
                        );

        void InsertAtPos(
                            T ,
                            int
                        );
       
        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(
                            int
                        );
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Doubly_Linear_LinkedList
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is constructor of class Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
Doubly_Linear_LinkedList<T> :: Doubly_Linear_LinkedList()
{
    this->first = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data
//	Description:
//		This function add node in first position of Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Linear_LinkedList<T> :: InsertFirst(
                                                    T  no
                                                )
{
    struct Doubly_Linear_LinkedListnode<T> *newn = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    } 
    else 
    {
        newn->next = first;
        first->prev = newn;
        first = newn; 
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertLast
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data
//	Description:
//		This function add node in Last position of Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Linear_LinkedList<T> :: InsertLast(
                                                    T  no
                                                )
{
    struct Doubly_Linear_LinkedListnode<T> *newn = NULL;
    struct Doubly_Linear_LinkedListnode<T> *temp = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function Display all data of Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Linear_LinkedList<T> :: Display()
{
    struct Doubly_Linear_LinkedListnode<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <->";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function Count all nodes of Doubly_Linear_LinkedList
//
//	Returns					:   Integer
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int Doubly_Linear_LinkedList<T> :: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function delete first node of Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Linear_LinkedList<T> :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else 
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteLast
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function delete Last node of Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Linear_LinkedList<T> :: DeleteLast()
{
    struct Doubly_Linear_LinkedListnode<T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else 
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data , Integer
//	Description:
//		This function add node any position of Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Linear_LinkedList<T> :: InsertAtPos(
                                                    T    no ,
                                                    int  pos
                                                )
{
    struct Doubly_Linear_LinkedListnode<T> *temp = NULL;
    struct Doubly_Linear_LinkedListnode<T> *newn = NULL;
    int i = 0;

    if((pos < 1) || (pos > iCount+1))
    {
        cout<<"Invalid position \n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else 
    {
        newn = new Doubly_Linear_LinkedListnode<T>;

        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < (pos - 1); i++)
        {
                temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		This function delete node any position of Doubly_Linear_LinkedList
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Doubly_Linear_LinkedList<T> :: DeleteAtPos(
                                                    int  pos
                                                )
{
    struct Doubly_Linear_LinkedListnode<T> *temp = NULL;
    struct Doubly_Linear_LinkedListnode<T> *target = NULL;
    int i = 0;

    if((pos < 1) || (pos > iCount))
    {
        cout<<"Invalid position \n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else 
    {
        temp = first;

        for(i = 1; i < (pos - 1); i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        iCount--;
    }
}


/////////////////////////////////////////////////////////////////////////
//
//  Class :       BST  (571.c)
//  Description:  Generic implementation of Binary Search Tree
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////////////////

// Add Code

/////////////////////////////////////////////////////////////////////////
//
//  Class :       Sorting  (595.c)
//  Description:  Generic implementation of Sorting algorithems
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////////////////

// Add Code

/////////////////////////////////////////////////////////////////////////
//
//  Class :       ArrayX  (587.cpp)
//  Description:  Generic implementation of Searching algorithems
//  Author :      Shivam Rajendra kale
//
/////////////////////////////////////////////////////////////////////////


template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;
        bool Sorted;

        ArrayX(
                    int  no
                );

        ~ArrayX();

        void Accept();

        void Display();

        bool LinearSearch(
                             T  no
                        );

        bool ByDirectionalSearch(
                                    T  no
                                );

        bool BinarySearchInc(
                                T no
                            );

        bool BinarySearchEfficientInc(
                                        T  no
                                    );

        bool BinarySearchDec(
                                T  no
                            );

        bool BinarySearchEfficientDec(
                                         T  no
                                    );

        bool CheckSortedInc();

        bool CheckSortedDec();

};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	ArrayX
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Integer
//	Description:
//		This is constructor of class ArrayX
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
ArrayX<T>::ArrayX(
                    int  no
                )
{
    iSize = no;
    Arr = new T[iSize];
    Sorted = true;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~ArrayX
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This is constructor of class ArrayX
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Accept
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function uses to accept data from user
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter "<<iSize<<" elements :\n";
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<"Enter the number no : "<<i+1<<"\n";
        cin>>Arr[i];

        if((i > 0) && (Sorted == true)) // IMP
        {
            if(Arr[i] < Arr[i-1])
            {
                Sorted = false;
            }
        }    
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function uses to Display all data from Array
//
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void ArrayX<T>::Display()
{
    cout<<"Elements of the Array are :\n";

    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	LinearSearch
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data(T)
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
///////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::LinearSearch(
                                T  no
                            )
{
    int i = 0;
    bool bFlag = false;

    if(Sorted == true)        //IMP
    {
        cout<<"Data is sorted\n";

        return BinarySearchEfficientInc(no);
    }

    for(i = 0; i < iSize; i++)            //N
    {
        if(no == Arr[i])
        {
            bFlag = true;
            break;       
        }
    }
    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	ByDirectionalSearch
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data(T)
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::ByDirectionalSearch(
                                        T  no
                                    )
{
    int iStart = 0, iEnd = 0;
    bool bFlag = false;

    for(iStart = 0, iEnd =  iSize;   iSize <= iEnd;  iSize++,iEnd--)  // N/2
    {
        if(no == Arr[iSize] || no == Arr[iEnd])
        {
            bFlag = true;
            break;       
        }
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchInc
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data(T)
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::BinarySearchInc(
                                    T  no
                                )
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iSize + ((iEnd - iSize) / 2);

        if(Arr[iMid] == no)
        {
            bFlag = true;
            break;
        }
        else if(no < Arr[iMid])  // First half (left window)
        {
            iEnd = iMid - 1;
        }
        else if(no > Arr[iMid])  // Second half (rigth window)
        {
            iStart = iMid +1;
        }

    } //End of while

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchEfficientInc
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data(T)
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::BinarySearchEfficientInc(
                                            T  no
                                        )
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;

    if(Sorted == false)     //new
    {
        cout<<"Data is not sorted\n";

        return LinearSearch(no);  //Important
    }

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if((Arr[iMid] == no) || (Arr[iStart] == no) || (Arr[iEnd] == no))
        {
            bFlag = true;
            break;
        }
        else if(no < Arr[iMid])  // First half (left window)
        {
            iEnd = iMid - 1;
        }
        else if(no > Arr[iMid])  // Second half (rigth window)
        {
            iStart = iMid +1;
        }

    } //End of while

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchDec
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data(T)
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::BinarySearchDec(
                                    T  no
                                )
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iSize + ((iEnd - iSize) / 2);

        if(Arr[iMid] == no)
        {
            bFlag = true;
            break;
        }
        else if(no > Arr[iMid])  // First half (left window)
        {
            iEnd = iMid - 1;
        }
        else if(no < Arr[iMid])  // Second half (rigth window)
        {
            iStart = iMid +1;
        }

    } //End of while

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchEfficientDec
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   Data(T)
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::BinarySearchEfficientDec(
                                            T  no
                                        )
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if((Arr[iMid] == no) || (Arr[iStart] == no) || (Arr[iEnd] == no))
        {
            bFlag = true;
            break;
        }
        else if(no > Arr[iMid])  // First half (left window)
        {
            iEnd = iMid - 1;
        }
        else if(no < Arr[iMid])  // Second half (rigth window)
        {
            iStart = iMid +1;
        }

    } //End of while

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	CheckSortedInc
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::CheckSortedInc()
{
    bool bFlag = true;
    int i = 0;

    for(i = 0; i < (iSize-1); i++)
    {
        if(Arr[i] > Arr[i+1])  ///////////
        {
            bFlag = false;
            break;
        }  
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	CheckSortedDec
//	Function Date			:	15/09/2025
//	Function Author			:	Shivam Rajendra Kale
//	Parameters:				:   NONE
//	Description:
//		This function uses to search specific data from Array
//
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool ArrayX<T>::CheckSortedDec()
{
    bool bFlag = true;
    int i = 0;

    for(i = 0; i < (iSize-1); i++)
    {
        if(Arr[i] < Arr[i+1])  ///////////
        {
            bFlag = false;
            break;
        }  
    }

    return bFlag;
}


/////////////////////////////////////////////////////////////////////////
// Assignment no : 34,35,36 functions 
/////////////////////////////////////////////////////////////////////////

int main()
{
    
    return 0;
}