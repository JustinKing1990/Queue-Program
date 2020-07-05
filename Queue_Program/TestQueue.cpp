//g++ -std=c++1z TestQueue.cpp -o TestQueue && ./program
#include "Queue.hpp"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int xi = 1;
    string xt ="First";
    typedef Queue<int> IntegerQueue;
    IntegerQueue qi;
    typedef Queue<int> IntegerQueue;
    IntegerQueue qi2;
    typedef Queue<string> TextQueue;
    TextQueue qt;
    typedef Queue<string> TextQueue;
    TextQueue qt2;
    cout<<"The initial queue is :";
    qi.outputQueue();
    cout<<"ADDING THE VALUE 1 TO THE QUEUE!";
    qi.enqueue(xi);
    cout<<"\nThe queue is now :";
    qi.outputQueue();
    xi = 3;
    cout<<"ADDING THE VALUE 3 TO THE QUEUE!";
    qi.enqueue(xi);
    cout<<"\nThe queue is now :";
    qi.outputQueue();
    cout<<"The length of Queue 1 is: "<<qi.length()<<endl;
    xi= 4;
    qi2.enqueue(xi);
    xi = 8;
    qi2.enqueue(xi);
    cout<<"Queue 1 is: ";
    qi.outputQueue();
    cout<<"The length of Queue 1 is: "<<qi.length()<<endl;
    cout<<"Queue 2 is: ";
    qi2.outputQueue();
    cout<<"Doing the transfer from!"<<endl;
    qi.transferFrom(qi2);
    cout<<"Queue 1 is :";
    qi.outputQueue();
    cout<<"The length of Queue 1 is: "<<qi.length()<<endl;
    cout<<"Queue 2 is :";
    qi2.outputQueue();
    cout<<"THe length of Queue 2 is: "<<qi2.length()<<endl;
    cout<<"Doing the = opperation!"<<endl;
    qi2=qi;
    cout<<"Queue 1 is: ";
    qi.outputQueue();
    cout<<"The length of Queue 1 is: "<<qi.length()<<endl;
    cout<<"Queue 2 is: ";
    qi2.outputQueue();
    cout<<"The length of Queue 2 is: "<<qi2.length()<<endl;
    cout<<"TESTING THE DEQUEUE!"<<endl;
    qi.dequeue(xi);
    cout<<"Queue 1 is now: ";
    qi.outputQueue();
    cout<<"The length of Queue 1 is: "<<qi.length()<<endl;
    cout<<"Queue 2 is now: ";
    qi2.outputQueue();
    cout<<"The length of Queue 2 is: "<<qi2.length()<<endl;
    xi = 234;
    qi.enqueue(xi);
    cout<<"Adding a value back into Queue 1 \nQueue 1 is now: ";
    qi.outputQueue();
    cout<<"The length of Queue 1 is: "<<qi.length()<<endl;
    cout<<"TESTING THE REPLACE FRONT!"<<endl;
    xi=564;
    qi.replaceFront(xi);
    cout<<"Queue 1 is now: ";
    qi.outputQueue();
    cout<<"The length of Queue 1 is: "<<qi.length()<<endl;
    cout<<"Queue 2 is now: ";
    qi2.outputQueue();
    cout<<"The length of Queue 2 is: "<<qi2.length()<<endl;
    cout<<"TESTING THE ENTRY!"<<endl;
    cout<<"The front value for Queue 2 is: ";
    qi2.front();
    cout<<"TESTING THE CLEAR"<<endl;
    qi.clear();
    qi2.clear();
    cout<<"Queue 1 is now: ";
    qi.outputQueue();
    cout<<"The length of Queue 1 is now: "<<qi.length()<<endl;
    cout<<"Queue 2 is now: ";
    qi2.outputQueue();
    cout<<"The length of Queue 2 is now: "<<qi2.length()<<endl;
    cout<<"\n\n\n\nNOW TESTING THE TEXT QUEUES!";
    
    
    cout<<"The initial queue is :";
    qt.outputQueue();
    cout<<"ADDING THE VALUE 'First' TO THE QUEUE!";
    qt.enqueue(xt);
    cout<<"\nThe queue is now: ";
    qt.outputQueue();
    xt = "Second";
    cout<<"ADDING THE VALUE 'Second' TO THE QUEUE!";
    qt.enqueue(xt);
    cout<<"\nThe queue is now: ";
    qt.outputQueue();
    cout<<"The length of Queue 1 is: "<<qt.length()<<endl;
    xt= "Third";
    qt2.enqueue(xt);
    xt = "Fourth";
    qt2.enqueue(xt);
    cout<<"Queue 1 is: ";
    qt.outputQueue();
    cout<<"The length of Queue 1 is: "<<qt.length()<<endl;
    cout<<"Queue 2 is: ";
    qt2.outputQueue();
    cout<<"Doing the transfer from!"<<endl;
    qt.transferFrom(qt2);
    cout<<"Queue 1 is :";
    qt.outputQueue();
    cout<<"The length of Queue 1 is: "<<qt.length()<<endl;
    cout<<"Queue 2 is :";
    qt2.outputQueue();
    cout<<"THe length of Queue 2 is: "<<qt2.length()<<endl;
    cout<<"Doing the = opperation!"<<endl;
    qt2=qt;
    cout<<"Queue 1 is: ";
    qt.outputQueue();
    cout<<"The length of Queue 1 is: "<<qt.length()<<endl;
    cout<<"Queue 2 is: ";
    qt2.outputQueue();
    cout<<"The length of Queue 2 is: "<<qt2.length()<<endl;
    cout<<"TESTING THE DEQUEUE!"<<endl;
    qt.dequeue(xt);
    cout<<"Queue 1 is now: ";
    qt.outputQueue();
    cout<<"The length of Queue 1 is: "<<qt.length()<<endl;
    cout<<"Queue 2 is now: ";
    qt2.outputQueue();
    cout<<"The length of Queue 2 is: "<<qt2.length()<<endl;
    xt = "Fifth";
    qt.enqueue(xt);
    cout<<"Adding a value back into Queue 1 \nQueue 1 is now: ";
    qt.outputQueue();
    cout<<"The length of Queue 1 is: "<<qt.length()<<endl;
    cout<<"TESTING THE REPLACE FRONT!"<<endl;
    xt= "Sixth";
    qt.replaceFront(xt);
    cout<<"Queue 1 is now: ";
    qt.outputQueue();
    cout<<"The length of Queue 1 is: "<<qt.length()<<endl;
    cout<<"Queue 2 is now: ";
    qt2.outputQueue();
    cout<<"The length of Queue 2 is: "<<qt2.length()<<endl;
    cout<<"TESTING THE ENTRY!"<<endl;
    cout<<"The front value for Queue 2 is: ";
    qt2.front();
    cout<<"TESTING THE CLEAR"<<endl;
    qt.clear();
    qt2.clear();
    cout<<"Queue 1 is now: ";
    qt.outputQueue();
    cout<<"The length of Queue 1 is now: "<<qt.length()<<endl;
    cout<<"Queue 2 is now: ";
    qt2.outputQueue();
    
    

    return 0;
    
    
}

/*THIS IS MY OUTPUT!!!!
The initial queue is :
ADDING THE VALUE 1 TO THE QUEUE!
The queue is now :1 
ADDING THE VALUE 3 TO THE QUEUE!
The queue is now :1 3 
The length of Queue 1 is: 2
Queue 1 is: 1 3 
The length of Queue 1 is: 2
Queue 2 is: 4 8 
Doing the transfer from!
Queue 1 is :4 8 
The length of Queue 1 is: 2
Queue 2 is :
THe length of Queue 2 is: 0
Doing the = opperation!
Queue 1 is: 4 8 
The length of Queue 1 is: 2
Queue 2 is: 4 8 
The length of Queue 2 is: 2
TESTING THE DEQUEUE!
Queue 1 is now: 8 
The length of Queue 1 is: 1
Queue 2 is now: 4 8 
The length of Queue 2 is: 2
Adding a value back into Queue 1 
Queue 1 is now: 8 234 
The length of Queue 1 is: 2
TESTING THE REPLACE FRONT!
Queue 1 is now: 564 234 
The length of Queue 1 is: 2
Queue 2 is now: 4 8 
The length of Queue 2 is: 2
TESTING THE ENTRY!
The front value for Queue 2 is: 4
TESTING THE CLEAR
Queue 1 is now: 
The length of Queue 1 is now: 0
Queue 2 is now: 
The length of Queue 2 is now: 0




NOW TESTING THE TEXT QUEUES!The initial queue is :
ADDING THE VALUE 'First' TO THE QUEUE!
The queue is now: First 
ADDING THE VALUE 'Second' TO THE QUEUE!
The queue is now: First Second 
The length of Queue 1 is: 2
Queue 1 is: First Second 
The length of Queue 1 is: 2
Queue 2 is: Third Fourth 
Doing the transfer from!
Queue 1 is :Third Fourth 
The length of Queue 1 is: 2
Queue 2 is :
THe length of Queue 2 is: 0
Doing the = opperation!
Queue 1 is: Third Fourth 
The length of Queue 1 is: 2
Queue 2 is: Third Fourth 
The length of Queue 2 is: 2
TESTING THE DEQUEUE!
Queue 1 is now: Fourth 
The length of Queue 1 is: 1
Queue 2 is now: Third Fourth 
The length of Queue 2 is: 2
Adding a value back into Queue 1 
Queue 1 is now: Fourth Fifth 
The length of Queue 1 is: 2
TESTING THE REPLACE FRONT!
Queue 1 is now: Sixth Fifth 
The length of Queue 1 is: 2
Queue 2 is now: Third Fourth 
The length of Queue 2 is: 2
TESTING THE ENTRY!
The front value for Queue 2 is: Third
TESTING THE CLEAR
Queue 1 is now: 
The length of Queue 1 is now: 0
Queue 2 is now: 
*/