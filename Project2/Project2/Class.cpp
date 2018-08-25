#include "Class.h"



Person::Person()
{
	age = 20;
	weight = 10.0f;
	height = 250.0f;
}
Person::Person(int tage, float tweight, float theight) {
	age = tage;
	weight = tweight;
	height = theight;

}

Person::~Person()
{
}
