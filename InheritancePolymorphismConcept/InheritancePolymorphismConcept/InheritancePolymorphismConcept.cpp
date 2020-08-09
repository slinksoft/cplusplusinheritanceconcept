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

	Apple pl = PinkLady();
	pl.setPrice(4.99);
	pl.toString();

	GrannySmith gs = GrannySmith();
	gs.setName("The Best Granny Smith");
	cout << "Above method call should be overriding superclass method\n" << endl;
	gs.toString();

	gala.setPrice(5.99);
	cout << "Above method call is called upon via superclass\n" << endl;
	cout << "New Gala Info:" << endl;

	gala.toString();

}