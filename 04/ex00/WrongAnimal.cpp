#include "WrongAnimal.hpp"

/* --- Coplien ------------------------------------------------------------ */
WrongAnimal::WrongAnimal(std::string const & name) : _type(name) {
	std::cout	<< *this	<< "is generated by its Default Constructor. [WrongAnimal Class]"	<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : _type(src.getType()) {
	std::cout	<< *this	<< "is generated by its Copy Constructor. [WrongAnimal Class]"	<< std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout	<< *this	<< "is destructed by its Default Destructor. [WrongAnimal Class]"	<< std::endl;
}

WrongAnimal&				WrongAnimal::operator=(WrongAnimal const &src) {
	if (this != &src) {
		(*this) = src;
	}
	std::cout	<< *this	<< "is generated by its Assignment Operator. [WrongAnimal Class]"	<< std::endl;
	return (*this);
}
/* --- Coplien ------------------------------------------------------------ */



/* --- Getters / Setters -------------------------------------------------- */
std::string			WrongAnimal::getType(void) const {
	return this->_type;
}
/* --- Getters / Setters -------------------------------------------------- */



/* --- Others ------------------------------------------------------------- */
void				WrongAnimal::makeSound(void) const {
	std::cout	<< *this	<< "makes some wrong undistinguishable noises. [WrongAnimal Class]"	<<	std::endl;
}
/* --- Others ------------------------------------------------------------- */



/* --- Operators ---------------------------------------------------------- */
std::ostream &		operator<<(std::ostream &o, WrongAnimal const &animal) {

	std::cout	<< "["	<< animal.getType()	<< "] ";
	return o;
}
/* --- Operators ---------------------------------------------------------- */
