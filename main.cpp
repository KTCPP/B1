/*
wird verwendet f�r std::cout und std::endl
wird verwendet f�r die Ausgabe
*/
#include <iostream>
// wird verwendet f�r cout und endl
// wird verwendet um nicht std:: schreiben zu m�ssen
//using namespace std;
int main(int argc, char* argv[]) {
	std::cout << "Hello world" << std::endl;
	std::cout << argc << argv[1] << std::endl;
	return 0;
}