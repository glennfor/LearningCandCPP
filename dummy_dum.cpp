//can be implemented more efficiently

//extend to display
//eg, 18 = 2*2*2*2*3=2^4*3
//later


#include <iostream>
#include <cstdlib>
#include <list>
#include <algorithm>
#include <cstdio>
#include <cmath>

using std::list;

bool is_prime(int n){
	//case: no check for 1,0, etc
	for(int i = 2; i < int(sqrt(n)+1); ++i)
	    if(n%i == 0)
	        return false;
	return true;
}


int find_last_but_one_factor(int n){
	for(int i = (n/2)+1; i>=1; --i)
	    if(n%i == 0)
			return i;
}


list<int> prime_fact(int num){
	list<int> prime_f;
	if(is_prime(num))
	{
		prime_f.push_back(num);
		return prime_f;
	}
	int n;
	while(not is_prime(num))
	{
		n=find_last_but_one_factor(num);
		prime_f.push_back(num/n);
		if(is_prime(n))
		{
			prime_f.push_back(n);
			return prime_f;
		}
		num = n;
	}
	return prime_f;
}


main(){
	int nm;
	printf("Enter an integer to factorise by primes: ");
	start:
	scanf("%d", &nm);
	list<int> primes(prime_fact(nm));
	//sort(primes.begin(), primes.end());
	std::cout <<std::endl <<std::endl << nm << " = ";
	list<int>::const_iterator iter = primes.begin();
	std::cout << *(iter++);
	while(iter != primes.end())
	{
		std::cout << "*" <<*iter;
		++iter;
	}
	std::cout << std::endl << std::endl << std::endl;
	goto start;
	system("pause");
}






/*//#include <gtk/gtk.h>
#define VC_EXTRALEAN // Exclude rarely-used stuff from Windows
#include <GL/glu.h> // GLFW used for convenience
int main(int argc, char *argv[])
{
int running = GL_TRUE;
double t, t0, fps;
// Initialise GLFW
glfwInit();
// Open the OpenGL window
if( !glfwOpenWindow(640, 480, 8,8,8,8, 32,0, GLFW_WINDOW) )
{
glfwTerminate(); // glfwOpenWindow failed, quit the program.
return 1;
}
// Main loop
while(running)
{
// Swap buffers, i.e. display the image and prepare for next frame.
glfwSwapBuffers();
// Check if the ESC key was pressed or the window was closed.
if(glfwGetKey(GLFW_KEY_ESC) || !glfwGetWindowParam(GLFW_OPENED))
running = GL_FALSE;
}
// Close the OpenGL window, terminate GLFW and exit.
GlfwTerminate();
return 0;
}




#if 0
typedef struct{
	int par : 1;
} bit;

main(){
	std::vector<std::string> names;
	names.push_back("Albert Einstein"), names.push_back("Stephen Hawking"),
	names.push_back("Michael Ellis");
	for(std::vector<std::string>::iterator it = names.begin(); it != names.end(); ++it) {
		std::cout << *it << std::endl;
	}
	// Opens 'foo.txt'.
	std::ifstream is("data.txt");
	std::string whole_file;
	// Sets position to the end of the file.
	is.seekg(0, std::ios::end);
	// Reserves memory for the file.
	whole_file.reserve(is.tellg());
	// Sets position to the start of the file.
	is.seekg(0, std::ios::beg);
	// Sets contents of 'whole_file' to all characters in the file.
	whole_file.assign(std::istreambuf_iterator<char>(is),std::istreambuf_iterator<char>());
	cout << endl <<whole_file << endl << endl;
	std::ifstream f("mydata.txt");
	if (f){
		std::stringstream buffer;
		buffer << f.rdbuf();
		f.close();
	// The content of "file.txt" is available in the string `buffer.str()`
	    cout << buffer.str() << std::flush <<endl << endl;
	    //or "fflush" as in C
	    //endl is std::flush + '\n'
	}
	std::istringstream isstr("0x1P-1022");
	double foo = std::strtod(isstr.str().c_str(), NULL);
	std::cout << "Parsing 0x1P-1022 as hex gives " << foo << '\n';
	getch();
}
#endif

*/
