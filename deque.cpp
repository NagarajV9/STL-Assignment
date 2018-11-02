#include<iostream>
#include<cstdlib>
#include<deque>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	int c,e;
	deque<int> q1;
	deque<int>::iterator itr;
	deque<char> q2;
	deque<char>::iterator it;
	char ch,ca;
	while(1)
	{
	    cout<<"Enter your choice\n";
	    cout<<"a.Integer double ended queue\n";
	    cout<<"b.Character double ended queue\n";
	    cin>>ch;
	    switch(ch)
	    {
	        
	        case 'a':
	               while(1){
	               cout<<"Enter the operation to be performed\n";
	               cout<<"1.Insert at the beginning\n2.Insert at the end\n";
	               cout<<"3.Delete at the beginning\n4.Delete at the end\n";
	               cout<<"5.Print size\n6.Sort\n7.Print elements\n8.Quit\n";
	               cin>>c;
	               switch(c)
	               {
	                   case 1:cout<<"Enter the element to be inserted ";
	                          cin>>e;
	                          q1.push_front(e);
	                          break;
	                   case 2:cout<<"Enter the element to be inserted ";
	                          cin>>e;
	                          q1.push_back(e);
	                          break;
	                   case 3:q1.pop_front();
	                          break;
	                   case 4:q1.pop_back();
	                          break;
	                   case 5:cout<<"The size of deque is "<<q1.size()<<endl;
	                          break;
	                   case 6:sort(q1.begin(),q1.end());
	                          break;
	                   case 7:
	                          cout<<"The integer deque is\n";
	                          for(itr=q1.begin();itr!=q1.end();itr++)
	                          cout<<*itr<<endl;
	                          cout<<endl;
	                          break;
	                   case 8:exit(0);
	               }}
	               break;
	               case 'b':
	                       while(1){
	               cout<<"Enter the operation to be performed\n";
	               cout<<"1.Insert at the beginning\n2.Insert at the end\n";
	               cout<<"3.Delete at the beginning\n4.Delete at the end\n";
	               cout<<"5.Print size\n6.Sort\n7.Print Elements\n8.Quit\n";
	               cin>>c;
	                      switch(c){
	                   case 1:cout<<"Enter the element to be inserted ";
	                          cin>>ca;
	                          q2.push_front(ca);
	                          break;
	                   case 2:cout<<"Enter the element to be inserted ";
	                          cin>>ca;
	                          q2.push_back(ca);
	                          break;
	                   case 3:q2.pop_front();
	                          break;
	                   case 4:q2.pop_back();
	                          break;
	                   case 5:cout<<"The size of deque is "<<q2.size()<<endl;
	                          break;
	                   case 6:sort(q2.begin(),q2.end());
	                          break;
	                    case 7:
	                          cout<<"The character deque is\n";
	                          for(it=q2.begin();it!=q2.end();it++)
	                          cout<<*it<<endl;
	                          cout<<endl;
	                          break;
	                   case 8:exit(0);}
	               break;}
	               
	    }
	}
	return 0;
}
