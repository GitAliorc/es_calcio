#ifndef Calcio
#define Calcio
#include<iostream>

class Squadra{
    public:
        Squadra();
        void InsPartite(char tipo_partita, int numero_partite);
        void GolFatto(int numero_gol);
        void GolSubito(int numero_gol);
        void Punti();
        void InizioAnno();
        void Visualizza();
    
    private:
        int partiteVinte, partitePerse, partitePareggiate, golFatti, golSubiti;

};

#endif // !Calcio