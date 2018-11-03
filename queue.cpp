#include<iostream>
#include<cstdlib>
#include<queue>
using namespace std;

int mini_index(queue<char> &q,int total)
{
    char mini='|';
    int min_ind;
    char first;
    int i,n=q.size();
    for(i=0;i<n;i++)
    {
        first=q.front();
        q.pop();
        if(first<mini&&i<=total)
        {
            mini=first;
            min_ind=i;
        }
        q.push(first);
    }
    return min_ind;
}

void push_mini(queue<char> &q,int index)
{
    int i,n=q.size();
    char first,person;
    for(i=0;i<n;i++)
    {
        first=q.front();
            q.pop();
        if(i!=index)
        {
            
            q.push(first);
        }
        else
        person=first;
    }
    q.push(person);
}

void sort_queue(queue<char> &p)
{
    int index;
    int i;
    for(i=1;i<=p.size();i++)
    {
        index=mini_index(p,p.size()-i);
        push_mini(p,index);    
    }
}

void print_queue(queue<char> q1)
{
    while(!q1.empty())
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }
}

int main() {
	int c;
	char e;
	queue<char> q;
	     while(1){
	               cout<<"Enter the operation to be performed\n";
	               cout<<"1.Enqueue\n";
	               cout<<"2.Dequeue\n";
	               cout<<"3.Print size\n4.Sort\n5.Print elements\n6.Quit\n";
	               cin>>c;
	               switch(c)
	               {
	                   case 1:cout<<"Enter the element to enqueue ";
	                          cin>>e;
	                          q.push(e);
	                          break;
	                   case 2:q.pop();
	                          break;
	                   case 3:cout<<"The size of queue is "<<q.size()<<endl;
	                          break;
	                   case 4:sort_queue(q);
	                          break;
	                   case 5:
	                          cout<<"The queue is\n";
	                          print_queue(q);
	                          cout<<endl;
	                          break;
	                   case 6:exit(0);
	               }}
	               
	return 0;
}
