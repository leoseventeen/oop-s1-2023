<<<<<<< Updated upstream
#include<iostream>
#include<string>

void printer(int array[10][10]){

int rows= sizeof(*array[0])/sizeof(*array[0]);
int cols= sizeof(*array)/sizeof(*array[0]);

for (int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
std::cout<<array[i][j];
if (j<cols-1)
std::cout<<"";
    }
}
std::cout<<""<<std::endl;
}

=======
#include<iostream>
#include<string>

void printer(int array[10][10]){

int rows= sizeof(*array[0])/sizeof(*array[0]);
int cols= sizeof(*array)/sizeof(*array[0]);

for (int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
std::cout<<array[i][j];
if (j<cols-1)
std::cout<<"";
    }
}
std::cout<<""<<std::endl;
}

#include <iostream>
using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents) {

cout << "Report Card: ";

for(int i = 0; i<4; i++) {

cout << courses[i] << " ";

}

cout << endl;

for(int i=0; i<nstudents; i++) {

cout << students[i] << " ";

for(int j=0; j<4; j++) {

cout << report_card[i][j] << " ";

}

cout << endl;

}

}

int main() {

string courses[4] = {"OOP", "Statistics", "Electronics", "Quantum Mechanics"};

string students[2] = {"Joe", "Bethany"};

int report_card[2][4] = {{100, 70, 50, 25}, {100, 100, 50, 75}};

print_class(courses, students, report_card, 2);

}
>>>>>>> Stashed changes
