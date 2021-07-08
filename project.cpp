// This whole C++ code was created by Yatin Tiwari!
// Including the header : 

#include<iostream>
// The template linker : 

template <class T>
class linklist
{
	private :
		
		struct node
		{
			node *prev ;
			T data ;
			node *next ;
		} *p ;
		
	public :
		// Linking the head linkerlist -> LINKLIST : 
		
		linklist() ;
		~linklist() ;
		void append (T) ;
		void addatbeg (T) ;
		void addafter (int, T) ;
		void deletenode (T) ;
		void display() ;
		int count() ;
} ;
// The code to create, modify the node values and delete the nodes : 

template <class T>
linklist<T>::~linklist()
{
	p = NULL ;
}

template <class T>
linklist<T>::linklist()
{
	node *t ;
	while (p!= NULL)
	{
		t = p ;
		p = p -> next;
		delete t ;
	}
}
// Creating the exit stat -> NULL 0 :

template <class T>
void linklist<T>::append (T num)
{
	node *q, *t ;
	q = p ;
	if (q==NULL)
	{
		q = new node ;
		q -> prev = NULL ;
		q -> data = num ;
		q -> next = NULL ;
		p = q ;
	}
	else // Stopping with the else code :
	{
		while (q -> next !=NULL)
			q = q -> next ;
			
		t = new node ;
		t -> prev = q ;
		t -> data = num ;
		t -> next = NULL ;
		q -> next = t ;
	}
	// Some error is going on with this project.
	// And I am trying to fix it
	// Source Code At github.com/yatintiwari/Impliment-Linker
}
