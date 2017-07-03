#include "C:\Users\kcs\Desktop\Simple_lib_code\Simple_lib_code\header.h"
#include "C:\Users\kcs\Desktop\Simple_lib_code\Simple_lib_code\body.cpp"

extern "C" _declspec(dllexport) double sumTwo(double var_x, double var_y)
{
	myClass MC(var_x, var_y);
	return MC.sum_XY();
}