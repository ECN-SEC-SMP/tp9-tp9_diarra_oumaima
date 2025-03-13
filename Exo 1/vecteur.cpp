#include <vector>
#include <iostream>
#include <iterator> 

using namespace std;
int main(){

    vector<int> vec ={0,1,2};//définissez d’un vecteur stockant des entiers sans spécifier de taille
   // vec.resize(3);//définition de la taille
    //affichage de la taille du vec :
    cout << "taille : " << vec.size() << endl;
    static int j;
    j=vec.size();
    for (int i=0 ; i<j; i++) { // dimensionnez le a une taille de 3
        vec.push_back(i);
        }

    //affichage à l’aide d’un itérateur :
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << endl;
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
    //ajout d'un nouvel element
    vec.push_back(4);

    //taille apres affichage :
    cout << "Taille après ajout d'un élément : " << vec.size() << endl;

    //ajout d'un vecteur de copie assign
    vector<int> vec_copy1;
    vec_copy1.assign(vec.begin(), vec.end());

    //ajout d'un vecteur de copie par copy
    vector<int> vec_copy2(vec.size());
    copy(vec.begin(), vec.end(), vec_copy2.begin());

}

    

    

