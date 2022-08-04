
//Ejercicio 1

#include <iostream>
using namespace std;



template <typename num>
num suma(num x,num y){
	return x+y;
}

template <typename num>
num resta(num x,num y){
	return x-y;
}

template <typename num>
num multiplicaion(num x,num y){
	return x*y;
}
template <typename num>
num division(num x,num y){
	return x/y;
}

int main(int argc, char *argv[]) {
	float a=10.9;
	float b=3.5;
	cout<<"suma "<<suma<float>(a,b)<<endl;
	cout<<"resta "<<resta<float>(a,b)<<endl;
	cout<<"multiplicaion "<<multiplicaion<float>(a,b)<<endl;
	cout<<"division "<<division<float>(a,b)<<endl;
	return 0;
}
//Ejercicio 2


#include <iostream>
#include <cstdlib>
using namespace std;



template<typename t>

class Node {
public:
	t data;
	Node* left;
	Node* right;
	
	Node(t val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

int main()
{
	
	Node<int> *root = new Node<int>(1);
	root->left = new Node<int>(2);
	root->right = new Node<int>(3);
	root->left->left = new Node<int>(4);
	root->left->left = new Node<int>(5);
	
	return 0;
}


//Ejercicio 3



#include<iostream>

//declaramos template T
template<class T>
	//creamos class Contendor
	class Contendor{
	//creamos un dato elemento de tipo T
	T elemento;
	public:
		//creamos constructor
		Contendor(T arg){
			elemento = arg;
		}
		// funcion de retorno de tipo T que aumenta en 1   
		T add(){return ++elemento;}
};
template<>
//creamos class Contendor
class Contendor<char>{
	//creamos un dato elemento de tipo char
	char elemento;
public:
	//creamos constructor
	Contendor(char arg){
		elemento=arg;
	}
	//funcion de retorno de tipo char que retorna una letra 
	//miniscula  a mayuscula
	char uppercase(){
		if((elemento>='a') && (elemento <='z')){
			elemento +='A'-'a';}
		return elemento;
	}
};
int main(){
	Contendor<int> cint (5);
	Contendor<char> cchar('t');
	std::cout<<cint.add()<<std::endl;
	std::cout<<cchar.uppercase()<<std::endl;
	
}
	
