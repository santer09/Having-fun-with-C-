//header file Frames.h
#ifndef _Picture_Frames_
#define _Picture_Frames_

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Picture{
	//overload the stream extraction operator
	friend ostream& operator <<(ostream& os, const Picture& p);
	friend Picture frame(Picture const& p);
	//bitor operator overload (Bitwise inclusive OR)
	friend Picture operator |(Picture const& p1, Picture const& p2);
	//bitand operator overload (Bitwise AND)
	friend Picture operator &(Picture const& p1, Picture const& p2);
public:
	//default constructor to initialize the string to null
	Picture();
	//constructor 
	Picture(int height, int width);
	//constructor; conversion from the char string
	Picture(const char *str[], int size);
	//copy constructor
	Picture(const Picture&);
	//destructor
	~Picture();
	//overload assignment operator
	Picture& operator =(const Picture& p);
private:
	//copies all characters from other (starting at 0,0) to this picture, but starting at r, c
	void blockcopy(int row, int col, Picture const& other);
	char& position(int row, int col);
	char position(int row, int col) const;
	static int max(int row, int col);
private:
	//hold the amount of lines the char array will be printed or height of the frame
	int _height;
	//holds the width of the frame
	int _width;
	//pointer to the char array that holds the string/ dynamically alocated array
	char* _data;
};

#endif

/*The class Picture has three private member variables: one to store the array of characters and the other
to get the length of the array and another to get the numbers of lines on which the character will be printed. 
It also contains a private function to copy all characters from other array to 
the new picture, but starting at r, c*/
