#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

// ---------------------------------------------------------
struct Node
{
	int	    frequency;		// relative weight
	string  symbol;			// symbol to be encoded
	string  bitCode;		// will store node's binary code
	bool	isleft;			// Tell whether the node is a left child
	Node*	left;			// pointers to left child
	Node*	right;			// pointer to right child
	Node*	parent;         // pointer to parent
	Node*	loc;			// location of this node

	Node(int freqValue, string symValue) {
		frequency = freqValue;
		symbol = symValue;
		bitCode = "";
		isleft = true;
		left = right = parent = nullptr;
		loc = this;
	}

	//this order will be enforced inside STL containers (multiset)
	bool operator< (const Node& other) const {
		return (this->frequency < other.frequency);
	}

	// operator<< is overloaded for debugging convenience
	friend ostream& operator<< (ostream& sout, const Node& n) {
		sout << " Node["

			<< "   left:  " << setw(6) << (n.left == nullptr ? "null" : n.left->symbol)
			<< ",  right: " << setw(6) << (n.right == nullptr ? "null" : n.right->symbol)
			<< ",  parent:" << setw(6) << (n.parent == nullptr ? "null" : n.parent->symbol)
			<< ",  isLeft:" << (n.isleft ? " T" : " F")
			<< ",  freq:  " << setw(3) << n.frequency
			<< ",  symbol:" << n.symbol
			<< "]";
		return sout;
	}
};





// -------------------------------------------------------------
int main()
{
	// TODO: implement the Huffman coding algorithm
	// Test your implementation with the plain text: MISSISSIPI
	// Output the binary code for each symbol in the text
	// ---------------------------------------------------------
	
	// Use the following frequency table to build your Huffman tree
	vector<pair<int, string>> v{ {4, "I"}, {1, "M"}, {4, "S"}, {2, "P"}, };


	

}