#include <iostream>
#include<conio.h>
const int X_SIZE = 40; // Size of array in the X direction
const int Y_SIZE = 60; // Size of array in the Y direction
/*
* We use X_SIZE/8 since we pack 8 bits per byte
*/
char graphics[X_SIZE / 8][Y_SIZE]; // The graphics data
/******************************************************
* set_bit -- set a bit in the graphics array *
* *
* Parameters *
* x,y -- location of the bit *
******************************************************/
inline void set_bit(const int x,const int y)
{
graphics[(x)/8][y] |= (0x80 >>((x)%8));
}
main()
{
int loc; // Current location we are setting
void print_graphics(void); // Print the data
for (loc = 0; loc < X_SIZE; ++loc)
set_bit(loc, loc);
print_graphics();
getch();
return (0);
}
/*******************************************************
* print_graphics -- print the graphics bit array *
* as a set of X and .'s *
*******************************************************/
void print_graphics(void)
{
int x; // Current x byte
int y; // Current y location
int bit; // Bit we are testing in the current byte
for (y = 0; y < Y_SIZE; ++y) {
// Loop for each byte in the array
for (x = 0; x < X_SIZE / 8; ++x) {
// Handle each bit
for (bit = 0x80; bit > 0; bit = (bit >> 1))
if ((graphics[x][y] & bit) != 0)
std::cout << 'X';
else
std::cout << '.';
}
}
std::cout << '\n';
}
