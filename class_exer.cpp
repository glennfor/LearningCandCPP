#if 0
Exercise 13-2: Write a "checkbook" class. You put a list of numbers into this class and get a
total out.
Member functions:
void check::add_item(int amount); // Add a new entry to the checkbook
int check::total(void); // Return the total of all items

Exercise 13-4: Define a class that will hold the set of integers from 0 to 31. An element can be
set with the set member function and cleared with the clear member function. It is not an
error to set an element that's already set or clear an element that's already clear. The function
test is used to tell whether an element is set.
Member functions:
void small_set::set(int item); // Set an element in the set
void small_set::clear(int item); // Clear an element in the set
int small_set::test(void); // See whether an element is set
Sample usage:
small_set a_set;
a_set.set(3); // Set contains [3]
a_set.set(5); // Set contains [3,5]
a_set.set(5); // Legal (set contains [3,5])
cout << a_set.test(3) << '\n'; // Prints "1"
cout << a_set.test(0) << '\n'; // Prints "0"
a_set.clear(5); // Set contains [3]



Exercise 13-5: I have a simple method of learning foreign vocabulary words. I write the
words down on a list of flash cards. I then go through the stack of flash
Page 216
cards one at a time. If I get a word right, that card is discarded. If I get it wrong, the card goes
to the back of the stack.
Write a class to implement this system.
Member functions:
struct single_card {
char question[40]; // English version of the word
char answer[40]; // Other language version of the word
};
// Constructor -- takes a list of cards to
// initialize the flash card stack
void flash_card::flash_card(single_card list[]);
// Get the next card
const single_card& flash_card::get_card(void);
//The student got the current card right
void flash_card::right(void);
// The student got the current card wrong
void flash_card::wrong(void);
//Returns 1 -- done / 0 -- more to do
int done(void);*/
#endif

struct single_card {
char question[40]; // English version of the word
char answer[40]; // Other language version of the word
};

class Learn{
	private:
		single_card list[SIZE];

}
