//Author: Emmanuel, Miquel
//Date: April 24, 2017
//Class: ITSE 2421 - Object Oriented Programming
//Instructor: Prof. Welch
//Problem Descr: Solve String-1 Coding Bat exercises

#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>
using namespace std;

string makeTags(string one, string two);
string makeOutWord(string one, string two);
string extraEnd(string one);
string firstTwo(string one);
string firstHalf(string one);

int main()
{
	assert(makeTags("i", "Yay") == "<i>Yay</i>");
	assert(makeTags("i", "Hello") == "<i>Hello</i>");
	assert(makeTags("cite", "Yay") == "<cite>Yay</cite>");
	assert(makeTags("g", "Micheal") == "<g>Micheal</g>");
	assert(makeTags("a", "Emmanuel") == "<a>Emmanuel</a>");
	
	assert(makeOutWord("<<>>", "Yay") == "<<Yay>>");
	assert(makeOutWord("<<>>", "WooHoo") == "<<WooHoo>>");
	assert(makeOutWord("[[]]", "word") == "[[word]]");
	assert(makeOutWord("!!!!", "Art") == "!!Art!!");
	assert(makeOutWord("~~~~", "Major") == "~~Major~~");
	
	assert(extraEnd("Hello") == "lololo");
	assert(extraEnd("ab") == "ababab");
	assert(extraEnd("Hi") == "HiHiHi");
	assert(extraEnd("Art") == "rtrtrt");
	assert(extraEnd("Major") == "ororor");
	
	assert(firstTwo("Hello") == "He");
	assert(firstTwo("abcdefg") == "ab");
	assert(firstTwo("ab") == "ab");
	assert(firstTwo("Art") == "Ar");
	assert(firstTwo("Major") == "Ma");
	
	assert(firstHalf("WooHoo") == "Woo");
	assert(firstHalf("HelloThere") == "Hello");
	assert(firstHalf("abcdef") == "abc");
	assert(firstHalf("Object") == "Obj");
	assert(firstHalf("Oriented") == "Orie");
	
	
	
	return 0;
}

string makeTags(string one, string two)
{
	string results;
	
	results = "<" + one + ">" + two + "</" + one + ">";

	return results;
}

string makeOutWord(string one, string two)
{
	string results = one;
	int const POSITION = 2;
	
	results.insert(POSITION, two);
	
	return results;
}

string extraEnd(string one)
{
	string results;
	int length = 0;
	
	length = one.length();
	length = length - 2;
	one = one.substr(length, 2);
	results = one + one + one;
	
	
	return results;
}

string firstTwo(string one)
{
	string results;

	one = one.substr(0, 2);
	results = one;
	
	return results;
}

string firstHalf(string one)
{
	string results;
	int length = 0;
	
	length = one.length();
	length = length / 2;
	
	one = one.substr(0, length);
	results = one;

	return results;
}
