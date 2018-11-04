#include<iostream>
#include<cstdlib>
#include<array>
#include<algorithm>
#include<iterator>
using namespace std;

void delete_array(array<int,10> &a,int index)
{
    int i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==index)
        a[i]=0;
    }
}

int main()
{
	int c,e,i;
	array<int,10> ar;
	ar.fill(0);
	array<int,10>::iterator itr;
	     while(1){
	               cout<<"Enter the operation to be performed\n";
	               cout<<"1.Insert\n";
	               cout<<"2.Delete\n";
	               cout<<"3.Print size\n4.Sort\n5.Print elements\n6.Quit\n";
	               cin>>c;
	               switch(c)
	               {
	                   case 1:cout<<"Enter the element to insert ";
	                          cin>>e;
	                          cout<<"Enter the index ";
	                          cin>>i;
	                          ar[i]=e;
	                          break;
	                   case 2:cout<<"Enter the element to delete ";
	                          cin>>e;
	                          delete_array(ar,e);
	                          break;
	                   case 3:cout<<"The size of array is "<<ar.size()<<endl;
	                          break;
	                   case 4:sort(ar.begin(),ar.end());
	                          break;
	                   case 5:
	                          cout<<"The array is\n";
	                          for(itr=ar.begin();itr!=ar.end();itr++)
	                          cout<<*itr<<endl;
	                          cout<<endl;
	                          break;
	                   case 6:exit(0);
	               }}
	               
	return 0;
}
