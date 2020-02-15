//header file for addressType class
#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H
#include <iostream>

class addressType
{
	//members are protected, couldn't figure out how to get 
	//the list to point here while using setters. It kept resetting
	//the values to the default constructor
	private:
		std::string add;
		std::string city;
		std::string state;
		int zip;
		
		
	public:
		//public functions
		addressType();
		void setValues(std::string address, std::string cityTemp,
		std::string stateTemp, int zipTemp);
		void setAdd(std::string addTemp);
		void setCity(std::string cityTemp);
		void setState(std::string stateTemp);
		void setZip(int zipTemp);
		std::string getAdd();
		std::string getCity();
		std::string getState();
		int getZip();
		
};

#endif
