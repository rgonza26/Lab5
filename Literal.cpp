#include "Literal.hpp"

template <typename T> Literal<T>::Literal() : Token(){
	this->value = 0x0;
}

template <typename T> Literal<T>::Literal(T value) : Token(){
	this->value = value;
}

template <typename T> Literal<T>::~Literal(){

}

template <typename T> T Literal<T>::getValue(){
	return this->value;
}

template <typename T> void Literal<T>::setValue(T value){
	this->value = value;
}
