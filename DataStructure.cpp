
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
const string SORTED = "SORTED";
const string RANDOM = "RANDOM";


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


//DISPLAY ARRAY
int displayArray(string descriptions) {
	cout<<endl<<endl;

	cout<<"\t\t\t\t\t"<<char(201);		arrayTopHorizontalLine();									cout<<char(187)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                                                                     "<<char(186)<<endl;
	cout<<"\t\t\t\t\t"<<char(186)<<"                        "<<descriptions<<" SET OF NUMBERS                        "<<char(186)<<endl;
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
	cout<<endl;
	
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


//SELECTION SORT
int programSelectionSort() {
	
    for (int indexA = 0; indexA < 10 - 1; ++indexA) {
        // Find the minimum element in the unsorted part
        int minIndex = indexA;
        for (int indexB = indexA + 1; indexB < 10; ++indexB) {
            if (randomNumbers[indexB] < randomNumbers[minIndex]) {
                minIndex = indexB;
            }
        }

        // Swap the found minimum element with the first element
        int temp = randomNumbers[indexA];
        randomNumbers[indexA] = randomNumbers[minIndex];
        randomNumbers[minIndex] = temp;
        
        //PAUSE
        system("PAUSE");

		// Display the current step and the array state
        cout << "\t\t\t\t\t Step " << indexA + 1 << ":   From previous table, Select the minimum element in the unsorted part\n";
        cout << "\t\t\t\t\t\t   Swap " << randomNumbers[minIndex] << " (at index " << minIndex << ") and " << randomNumbers[indexA] << " (at index " << indexA << ")\n";
        cout << "\t\t\t\t\t\t   After swapping, the array becomes:\n";
    
		boxForSetOfNumbers();
        cout << endl;
    }
    
    displayArray(SORTED);
    cout << endl;

    return 0;
}	


//INSERTION SORT
int programInsertionSort() {
    for (int currentIndex = 1; currentIndex < 10; ++currentIndex) {
        int key = randomNumbers[currentIndex];
        int insertionIndex = currentIndex - 1;

        // Move elements greater than key to one position ahead
        while (insertionIndex >= 0 && randomNumbers[insertionIndex] > key) {
            randomNumbers[insertionIndex + 1] = randomNumbers[insertionIndex];
            --insertionIndex;
        }

        // Insert the key into its correct position
        randomNumbers[insertionIndex + 1] = key;
        
        //PAUSE
        system("PAUSE");

        // Show the current step and how the list looks now
        cout << "\t\t\t\t\t Step " << currentIndex << ":   Pick " << key << " and insert it where it fits.\n";
        cout << "\t\t\t\t\t\t   After this step, the list looks like this:\n";

    
		boxForSetOfNumbers();
        cout << endl;
    }
    
    displayArray(SORTED);
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
		autoGenerateNumbers();
		maximizeWindow();
		system("CLS");
		title();	
		displayArray(RANDOM);							
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
				displayArray(RANDOM);
				thankYou();
				break;
		}
		
		case 2: {
			caseSelectionSort:
				system("CLS");
				displayArray(RANDOM);
				programSelectionSort();
				thankYou();
				break;
		}
		
		case 3: {
			caseInsertionSort:
				system("CLS");
				displayArray(RANDOM);
				programInsertionSort();
				thankYou();
				break;
		}
		
		case 4: {
			caseBubbleSort:
				system("CLS");
				displayArray(RANDOM);
				thankYou();
				break;
		}
		
		case 5: {
			caseMergeSort:
				system("CLS");
				displayArray(RANDOM);
				thankYou();
				break;
		}
		
		case 9: {
			caseGenerateNumbers:
				system("CLS");
				goto mainProgram;
		}
				
		default: {
			caseDefault:
				system("CLS");
				goto mainProgram;
		}
	}						
}




