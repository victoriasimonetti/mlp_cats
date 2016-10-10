// Exemplo de uso de containers (coleções abstratas) em C++
// Containers sao criados usando polimorfismo paramétrico
// compilar com -std=c++11
#include <iostream>
#include <vector> // em C++11 ha o tipo array - experimente e descubra a difereça!

#define SIZE 10 

int main(){  
   using namespace std;

   vector<int> vetor; // cria um vetor para armazenar números inteiros 
   int i=0;

   // verifica tamanho atual (original)
   cout << "Tamanho do vetor = " << vetor.size() << endl;
 
   // coloca alguns numeros no vetor
   cout << "Inserindo alguns elementos..." << endl; 
   for(i = 0; i < SIZE; i++){
      vetor.push_back(i); // adiciona no final do vetor
   }
 
   // verifica tamanho atual
   cout << "Tamanho do vetor = " << vetor.size() << endl;

   // mostrando elementos adicionados
   for(i = 0; i < SIZE; i++){
      cout << "vetor[" << i << "] = " << vetor[i] << endl;
   }

   // usando iterador para acessar os elementos do vetor 
   vector<int>::iterator elemento = vetor.begin(); 
   i=0;
   while( elemento != vetor.end()) {
      cout << " elemento " << i++ << " = " << *elemento << endl;
      elemento++; 
   }
  
   return 0;
}

