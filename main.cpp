//main.cpp file
#include <iostream>
#include <string>
#include "Frames.h"//includes the frame class

using namespace std;

const char* init[] = { "miami", "in the", "Autumn"};//given array to be framed

int main(){
	Picture p(init, 3);//creates an unframed pic
	cout << p << endl;//prints out the unframed pic

	Picture p_framed = frame(p);//framed the array 
	cout << p_framed << endl;//prints the framed array

	Picture q = frame(p_framed& (p | p_framed));//creates a vertically concatenated frame
	cout << q << endl;//prints the frame

	Picture r = (p_framed & p) | q;//creates a horizontallt concatenated frame
	cout << r << endl;//prints the frame

	Picture r_framed = frame(r);//creates a framed frame
	cout << r_framed << endl;//prints out the framed frame

	cin.get();
	return 0;
}