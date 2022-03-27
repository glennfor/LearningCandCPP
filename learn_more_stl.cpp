#include <iostream>
#include <vector>
#include <map>
#include <initializer_list>
#include <tie>
#include <string>
#include <conio.h>
int main (int argc, char *argv[])
{
	std::vector <std::string> projects;
	std::cout << "program name:"<< argv[0] << std::endl;
	
	for (int i = 1; i < argc; ++i) {
		projects.push_back (argv [i]);
		std::cout <<"%%   "<< projects [i - 1]<<"   $$"<< std::endl;
	}
	
	int remainder;
	std::tie(std::ignore, remainder) = divide_remainder(16, 5);
	std::cout << "16 % 5 is " << remainder << '\n';
//	std::map<std::string, size_t> animal_population {
//		{"humans", 7000000000},
//		{"chickens", 17863376000},
//		{"camels", 24246291},
//		{"sheep", 1086881528},
//	/* â ¦ */
//	};
//	for (const auto &[species, count] : animal_population) {
//		std::cout << "There are " << count << " " << species
//			<< " on this planet.\n";
//	}
	getch();
	return 0;
}
