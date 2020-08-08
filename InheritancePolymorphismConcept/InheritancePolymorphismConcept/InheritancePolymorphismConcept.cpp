// InheritancePolymorphismConcept.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Apple.cpp"

using namespace std;

int main()
{
	Apple redDel;
	redDel.toString();

	Apple gala = Gala();
	gala.toString();

	PinkLady pl = PinkLady();
	pl.setPrice(4.99);
	pl.toString();

	GrannySmith gs = GrannySmith();
	gs.setName("The Best Granny Smith");
	gs.toString();
}