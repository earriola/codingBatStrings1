#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>
using namespace std;

string makeTags(string one, string two);

int main()
{
	assert(makeTags("i", "Yay") == "<i>Yay</i>");
	assert(makeTags("i", "Hello") == "<i>Hello</i>");
	assert(makeTags("cite", "Yay") == "<cite>Yay</cite>");
	assert(makeTags("g", "Micheal") == "<g>Micheal</g>");
	assert(makeTags("a", "Emmanuel") == "<a>Emmanuel</a>");
	
	return 0;
}

string makeTags(string one, string two)
{
	string results;
	
	results = "<" + one + ">" + two + "</" + one + ">";

	return results;
}
