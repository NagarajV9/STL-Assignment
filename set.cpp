#include <iostream> 
#include <set> 
#include <iterator> 
using namespace std; 

int main() 
{ 
	set <int, greater <int> > s1,s3;		 
	s1.insert(40); 
	s1.insert(30); 
	s1.insert(60); 
	s1.insert(20); 
	s1.insert(50); 
	s1.emplace(50); 
	s1.insert(10); 
	

	set <int, greater <int> > :: iterator itr; 
	cout << "\nThe set 1 is : "; 
	for (itr = s1.begin(); itr != s1.end(); ++itr) 
	{ 
		cout << *itr<<endl; 
	} 
	cout << endl; 

	set <int> s2(s1.begin(), s1.end()); 

	cout << "\nThe set 2 is : "; 
	for (itr = s2.begin(); itr != s2.end(); ++itr) 
	{ 
		cout << *itr<<endl; 
	} 
	cout << endl; 

	cout << "\nSet 2 after removal of elements less than 30 : "; 
	s2.erase(s2.begin(), s2.find(30)); 
	for (itr = s2.begin(); itr != s2.end(); ++itr) 
	{ 
		cout << *itr<<endl; 
	} 
    cout<<endl;
	
	int num; 
	num = s2.erase (50); 
	cout << num << " removed \n" ; 
	for (itr = s2.begin(); itr != s2.end(); ++itr) 
	{ 
		cout <<*itr<<endl; 
	} 

	cout << endl; 

	
	cout << "Lower bound of 40 for set1 "<< *s1.lower_bound(40) << endl; 
	cout << "Upper bound of 40 for set1 "<< *s1.upper_bound(40) << endl; 

	
	cout << "Lower bound of 40 for set2 "<< *s2.lower_bound(40) << endl; 
	cout << "Upper bound of 40 for set2 "<< *s2.upper_bound(40) << endl;
		
		s3.swap(s1);
		
    cout<<"\nThe set3 is \n";
    
    for (itr = s3.begin(); itr != s3.end(); ++itr) 
	{ 
		cout <<*itr<<endl; 
	} 

	cout << endl;

    cout<<"\nThe size of set2 is "<<s2.size();
    
	return 0; 

} 
