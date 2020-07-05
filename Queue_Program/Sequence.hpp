
#include <iostream>
#include <cstdio>
#include "Sequence.h"
using namespace std;

template <class T>
 void Sequence<T>::transferFrom (Sequence& source)
    {
     T temp;
     clear();
     for(int i =0; i<=source.length();i++){
        source.remove(temp,0);
         add(temp,length());
     }
            }
template <class T>
    
    Sequence<T>& Sequence<T>::operator=(Sequence& rhs){
        clear();
        T temp;
        for(int i =0; i<rhs.length();i++){
            rhs.remove(temp,0);
         add(temp,length());
            rhs.add(temp,rhs.length());
        }
        return (*this);
    }
template <class T>
    void Sequence<T>::add(T& x, int pos) {
        if (pos <0 || pos >size){
            cout<<"You have entered a value out of bounds with the size of the length!";
            return;
        }
        NodeRecord* blip = new NodeRecord();
        blip->value = x;
        NodeRecord* temp = head;
        blip->next = NULL;
        if (size==0){
            head = blip;
        }
        else if(pos==0){
            blip->next = head;
            head = blip;
        }
        else if(pos==size){
                while(temp->next != NULL){
                temp = temp->next;
                }
                temp->next = blip;
        }
        else{
            for(int i =0; i<pos-1; i++){
            temp = temp->next;
            }
            blip->next = temp->next;
            temp->next = blip;
    }
        size++;
    }//add
template <class T>
    void Sequence<T>::remove(T& x, int pos) {
        if (pos <0 || pos >size){
            cout<<"You have entered a value out of bounds with the size of the length!";
            return;
        }
        NodeRecord* temp = head;
        if(pos==0){
            x = head->value;
            head = head->next;
        } else{
            for (int i = 0; i < pos-1; i++) {
            temp = temp->next;
        }//for
            if(pos==size){
                x = temp->next->value;
                temp->next = NULL;
            } else{
                x = temp->next->value;
                temp->next = temp->next->next;
            }
        }
        size--;
    }//remove
template <class T>
    T& Sequence<T>::entry(int pos){
    NodeRecord* temp = head;
        if (pos <0 || pos >size){
            cout<<"You have entered a value out of bounds with the size of the length!";
            return temp->value;
        }
	if(pos==0){
cout<< temp->value<< "\n";
} else{
	for(int i = 0; i<pos;i++){
	temp = temp->next;
}//for
	cout<<temp->value<< "\n";
}//else
        pos = 0;
    return temp->value;
}//entry
template <class T>
    int Sequence<T>::length(void){
	return size;
    }//size
template <class T>
    void Sequence<T>::outputSequence(void) {
        NodeRecord* temp = head;
        for(int i =0; i<size; i++){
            cout<<temp->value<<" ";
            temp = temp->next;
            if(i%10==0&&i>1)
                cout<<"\n";
        }//while
         cout<<"\n";
    }//output


template <class T>
Sequence<T>::Sequence()
{
    head = NULL;
    size = 0;
}// Sequence

template <class T>
Sequence<T>::~Sequence()
{
    reclaimAllNodes(head);
}    // ~Sequence


template <class T>
void Sequence<T>::clear(void)
{
    reclaimAllNodes(head);
    head = NULL;
    size = 0;
} // clear

template <class T>
void Sequence<T>::reclaimAllNodes(NodeRecord*& initialP)
// requires: Null(initialP)  or  Alive(initialP)
//  ensures: all nodes in linked list
//           beginning with initialP are reclaimed
{
    if (initialP != NULL) {
        reclaimAllNodes(initialP->next);
        delete (initialP);
    } // end if
} // reclaimAllNodes
