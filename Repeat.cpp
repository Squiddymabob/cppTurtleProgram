#include  "Repeat.h"
#include  "Command.h"
#include "Prog.h"


// Constructor
Repeat::Repeat(){

}

// Destructor
Repeat::~Repeat(){

}

istream& operator>> (istream& in, Repeat& r){

// Overloading operator
// Setting v
    
	char c;
	in >> r.v >> ws >> c;
	
// If get to a bracket then run prog of the commands in the brackets
	if(c == '['){
		in >> r.pg;
	}

return in;

}

void Repeat::Run() {

    // Run the repeat for the number of times it was specified
    // This is the v for repeat
    
    
	for (int i = 0; i < v; i++){
	pg.Run();
	cout << "REPEAT";
}

}
