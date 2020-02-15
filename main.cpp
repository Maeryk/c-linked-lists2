/// @author Gordon Bittner
/// I pledge my word of honor that I have abided 
/// by the CSN Academic Integrity Policy while completing 
/// this assignment. 
/// Chapter 17 Linked Lists
/// 4/29/2019
/// This is the second solution I had for problem #2.
/// I'm not sure which one you were looking for, but this one was
/// much easier than the other. If you can let me know which 
/// was correct I'd be greateful.
/// this particular part only took about 20 minutes, because
/// I had the functions done (aside from changing object names)


#include "addressType.h"
#include "addressBook.h"
#include <iostream>
#include <fstream>

///struct that will be our linked list with 2 objects
struct node{
	addressType obj1;
	addressBook obj2;
	node* next;
};

node *head;
node *tail;

//prototypes
void menu();
void createNode();
void insert();
void delData();
void writeData();
void printData();

int main()
{
	menu();
}
//menu function
void menu()
{
	int val;
	std::cout<<"Type 1 to enter create nodes: \n";
	std::cout<<"Type 2 to print node info. \n";
	std::cout<<"Type 3 to insert a new node at the end.\n";
	std::cout<<"Type 4 to delete a node.\n";
	std::cout<<"Type 5 to write to a file.\n";
	std::cout<<"Type 6 to exit.";
	
	std::cin>>val;
	
	//selections based off user input
	while(val != 6)
	{
		if(val < 1 || val > 6)
		{
			std::cout<<"Invalid value.";
		}
		else if(val == 1)
		{
			//calling the function to create nodes
			createNode();
		}
		else if(val==2)
		{
			//calling the function to print out node info
			printData();
		}
		else if(val == 3)
		{
			//calling the function to insert a node at the end of the list
			insert();
		}
		else if(val == 4)
		{
			//deleting an entry from the list
			delData();
		}
		else if(val == 5)
		{
			//writing node information to a file.
			writeData();
		}
		
		std::cout<<"Type 1 to enter create nodes: \n";
		std::cout<<"Type 2 to print node info. \n";
		std::cout<<"Type 3 to insert a new node at the end.\n";
		std::cout<<"Type 4 to delete a node.\n";
		std::cout<<"Type 5 to write to a file.\n";
		std::cout<<"Type 6 to exit.";
		
		std::cin>>val;
	}
}

//function to insert another node at the end
void insert()
{
	node *temp= new node;
	std::string lastName;
	std::string firstName;
	std::string address;
	std::string cityTemp;
	std::string stateTemp;
	int phoneNumber;
	int dayTemp;
	int monthTemp;
	int yearTemp;
	int zipTemp;
	std::cout<<"Enter the first name: ";
	std::cin>>firstName;
	std::cout<<"\nEnter the last name: ";
	std::cin>>lastName;
	std::cout<<"\nEnter the address: ";
	std::cin.clear();
	std::cin.ignore(180, '\n');
	std::getline(std::cin, address);
	std::cout<<"\nEnter the city: ";
	std::getline(std::cin, cityTemp);
	std::cout<<"\nEnter the state: ";
	std::getline(std::cin, stateTemp);
	std::cout<<"\nEnter the zip code: ";
	std::cin>>zipTemp;
	std::cout<<"\nEnter the phone number: ";
	std::cin>>phoneNumber;
	std::cout<<"\nEnter the year of birth: ";
	std::cin>>yearTemp;
	std::cout<<"\nEnter the month of birth: ";
	std::cin>>monthTemp;
	std::cout<<"\nEnter the day of birth: ";
	std::cin>>dayTemp;
	temp->obj1.setAdd(address);
	temp->obj1.setCity(address);
	temp->obj1.setState(address);
	temp->obj1.setZip(zipTemp);
	temp->obj2.setFname(firstName);
	temp->obj2.setLname(lastName);
	temp->obj2.setPnumber(phoneNumber);
	temp->obj2.setMonth(monthTemp);
	temp->obj2.setDay(dayTemp);
	temp->obj2.setYear(yearTemp);
	std::cout<<"If statement\n";
	if(head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}
	
//function to print all , or specific nodes
void printData()
{
	
	int pos;
	node *temp = new node;
	temp = head;
	std::cout<<"Type 0 to print all entries, or enter a specific position: ";
	std::cin>>pos;
	if(pos == 0)
	{
		//continues until a null value is reached, printing out all node
		//information
		while(temp != NULL)
		{
			std::cout<<"First Name: "<<temp->obj2.getFname()<<"\n";
			std::cout<<"Last Name: "<<temp->obj2.getLname()<<"\n";
			std::cout<<"Phone Number: "<<temp->obj2.getPnumber()<<"\n";
			std::cout<<"Address: "<<temp->obj1.getAdd()<<"\n";
			std::cout<<"City: "<<temp->obj1.getCity()<<"\n";
			std::cout<<"State: "<<temp->obj1.getState()<<"\n";
			std::cout<<"Zip code: "<<temp->obj1.getZip()<<"\n";
			std::cout<<"Date of Birth: "<<temp->obj2.getDay()<<"-"<<
			temp->obj2.getMonth()<<"-"<<temp->obj2.getYear()<<"\n\n\n";
			temp = temp->next;
		}
	}
	//continues until a specific number is reached, then prints a 
	//singular nodes info
	else {
		for(int i = 1; i < pos; i ++)
		{
			temp = temp->next;
		}
			std::cout<<"First Name: "<<temp->obj2.getFname()<<"\n";
			std::cout<<"Last Name: "<<temp->obj2.getLname()<<"\n";
			std::cout<<"Phone Number: "<<temp->obj2.getPnumber()<<"\n";
			std::cout<<"Address: "<<temp->obj1.getAdd()<<"\n";
			std::cout<<"City: "<<temp->obj1.getCity()<<"\n";
			std::cout<<"State: "<<temp->obj1.getState()<<"\n";
			std::cout<<"Zip code: "<<temp->obj1.getZip()<<"\n";
			std::cout<<"Date of Birth: "<<temp->obj2.getDay()<<"-"<<
			temp->obj2.getMonth()<<"-"<<temp->obj2.getYear()<<"\n\n\n";
	}
}
//function to delete a specific node
void delData()
{
	int position;
	std::cout<<"Which position would you like to delete?\n";
	std::cin>>position;
	
	node *curr = new node;
	node *prev = new node;
	curr = head;
	if(position == 1)
	{
		node *temp = new node;
		temp = head;
		head = head->next;
		delete temp;
	}
	else 
	{
		for(int i = 1;i<position;i++)
		{
			prev = curr;
			curr = curr->next;
		}
		prev->next = curr->next;
	}
}

//function to create nodes, continues until the user types 0
void createNode()
{
	
	std::string lastName;
	std::string firstName;
	std::string address;
	std::string cityTemp;
	std::string stateTemp;
	int phoneNumber;
	int dayTemp;
	int monthTemp;
	int yearTemp;
	int zipTemp;
	int check = 1;
	//continuous loop until the user types 0
	while(check != 0)
	{
		node *temp = new node;
		std::cout<<"\nEnter the first name: ";
		std::cin>>firstName;
		std::cout<<"\nEnter the last name: ";
		std::cin>>lastName;
		std::cout<<"\nEnter the address: ";
		std::cin.clear();
		std::cin.ignore(180, '\n');
		std::getline(std::cin, address);
		std::cout<<"\nEnter the city: ";
		std::getline(std::cin, cityTemp);
		std::cout<<"\nEnter the state: ";
		std::getline(std::cin, stateTemp);
		std::cout<<"\nEnter the zip code: ";
		std::cin>>zipTemp;
		std::cout<<"\nEnter the phone number: ";
		std::cin>>phoneNumber;
		std::cout<<"\nEnter the year of birth: ";
		std::cin>>yearTemp;
		std::cout<<"\nEnter the month of birth: ";
		std::cin>>monthTemp;
		std::cout<<"\nEnter the day of birth: ";
		std::cin>>dayTemp;
		
		//adding the values to the node spot
		temp->obj1.setAdd(address);
		temp->obj1.setCity(cityTemp);
		temp->obj1.setState(stateTemp);
		temp->obj1.setZip(zipTemp);
		temp->obj2.setFname(firstName);
		temp->obj2.setLname(lastName);
		temp->obj2.setPnumber(phoneNumber);
		temp->obj2.setMonth(monthTemp);
		temp->obj2.setDay(dayTemp);
		temp->obj2.setYear(yearTemp);

		// if / else statement, dependent upon if the node is the first or not
		if(head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
			std::cout<<"Enter 0 when finished, or type any other number to continue.";
			std::cin>>check;
	}
}

//function to write all, or specific nodes to a file
void writeData()
{
	node *curr = new node;
	curr = head;
	int pos;
	std::string fileName;
	std::cout<<"Enter 0 to write all data, or enter a specific position: ";
	std::cin>>pos;
	std::ofstream outData;
	std::cout<<"Enter the filename to write to: ";
	std::cin>>fileName;
	outData.open(fileName);
	
	if (pos == 0)
	{
		while(curr != NULL)
		{
			outData<<"First Name: "<<curr->obj2.getFname()<<"\n";
			outData<<"Last Name: "<<curr->obj2.getLname()<<"\n";
			outData<<"Phone Number: "<<curr->obj2.getPnumber()<<"\n";
			outData<<"Address: "<<curr->obj1.getAdd()<<"\n";
			outData<<"City: "<<curr->obj1.getCity()<<"\n";
			outData<<"State: "<<curr->obj1.getState()<<"\n";
			outData<<"Zip code: "<<curr->obj1.getZip()<<"\n";
			outData<<"Date of Birth: "<<curr->obj2.getDay()<<"-"
			<<curr->obj2.getMonth()<<"-"<<curr->obj2.getYear()<<"\n\n\n";
			curr = curr->next;
		}
	}
	else 
	{
		for(int i = 1; i< pos; i++)
		{
			curr = curr->next;
		}
		outData<<"First Name: "<<curr->obj2.getFname()<<"\n";
		outData<<"Last Name: "<<curr->obj2.getLname()<<"\n";
		outData<<"Phone Number: "<<curr->obj2.getPnumber()<<"\n";
		outData<<"Address: "<<curr->obj1.getAdd()<<"\n";
		outData<<"City: "<<curr->obj1.getCity()<<"\n";
		outData<<"State: "<<curr->obj1.getState()<<"\n";
		outData<<"Zip code: "<<curr->obj1.getZip()<<"\n";
		outData<<"Date of Birth: "<<curr->obj2.getDay()<<"-"
		<<curr->obj2.getMonth()<<"-"<<curr->obj2.getYear()<<"\n\n\n";
		curr = curr->next;
	}
}
