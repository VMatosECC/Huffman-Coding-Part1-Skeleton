// Huffman-Coding-Part1-Skeleton.cpp 

#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

// ---------------------------------------------------------
struct HNode
{
	int		frequency;		// relative weight
	string	symbol;			// symbol to be encoded
	string  bitLabel;		// will store node's binary code
	bool	isLeft;			// Tell whether node is left or right child
	HNode*	left;			// pointer to left child
	HNode*	right;			// pointer to right child
	HNode*	parent;			// pointer to parent node
	HNode*	loc;			// location of this node

	HNode(int freqValue, string symValue) {
		frequency = freqValue;
		symbol    = symValue;
		bitLabel  = "";
		isLeft    = true;
		loc       = this;
		left = right = parent = nullptr;
	}

	//Use frequency to order nodes in the multiset container (minHeap)
	bool operator< (const HNode& other) const {
		return (this->frequency < other.frequency);
	}

	// operator<< is overloaded for debugging convenience
	friend ostream& operator<< (ostream& os, HNode& n) {
		os << " HNode["
			//<< " bitLabel:" << n.bitLabel
			<< " loc:" << n.loc
			<< " left:" << n.left << " right:" << n.right
			//<< ", parent:" << n.parent
			<< " isLeft:" << (n.isLeft ? "T" : "F")
			<< " freq:" << setw(3) << n.frequency
			<< " symbol:" << n.symbol
			<< "]";
		return os;
	}
};

// ---------------------------------------------------------
int main()
{
	//TODO: implement the Huffman coding algorithm
}