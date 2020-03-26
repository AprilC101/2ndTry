#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>

/*I DOU WHA I WAN*/
using namespace std;

/*
Class:Node, duh
Methods:get sets
Input/s: Node&, int&
Outputs: int, Node*
*/

class Node{
private:
	int value;
	Node* prev,* next;

public:
	Node();
	void set_value(int&);
	void set_prev(Node&);
	void set_next(Node&);
	int get_value();
	Node* get_prev();
	Node* get_next();
	~Node();
};

/*
Class:
Methods:
Input/s:
Outputs:
*/
/*
Class Layer{
private:
public:
};
*/

/*
FUNCTION DEFS
*/

Node::Node() {
	//take timespamp 1
	 value = 0;
	this->prev = nullptr;
	this->next = nullptr;
}

void::Node set_value(int& input_pass) {
	value = *input_pass;
}

void::Node set_prev(Node& prev_pass) {
	prev = prev_pass;
}

void::Node set_next(Node& next_pass) {
	next = next_pass;
}

int::Node get_value() {
	return value;
}

Node*::Node get_prev() {
	return prev;
}

Node*::Node get_next() {
	return next;
}

~Node::Node() {
	//take timestamp
	//calculate diff before destroyed
	value = 0;
	this->prev = nullptr;
	this->next = nullptr;
}

int main() {
	Node layer1[2];
	Node layer2[2];

	layer1[1].set_value(1);
	layer1[2].set_value(2);
	layer2[1].set_value(3);
	layer2[2].set_value(4);

	layer1[1].set_next(layer2[1]);
	layer1[2].set_next(layer2[2]);

	layer2[1].set_prev(layer1[1]);
	layer2[2].set_prev(layer[2]);

	cout << "**NODE VALUES**"
		<< "\nlayer1[1]" << layer[1]
		<< "\nlayer1[2]" << layer1[2]
		<< "\nlayer2[1]" << layer2[1]
		<< "\nlayer2[2]" << layer2[2] << endl;

	return 0;
}
//------------------------------------in Node.hpp
