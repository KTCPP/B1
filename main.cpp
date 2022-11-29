/*
wird verwendet für std::cout und std::endl
wird verwendet für die Ausgabe
*/
#include <iostream>
// wird verwendet für cout und endl
// wird verwendet um nicht std:: schreiben zu müssen
//using namespace std;
int main(int argc, char* argv[]) {
	std::cout << "Hello world" << std::endl;
	std::cout << argc << argv[1] << std::endl;
	return 0;
}