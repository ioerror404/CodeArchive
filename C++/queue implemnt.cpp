#include<iostream>
#include<conio.h>
using namespace std;
class Queue{
  int a[100];
  int rear;     
  int front;    
  
  public: 
  Queue()
  {
    rear = front = -1;
  }
  void enqueue(int x);     
  int dequeue();
  void display();

}
void Queue :: enqueue(int x)
{
  if( rear = SIZE-1)
  {
    cout << "Queue is full";
  }
  else
  {
    a[++rear] = x;
  }
}

int queue :: dequeue()
{
  return a[++front];    
}

void queue :: display()
{
  int i;
  for( i = front; i <= rear; i++)
  {
    cout << a[i];
  }
}

