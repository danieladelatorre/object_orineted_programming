#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char*argv[]){
	assert(argc>0); //makes sure that an argument was passed
	string word;
	int i;
	ifstream fin(argv[1]);  //opens the text file
	if(fin.fail()){ //if opening the text file failed it will return the following
		cerr << "Culd not open file " << argv[1] << endl;
		exit(1);
	}
	while(fin.good()){      //while the stream of the text file is good
		fin >> word;    //reads one word at a time and stores to the variable word
		string new_word = "";
		for(i=0; i<word.size(); i++){   //traverses through each letter in the word
			if(isalpha(word[i])){
				new_word += word[i];    //if the letter is alphanumeric it's added to the new word
			}
		}
		if(new_word.size()>=10){        //if length is >= 10 then it converts it to all upper case and prints it
			transform(new_word.begin(), new_word.end(), new_word.begin(), ::toupper);
			cout << new_word << "\n";
		}
	}
	fin.close();    //closes the text file
	return 0;
}
