
/*
Instructions
	Create a C++ program that will perform the following:

		1. Binary Search
		2. Selection Sort
		3. Insertion Sort
		4. Bubble Sort
    	5. Merge Sort

	The program must be able to:

		1. give a random set of numbers
		2. allow user to choose what to do with the given numbers
*/ 

#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;



//GLOBAL VARIABLES
int randomNumbers[10];
string descriptions = "";

//DESIGN
void maximizeWindow() {
	HWND console = GetConsoleWindow();
    ShowWindow(console, SW_MAXIMIZE);
}

void titleHorizontalLine() {
	for(int indexA=1; indexA<70; indexA++) {
	cout<<char(205);
	}
}

void arrayTopHorizontalLine() {
	for(int indexA=1; indexA<70; indexA++) {
	cout<<char(205);
	}
}

void arrayHorizontalLine() {
	for(int indexA=1; indexA<=10; indexA++) {
	cout<<char(205)<<char(205)<<char(205)<<char(203);
	}
}

void menuHorizontalLine() {
	for(int indexA=1; indexA<=53; indexA++) {
	cout<<char(205);
	}
}


//TITLE
void title() {
	cout<<"\t\t\t\t\t"<<char(201);				titleHorizontalLine();								cout<<char(187)<<endl; usleep(30000);
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl; usleep(30000);
    cout<<"\t\t\t\t\t"<<char(186)<<"                CP103: Data Structures and Algorithm                 "<<char(186)<<endl; usleep(30000);
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl; usleep(30000);
    cout<<"\t\t\t\t\t"<<char(200);				titleHorizontalLine();								cout<<char(188)<<endl;	usleep(30000);
}


//THANK YOU
void thankYou() {
	cout<<"\t\t\t\t\t"<<endl<<endl;
	cout<<"\t\t\t\t\t"<<char(201);		titleHorizontalLine();										cout<<char(187)<<endl; usleep(30000);
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl; usleep(30000);
    cout<<"\t\t\t\t\t"<<char(186)<<"                             THANK YOU                               "<<char(186)<<endl; usleep(30000);
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl; usleep(30000);
    cout<<"\t\t\t\t\t"<<char(200);		titleHorizontalLine();										cout<<char(188)<<endl; usleep(30000);
	cout<<endl<<endl;	
}



//GENERATE RANDOM NUMBER
int autoGenerateNumbers() {
	srand(static_cast<unsigned int>(time(0)));
	int lowerBound = 1;
    int upperBound = 99;
    
	// Generate and store random numbers in the array
    for (int indexA= 0; indexA<10; ++indexA) {
        randomNumbers[indexA] = rand() % (upperBound - lowerBound + 1) + lowerBound;
    }
}

//DISPLAY ARRAY
int displayArray() {
	cout<<endl<<endl;

	cout<<"\t\t\t\t\t"<<char(201);		arrayTopHorizontalLine();									cout<<char(187)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                        RANDOM SET OF NUMBERS                        "<<char(186)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl;
	
	//loop for middle horizontal line in set of numbers
	cout<<"\t\t\t\t\t"<<char(204);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
		cout<<char(203);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
	cout<<char(185)<<endl;
	
	//loop for below space line in set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
		cout<<char(186);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
	cout<<char(186)<<endl;
	
	//loop for set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<10; indexA++) {
        cout <<"  "<< setw(2) << setfill(' ') << randomNumbers[indexA] <<"  "<< char(186);
    }
    cout<<endl;
    
	//loop for below space line in set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
		cout<<char(186);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
	cout<<char(186)<<endl;
    
	//loop for below horizontal line in set of numbers
	cout<<"\t\t\t\t\t"<<char(200);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
		cout<<char(202);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
	cout<<char(188)<<endl<<endl;
}


//BOX FOR SET OF NUMBERS
int boxForSetOfNumbers() {
	cout<<"\t\t\t\t\t"<<descriptions<<endl;
	
	//loop for middle horizontal line in set of numbers
	cout<<"\t\t\t\t\t"<<char(201);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
		cout<<char(203);
    }

	for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
	cout<<char(187)<<endl;
	
	//loop for below space line in set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
		cout<<char(186);
    }

	for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
	cout<<char(186)<<endl;
	
	//loop for set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<10; indexA++) {
        cout <<"  "<< setw(2) << setfill(' ') << randomNumbers[indexA] <<"  "<< char(186);
    }
    cout<<endl;
    
	//loop for below space line in set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
		cout<<char(186);
    }

	for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
	cout<<char(186)<<endl;
    
	//loop for below horizontal line in set of numbers
	cout<<"\t\t\t\t\t"<<char(200);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
		cout<<char(202);
    }

	for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
	cout<<char(188)<<endl;
}


//DISPLAY THE SORTED ARRAY
int displaySortedArray() {
	cout<<endl<<endl;

	cout<<"\t\t\t\t\t"<<char(201);		arrayTopHorizontalLine();									cout<<char(187)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                        SORTED SET OF NUMBERS                        "<<char(186)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl;
	
	//loop for middle horizontal line in set of numbers
	cout<<"\t\t\t\t\t"<<char(204);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
		cout<<char(203);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
	cout<<char(185)<<endl;
	
	//loop for below space line in set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
		cout<<char(186);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
	cout<<char(186)<<endl;
	
	//loop for set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<10; indexA++) {
        cout <<"  "<< setw(2) << setfill(' ') << randomNumbers[indexA] <<"  "<< char(186);
    }
    cout<<endl;
    
	//loop for below space line in set of numbers
	cout<<"\t\t\t\t\t"<<char(186);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
		cout<<char(186);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<" ";
		}
	cout<<char(186)<<endl;
    
	//loop for below horizontal line in set of numbers
	cout<<"\t\t\t\t\t"<<char(200);
	for (int indexA=0; indexA<9; indexA++) {
		for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
		cout<<char(202);
    }
	for (int indexA=0; indexA<6; indexA++) {
			cout<<char(205);
		}
	cout<<char(188)<<endl;
}



//MENU
void mainMenu() {
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<char(201);		menuHorizontalLine();						cout<<char(187)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
	    cout<<"\t\t\t\t\t\t"<<char(186)<<"           1.   BINARY SEARCH                        "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
	    cout<<"\t\t\t\t\t\t"<<char(186)<<"           2.   SELECTION SORT                       "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
	    cout<<"\t\t\t\t\t\t"<<char(186)<<"           3.   INSERTION SORT                       "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
	    cout<<"\t\t\t\t\t\t"<<char(186)<<"           4    BUBBLE SORT                          "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
	    cout<<"\t\t\t\t\t\t"<<char(186)<<"           5.   MERGE SORT                           "<<char(186)<<endl; usleep(30000);
	   	cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
	    cout<<"\t\t\t\t\t\t"<<char(204);		menuHorizontalLine();						cout<<char(185)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"           9.   GENERATE NEW SET OF NUMBERS          "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"           0.   EXIT                                 "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(186)<<"                                                     "<<char(186)<<endl; usleep(30000);
		cout<<"\t\t\t\t\t\t"<<char(200);		menuHorizontalLine();						cout<<char(188)<<endl; usleep(30000);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//SELECTION SORT
void swap(int& num1SS, int& num2SS) {
    int temp = num1SS;
    num1SS = num2SS;
    num2SS = temp;
}

int selectionSortProgram() {
    for (int indexA = 0; indexA < 10 - 1; ++indexA) {
        // Find the minimum element in the unsorted part
        int minIndex = indexA;
        for (int j = indexA + 1; j < 10; ++j) {
            if (randomNumbers[j] < randomNumbers[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(randomNumbers[indexA], randomNumbers[minIndex]);
        
        //PAUSE
        system("PAUSE");

        // Print the array at this step
        cout << "\t\t\t\t\t Step " << indexA + 1 << ": ";
		boxForSetOfNumbers();
        cout << endl;
    }
}

int mainselectionSort() {
	
    selectionSortProgram();
    displaySortedArray();
    cout << endl;

    return 0;
}	

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//MAIN PROGRAM
int main() {
	
	int selectType;

	
	mainProgram:
		maximizeWindow();
		system("CLS");
		title();	
		displayArray();							
		mainMenu();
			
		
		//MAIN MENU PROGRAM
		cout<<endl<<"\t\t\t\t\t\t Select: ";
		cin>>selectType;
		cout<<endl<<endl;
		
		switch(selectType) {
		case 0: {
			system("CLS");
			thankYou();
			break;
		}
		
		case 1: {
			caseBinarySearch:
				system("CLS");
				displayArray();
				thankYou();
				break;
		}
		
		case 2: {
			caseSelectionSort:
				system("CLS");
				displayArray();
				mainselectionSort();
				thankYou();
				break;
		}
		
		case 3: {
			caseInsertionSort:
				system("CLS");
				displayArray();
		}
		
		case 4: {
			caseBubbleSort:
				system("CLS");
				displayArray();
				thankYou();
				break;
		}
		
		case 5: {
			caseMergeSort:
				system("CLS");
				displayArray();
				thankYou();
				break;
		}
		
		case 9: {
			caseGenerateNumbers:
				autoGenerateNumbers();
				goto mainProgram;
		}
				
		default: {
			caseDefault:
				system("CLS");
				goto mainProgram;
		}
	}						
}




