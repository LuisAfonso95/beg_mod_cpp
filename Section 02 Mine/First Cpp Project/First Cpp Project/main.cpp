//This is a single line comment

/*
This is a 
multiple line comment
*/

#include <iostream>

int main() {

	using namespace std;
	cout << "Hello C++."<< " It's pretty cool" << endl; // << is called the insertion operator. You can do "cascading of operators". endl is a manipulator

	/*
	We can instead do this instead of using the namespace
	sdt:cout << "Hello C++."<< " It's pretty cool" << std::endl; 
	*/
	return 0;
}

