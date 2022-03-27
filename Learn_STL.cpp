//Algorithmns on HEAPS
//heaps are like trees but each node must be smaller than it children
/*
eg      9                9
	  /   \             / \
	 8     7           2   12
	/ \   / \         / \  / \
   6   4 3   0       1   8    5
   HEAP & TREE      TREE but not HEAP
*/

//squashing a heap in to a list :: goes line by line
//  9 8 7 6 4 3 0

//#include <iostream>
//#include <map>
//#include <vector>
//
//main(){
//	std::vector<int> v = std::vector(1,2,3);
//    std::map<std::string, size_t> animal_population {
//		{"humans", 7000000000},
//		{"chickens", 17863376000},
//		{"camels", 24246291},
//		{"sheep", 1086881528},
//		/* â ¦ */
//	};
//	for (const auto &[species, count] : animal_population) {
//		std::cout << "There are " << count << " " << species
//			<< " on this planet.\n";
//	}
//	std::cin.get();
//}
//
#include <iostream >
#include <vector>

using namespace std;
int main()
{
// create a vector to store int
vector<int> vec;
int i;
// display the original size of vec
cout << "vector size = " << vec.size() << endl;
// push 5 values into the vector
for(i = 0; i < 5; i++){
vec.push_back(i);
}
// display extended size of vec
cout << "extended vector size = " << vec.size() << endl;
// access 5 values from the vector
for(i = 0; i < 5; i++){
cout << "value of vec [" << i << "] = " << vec[i] << endl;
}
// use iterator to access the values
vector<int>::iterator v = vec.begin();
while( v != vec.end()) {
cout << "value of v = " << * v << endl;
v++;
}
cin>>i;
return 0;
}
