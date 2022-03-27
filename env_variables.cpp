#include <iostream>

main(int argc, char**argv, char* env[]){
    //cout << getenv("USERPROFILE");
	std::cout<< __FILE__<<std::endl;
	std::cout<<argv[0];
	std::cout << std::endl << "Printing Environment Variables ..." << std::endl <<std::endl;
	for(int i = 0; env[i]; ++i)
	    std::cout << "\t" << env[i] <<std::endl;
	std::cin.get();
}
