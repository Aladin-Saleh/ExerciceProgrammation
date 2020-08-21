#include<iostream>
#include<vector>//Pour pouvoir utiliser des tableaux dynamiques

using namespace std;

int main()
{

    int val1(16);
    int valscan(6);

    int& val2(val1);
    string name("NONAME");

    printf("Hello World ! ");

    printf("Votre nom : ");
    /*getline(cin, name);  */       
     /* Le getline est comme le cin ou le scanf, il ne doit pas préceder un cin (je sais pas trop pourquoi) sauf si on met un cin.ignore entre,
                                 il permet de récuperer toute la ligne et pas seulement la premiere chaine avant l'espace*/
    cout << endl << "Votre nom est : " << name;

    cout << "Val1 : "<< val1 <<" Val2 : "<<val2<<endl << "Entrez votre valeur : ";    
    //cin >> valscan; // Equivalent du scanf en C
    
    cout <<"Votre valeur est : " <<  valscan<< endl;


    /*Les tablo*/

    int monJoliTablo[3]; // Tableau statique
    vector<int> monJoliTabloDynamique(3);//Tableau dynamique de taille 5

    monJoliTablo[0] = 28;
    monJoliTablo[1] = 56;
    monJoliTablo[2] = 16;

    printf("Mon tableau statique avec mes valeurs entree a la main : ");

    for (int i = 0; i < 3; i++)
    {
        cout << endl << monJoliTablo[i]<< endl;
    }


    monJoliTabloDynamique[0] = 2;
    monJoliTabloDynamique[1] = 27;
    monJoliTabloDynamique[2] = 4124;
    
    for (int i = 0; i < 3; i++)
    {
        cout << endl << monJoliTabloDynamique[i]<< endl;
    }

    monJoliTabloDynamique.push_back(78);//Le push_back permet d'ajouter une valeur à notre tableau, la commande inverse et pop_back 
    printf("Apres le push");

    for (int i = 0; i < 4; i++)
    {
        cout << endl << monJoliTabloDynamique[i]<< endl;
    }

    cout << "Taille du tablo : " << monJoliTabloDynamique.size(); // Récupère la taille du  tableau

  //Adresse et pointeur

  int varAdr = 2704124;
  int *pointeurDeMaVariable = &varAdr;



  cout <<endl<< "L'addresse est : " << &varAdr << endl;  
  cout << "Mon pointeur contient : " << pointeurDeMaVariable << " qui est l'addresse de varAdrr" << endl << "La valeur qui y est stocké est : "<< *pointeurDeMaVariable<<endl ;




string chaineDeCaractere = "Bien ou quoi";
string chaineDeCaractere2 = "mon gars ? ";
cout << chaineDeCaractere + " "  + chaineDeCaractere2 << endl; //concaténation de chaine de caractère
chaineDeCaractere2.erase();//erase permet de "vider" la chaine de caractère
cout << chaineDeCaractere + " "  + chaineDeCaractere2 << endl; 
cout << chaineDeCaractere + " "  + chaineDeCaractere2.substr(4) << endl; 



 

   
} 