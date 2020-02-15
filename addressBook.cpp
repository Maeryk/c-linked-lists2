#include "addressBook.h"
#include "addressType.h"
#include <iostream>

//default constructor
addressBook::addressBook()
{
	fname = "n/a";
	lname = "n/a";
	pnumber = 0;
	month = 0;
	day = 0;
	year = 0;
}
///setters and getters

void addressBook::setFname(std::string firstName)
{
	fname = firstName;
}
void addressBook::setLname(std::string lastName)
{
	lname = lastName;
}
void addressBook::setPnumber(int pnum)
{
	pnumber = pnum;
}
void addressBook::setMonth(int monthTemp)
{
	month = monthTemp;
}
void addressBook::setDay(int dayTemp)
{
	day = dayTemp;
}
void addressBook::setYear(int yearTemp)
{
	year = yearTemp;
}
std::string addressBook::getFname()
{
	return fname;
}
std::string addressBook::getLname()
{
	return lname;
}
int addressBook::getPnumber()
{
	return pnumber;
}
int addressBook::getMonth()
{
	return month;
}
int addressBook::getDay()
{
	return day;
}
int addressBook::getYear()
{
	return year;
}
	
