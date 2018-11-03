#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;

stack<float> sort_stack(stack<float> orig)
{
    stack<float> help;
    while(!orig.empty())
    {
        float element=orig.top();
        orig.pop();
        while(!help.empty()&&help.top()<element)
        {
            orig.push(help.top());
            help.pop();
        }
        help.push(element);
    }
    return help;
}

void print_stack(stack<float> f)
{
    while(!f.empty())
    {
        cout<<f.top()<<endl;
        f.pop();
    }
}

int main() {
	int c;
	float e;
	stack<float> s;
	     while(1){
	               cout<<"Enter the operation to be performed\n";
	               cout<<"1.Push\n";
	               cout<<"2.Pop\n";
	               cout<<"3.Print size\n4.Sort\n5.Print elements\n6.Quit\n";
	               cin>>c;
	               switch(c)
	               {
	                   case 1:cout<<"Enter the element to push ";
	                          cin>>e;
	                          s.push(e);
	                          break;
	                   case 2:s.pop();
	                          break;
	                   case 3:cout<<"The size of stack is "<<s.size()<<endl;
	                          break;
	                   case 4:s=sort_stack(s);
	                          break;
	                   case 5:
	                          cout<<"The stack is\n";
	                          print_stack(s);
	                          cout<<endl;
	                          break;
	                   case 6:exit(0);
	               }}
	               
	return 0;
}
