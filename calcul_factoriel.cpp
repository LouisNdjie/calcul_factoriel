#include <iostream>

unsigned int n = 0;
unsigned int fact = 1;
unsigned int i = 0;
int main (int argc, char** argv){
	
	std::cout<<"entrez le nombre dont on calculera le factoriel:";
	std::cin>>n;
	for(i=n; i>0; i--){
		fact = fact * i;
	}
	std::cout<<"le factoriel de "<<n<<" est:"<<fact;
	
	return 0; 
}