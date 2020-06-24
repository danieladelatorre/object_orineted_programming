#include <iostream>
#include <string>

using namespace std;

void reverse(string texts){
	int i, j;
	string spaces = " ";
	string reverse = "";	//initializes empty string
	for(i=texts.size(); i>=0; i--){	//traverses through each character backwards
		reverse += texts[i];	//adds each character to the empty string
	}
	for(j=0; j<5; j++){	//when printing it adds an extra space each time
		cout << spaces << texts << "     " << reverse << "\n";
		spaces += " ";
	}
	return;
}

int main(){
	cout << "Please enter a string of 10 digits with no space in between\n";
	string text;
	cin >> text;
	reverse(text);	//calls the function above
	return 0;
}
