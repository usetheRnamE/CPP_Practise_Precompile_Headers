#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

#define END_LINE "\n"

template<typename T>
static void Print(T value)
{
	std::cout << value << END_LINE;
}