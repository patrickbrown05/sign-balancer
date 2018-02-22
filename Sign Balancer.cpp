#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ifstream input1; 	
	ifstream input2;						
		//("C:\\Users\\patrick.brown05\\Desktop\\school\\Computer science\\COM 301\\algorithms project");
	input1.open("Hello_World_Wrong.txt", ios::in);  

	 //opening the file to read
	int i = 0;

	//int i for the various loops
	int num_characters = 0; 

	//an integer to count the number of characters in the array
	stack <char> mystack1;

	//declaring the stack for storing the opening of the [ { ( symbols
	char array1[ 101 ];        // Array to read into 

	

	if (input1.is_open()) {          
	  //only running if the file is open
	cout << "the file is open \n";
	//outputting that the loop is running
		while (!input1.eof()){
			//while its not the end of the file
			input1 >> array1[i];
			//inputting into the array whatever value is at i
			i++;
			//incrementing i
			num_characters++;
			//counting the number of characters in the file
		}
}

	//	for (i = 0; i < num_characters-1; i++) //outputting what is in the file
	//	cout << array1[i];
	
	for (i = 0; i < num_characters; i++){ //looking for the various symbols saved to the array from the text file
	if (array1[i] == '[')	//if there is a [ symbol it is pushed into the stack
    mystack1.push(array1[i]); 
    if (array1[i] == ']')	//if there is a ] symbol the stack is popped
    mystack1.pop();
    if (array1[i] == '{')	//if there is a { symbol it is pushed into the stack
	mystack1.push(array1[i]);
	if (array1[i] == '}')	//if there is a } symbol the stack is popped
    mystack1.pop();
	if (array1[i] == '(')	//if there is a ( symbol it is pushed into the stack
    mystack1.push(array1[i]);
    if (array1[i] == ')')	//if there is a ) symbol the stack is popped
	mystack1.pop();
	}
	
	cout << "\n"; //clearing a new line for the output
	if (mystack1.empty() )  //if the stack is empty
	cout << "this code has no syntax errors! \n";  //then the code has no errors
	else
	cout << "this code has syntax errors \n"; //otherwise there are syntax errors
	
	input1.close();
	

return 0;		
}

