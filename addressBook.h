//header file for addressBook
#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include "addressType.h"

//inherits from addressType
class addressBook: public addressType
{
	//private members of the addressBook class
	private:
		std::string fname;
		std::string lname;
		int pnumber;
		int month;
		int day;
		int year;
		
		public:
			//public functions
			addressBook();
			void setPnumber(int pnum);
			void setMonth(int monthTemp);
			void setDay(int dayTemp);
			void setYear(int yearTemp);
			void setFname(std::string firstName);
			void setLname(std::string lastName);
			std::string getFname();
			std::string getLname();
			int getPnumber();
			int getMonth();
			int getDay();
			int getYear();
};

#endif
			
		
