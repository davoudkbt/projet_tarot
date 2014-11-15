#include <iostream>
#include <set>

int main() {
	
	std::set<int> myset;
	std::set<int>::iterator it;
	
	std::set<int> myset2;
	std::set<int>::iterator it2;

	// insert some values:
	for (int i=1; i<10; i++) myset.insert(i*10);  // 10 20 30 40 50 60 70 80 90

	it = myset.begin();
	++it;                                        // "it" points now to 20
	
	myset2.insert(*it);
	
	int rep = *it;
	
	myset.erase (it);

	std::cout << "rep = " << rep << '\n';

	myset.erase (40);

	it = myset.find (60);
	myset.erase (it, myset.end());

	std::cout << "myset contains:";
	for (it=myset.begin(); it!=myset.end(); ++it)
	  std::cout << ' ' << *it;
	std::cout << '\n';
	
	std::cout << "myset2 contains:";
	for (it2=myset2.begin(); it2!=myset2.end(); ++it2)
	  std::cout << ' ' << *it2;
	std::cout << '\n';
	
	

	return 0;
}