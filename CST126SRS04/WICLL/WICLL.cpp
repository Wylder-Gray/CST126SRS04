// WICLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WICLL.h"


CSWoman::CSWoman(const char* const  name, const unsigned birthYear, const char* const fact): name_{name}, birthYear_{birthYear}, fact_{fact}
{
}

Node::Node(CSWoman woman, CSWoman* next) : woman_{ woman }, next_{ next }
{
}

void CSWoman::createList()
{
	CSWoman* womanArray[] = {
		new CSWoman("Ada Lovelace", 1815, "The first programmer"),
		new CSWoman("Edith Clarke", 1883, "Wrote Circuit Analysis of A-C Power Systems"),
		new CSWoman("Kathleen Antonelli", 1921, "One of the 6 original programmers of the ENIAC"),
		new CSWoman("Ruth Teitelbaum", 1924, "One of the 6 original programmers of the ENIAC"),
		new CSWoman("Frances Spance", 1922, "One of the 6 original programmers of the ENIAC"),
		new CSWoman("Grace Hopper", 1906, "Litterally debugged a computer"),
		new CSWoman("Evelyn Granville", 1924, "Participated in the space race"),
		new CSWoman("Mary Keller", 1913, "First woman to recieve a Ph.D in computer science"),
		new CSWoman("Carol Shaw", 1955, "Atari game developer"),
		new CSWoman("Radia Perlman", 1951, "Her mother was a programmer")
	};

	Node* WomanList[] = {
		new Node(*womanArray[0], womanArray[1]),
		new Node(*womanArray[1], womanArray[2]),
		new Node(*womanArray[2], womanArray[3]),
		new Node(*womanArray[3], womanArray[4]),
		new Node(*womanArray[4], womanArray[5]),
		new Node(*womanArray[5], womanArray[6]),
		new Node(*womanArray[6], womanArray[7]),
		new Node(*womanArray[7], womanArray[8]),
		new Node(*womanArray[8], womanArray[9]),
		new Node(*womanArray[9], nullptr)
	};
};
