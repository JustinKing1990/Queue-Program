#include "Queue.h"
#include <iostream>
#include <cstdio>
template <class T>
    
Queue<T>::Queue(){
    
}
template <class T>
    Queue<T>::~Queue(){
        
    }
template <class T>
void Queue<T>::clear (void){
    s.clear();
}
template <class T>
 void Queue<T>::transferFrom (Queue& source)
    {
     s.transferFrom(source.s);
        }
template <class T>
    
    Queue<T>& Queue<T>::operator=(Queue& rhs){
        s.operator=(rhs.s);
        return (*this);
    }
template <class T>
    void Queue<T>::enqueue (T& x){
    s.add(x,s.length());
    }
template <class T>
    void Queue<T>::dequeue (T& x){
    s.remove(x,0);
    }
template <class T>
    void Queue<T>::replaceFront (T& x){
        s.remove(useThis,0);
        s.add(x,0);
    }
template <class T>
    T& Queue<T>::front (void){
        return (s.entry(0));
    }
template <class T>
    int Queue<T>::length (void){
         return s.length();
    }
template <class T>
    void Queue<T>::outputQueue(void){
        s.outputSequence();
    }