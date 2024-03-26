//============================================================================
// Name        : _array_foreach_loop.cpp
// Author      : s_kimza
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int A[] = {5,41,85,6,3};

	for(auto x:A){
		std::cout<<x<<",";
	}
	std::cout << "Done" << std::endl;
	return 0;
}
