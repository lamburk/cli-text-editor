#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<cstdlib>

using namespace std;

struct Node //Construct a Node Structure
{
	//Variables inside of the Node Structure
	struct Node *Next;

	string Line;
}
*Head; //Beginning Node

class MyEditor  //Construct MyEditor Class
{
public: //Public Variables

	MyEditor() //Make an empty Linked List to Start
	{
		Head = NULL; //Make the list equal to NULL
	}

	Node* CreateNode(string); //Function to Make a node

	void InsertLine(string LinetoInsert, int &LinePosition); //Function to Insert a Line at any Position Command I

	void DeleteALine(int LinePosition); //Function to Delete a line at any Position Command D

	void Append(string LinetoInsert); //Function to add a line at any Position Command Command A

	void ListDisplay(); //Function to Display what is in the text file and what changes have been made
	
	void SaveandExit(); //Function to Save the changes made to the text file
};


int main(int argc, char *argv[])
{

	//if(argc != 2)
	//{
	//	cout << "Number of arguments is wrong. Please include only the program name and the textfile in that order!" << endl;
	//	return 0;
	//}

	//Call all the variables;
	fstream file("Textfile.txt", ios::in);


}	