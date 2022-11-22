/*Hexadecimal Color Mixer
In this challenge, you have to mix two or more colors to get a brand new color from their average rgb values.

Each color will be represented in its hexadecimal notation, and so as a string starting with
 # containing three pairs of alphanumeric characters, equals to the three rgb values (in base 16) 
 of red, green and blue.

To obtain the new color, you need to get the arithmetic average of the sums of the individual red, 


green and blue values of each given color. When the average is a float number, you have to round it 
to the nearest integer (rounding up for decimal parts equal to 0.5).

Mixing yellow and red:

Hexadecimal code of yellow = "#FFFF00"
Hexadecimal code of red = "#FF0000"

yellow to RGB = Red: ["FF" = 255], Green: ["FF" = 255], Blue: ["00", 0]
red to RGB = Red: [""FF = 255], Green: ["00" = 0], Blue: ["00" = 0]

Average of Red values = (255 + 255) / 2 = 255
Average of Green values = (255 + 0) / 2 = 127.5 = 128
Average of Blue values = (0 + 0) / 2 = 0 = 0

Rgb of new color = [255, 128, 0]
Hexadecimal conversion = [255 = "FF"], [128 = "80"], [0 = "00"]

New color = "#FF8000" (orange)
Given an array of strings colors containing a series of hexadecimal codes, implement a function 
that returns the hexadecimal code of the new color, as a new string.

Examples
hexColorMixer(["#FFFF00", "#FF0000"]) ? "#FF8000"
// Orange

hexColorMixer(["#FFFF00", "#0000FF"]) ? "#808080"
// Medium gray

hexColorMixer(["#B60E73", "#0EAEB6"]) ? "#625E95"
// Lavender
Notes
Remember to round to the nearest integer the average of the rgb values.
You can test the color codes in any hexadecimal-colors utility site, such as this one that I used for testing cases.
All the given hexadecimal strings are valid; there are no exceptions to handle.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct{
	int red, green, blue;
} Color;

typedef enum {false=0, true} Bool;

Color constructColor(int red, int green, int blue){
	Color color;
	color.red = red;
	color.green = green;
	color.blue =  blue;
	return color;
}



Color hexToRGB(char color[8]){
	char code[4];
	sprintf(code, "%c%c", color[1], color[2]);
	int red = (int)strtol(code, NULL, 16);

	sprintf(code, "%c%c", color[3], color[4]);
	int green = (int)strtol(code, NULL, 16);

	sprintf(code, "%c%c", color[5], color[6]);
	int blue = (int)strtol(code, NULL, 16);

	return constructColor(red, green, blue);
}

const char* rgbToHex(Color color){
	char* hexColor = (char*)malloc(sizeof(char) * 8);
	hexColor[0] = '#';
	hexColor[1] = "0123456789ABCDEF"[color.red/16];
	hexColor[2] = "0123456789ABCDEF"[color.red%16];
	hexColor[3] = "0123456789ABCDEF"[color.green/16];
	hexColor[4] = "0123456789ABCDEF"[color.green%16];
	hexColor[5] = "0123456789ABCDEF"[color.blue/16];
	hexColor[6] = "0123456789ABCDEF"[color.blue%16];
	hexColor[7] = '\0';
	return hexColor;
}


Color mixColors(Color color1, Color color2){
	int red = (int)ceil((color1.red + color2.red)/2);
	int green = (int)ceil((color1.green + color2.green)/2);
	int blue = (int)ceil((color1.blue + color2.blue)/2);
	return constructColor(red, green, blue);
}

Color hexColorMixer(char colors[][8], int colorCount){
	int ind;
	Color finalColor = mixColors(hexToRGB(colors[0]), hexToRGB(colors[1]));
	for(ind = 2; ind < colorCount; ind++){
		finalColor = mixColors(finalColor, hexToRGB(colors[ind]));
	}
	return finalColor;
}

void printColor(Color color, Bool inHex){
	if(inHex){
		printf("%s\n", rgbToHex(color));
		return;
	}
	printf("rgb(%d, %d, %d)\n", color.red, color.green, color.blue);
}




int main()
{
	char input[255];
	printf("Enter colors to mix: ");
	gets(input);
	int indx = 0;
	char colorList[32][8] = {"#FFFF00", "#0000FF", "#B60E73", "#0EAEB6"}, *color;
	color = strtok(input, " ");
	while(color != NULL){
		strcpy(colorList[indx++], color);
		color = strtok(NULL, " ");
	}
	Color finalColor = hexColorMixer(colorList, indx);
	printColor(finalColor, true);
	printColor(finalColor, false);
}