#include <calcio.h>

Squadra::Squadra(){
    partitePareggiate = 0; partitePerse = 0; partiteVinte = 0;
    golFatti = 0; golSubiti = 0;
};

void Squadra::InizioAnno(){
    std::cout << std::endl; std::cout << std::endl;
    partitePareggiate = 0; partitePerse = 0; partiteVinte = 0;
};

void Squadra::InsPartite(char tipo_partita, int numero_partite){
    switch(tipo_partita){
        case 'V':
            partiteVinte =+ numero_partite;
            break;
        case 'v':
            partiteVinte =+ numero_partite;
            break;
        case 'P':
            partitePareggiate =+ numero_partite;
            break;
        case 'p':
            partitePareggiate =+ numero_partite;
            break;
        case 'S':
            partitePerse =+ numero_partite;
            break;
        case 's':
            partitePerse =+ numero_partite;
            break;
    };
};

void Squadra::Visualizza(){
    std::cout << std::endl << std::endl;
    std::cout << "******** TABELLONE ********" << std::endl
              << "Partite Vinte = " << partiteVinte << std::endl
              << "Partite Pareggiate = " << partitePareggiate << std::endl
              << "Partite Perse = " << partitePerse << std::endl
              << "+++++++++++++++++++++++++++" << std::endl
              << "Gol Fatti = " << golFatti << std::endl
              << "Gol Subiti = " << golSubiti << std::endl
              << "---------------------------" << std::endl
              << "Cosa devo fare?" << std::endl
              << "1)Inserire una partita" << std::endl
              << "2)Aggiungere un gol fatto" << std::endl
              << "3)Aggiungere un gol subito" << std::endl
              << "4)Calcolare i punti attuali" << std::endl
              << "5)Resettare le partite" << std::endl
              << "x)uscire dal programma" << std::endl
              << " >>> ";
};

void Squadra::GolFatto(int numero_gol){
    golFatti =+ numero_gol;
};

void Squadra::GolSubito(int numero_gol){
    golSubiti =+ numero_gol;
};

void Squadra::Punti(){
    int punteggio = partitePareggiate + (partiteVinte * 3);
    std::cout << std::endl;
    std::cout << "Punteggio attuale: " << punteggio;
    std::cout << std::endl;
};