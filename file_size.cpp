#include <iostream>
#include <fstream>

//file pinter seeks EOF and therefore can determine the file size
main(){
	std::ifstream fo("data.txt", std::ios::ate|std::ios::binary|std::ios::in);
	std::cout<<fo.tellg();
	std::cin.get();
}
