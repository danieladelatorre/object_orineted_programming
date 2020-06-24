#include <iostream>
#include <string>

using namespace std;

void characters(string text){
	int alpha = 0;	//variable that holds # of alphanumeric characters
	int non_alpha = 0;	//variable that holds # of nonalphanumeric characters
	int i;
	for(i=0; i<text.size(); i++){	//traverses through each character in the string
		if(isalpha(text[i])){
			alpha++;
		} else if(!isspace(text[i]) && !isalpha(text[i])){
			non_alpha++;
		} else{	//if its a space, then it just continues without incrementing anything
			continue;
		}
	}
	cout << "There are " << alpha << " alphanumeric characters and " << non_alpha << " nonalphanumeric characters\n";
	return;
}

int main(){
	cout << "Enter any text \n";
	string inputs;
	getline(cin, inputs);	//copies entire string to the string inputs
	characters(inputs);	//calls the function above
	return 0;
} 
