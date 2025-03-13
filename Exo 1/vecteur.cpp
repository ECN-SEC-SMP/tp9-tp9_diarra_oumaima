#include <vector>
#include <iostream>
#include <iterator> 

using namespace std;
int main(){

    vector<int> vec(3);//définissez d’un vecteur stockant des entiers sans spécifier de taille

    //affichage de la taille du vec :
    cout << "taille : " << vec.size() << endl;

    for (int i=0 ; i<vec.size(); i++) { // dimensionnez le a une taille de 3
        vec.push_back(i);
        }

    //affichage à l’aide d’un itérateur :
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << endl;
    }
    
    //affichage à l'aide des indices
     for (int i(0) ; i < vec.size() ; i++) {
        cout << vec[i] << endl;
     }
     //affichage par la boucle range for
     for (int &x : vec) {
        cout << x << endl;//x prends les valeur du vec et les affiche 
    }
    //mo
     

    

    
}