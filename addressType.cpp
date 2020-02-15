#include <iostream>
#include "addressType.h"

//default constructor
addressType::addressType()
{
	add = "n/a";
	city = "n/a";
	state = "n/a";
	zip = 0;
}
//function to set values
void addressType::setValues(std::string address, std::string cityTemp,
std::string stateTemp, int zipTemp)
{
	add = address;
	city = cityTemp;
	state = stateTemp;
	zip = zipTemp;
}
//setters and getters
void addressType::setAdd(std::string addTemp)
{
	add = addTemp;
}
void addressType::setCity(std::string cityTemp)
{
	city = cityTemp;
}
void addressType::setState(std::string stateTemp)
{
	state = stateTemp;
}
void addressType::setZip(int zipTemp)
{
	zip = zipTemp;
}

std::string addressType::getAdd()
{
	return add;
}
std::string addressType::getCity()
{
	return city;
}
std::string addressType::getState()
{
	return state;
}
int addressType::getZip()
{
	return zip;
}



