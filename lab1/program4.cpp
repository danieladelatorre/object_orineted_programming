#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "Think of a number between 1 and 20. Press enter when you are ready\n";
	int i;
	string response;
	for(i=1;i<21;i++){	//traverses through numbers 1 throguh 20
		cout << "Is the number " << i << "?\n";
		cin >> response;
		if(response == "y" || response == "yes"){
			cout << "I found the number in " << i << " guesses\n";	//if yes, then number is found so it prints the number of guesses it took
			break;
		} else if(response== "n" || response == "no"){
			continue;
		}else{
			while(response!= "n" || response != "no" || response!= "y" || response != "yes"){	//if answer is not valid it will keep asking until they give a valid response
				cout << "You can only respond in y, n, yes, or no\n";
				cin >> response;	//updates the response
				if(response== "n" || response == "no"){
					break;	//breaks out of the while loop if they give a valid response
				}
				if(response == "y" || response == "yes"){
					cout << "I found the number in " << i << " guesses\n";
					return 1;
				}
			}
		}
	}
	return 0;
}
