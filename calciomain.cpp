#include "calcio.h"

int main(){
    int scelta;
    Squadra s;
    loop:
    s.Visualizza();
    std::cin >> scelta;
    switch (scelta)
    {
    case 1:
        int n_p; char t_p;
        std::cout << "Che tipo di partita devo inserire? (V = vittoria, P = pareggio, S = sconfitta) " << "> ";
        std::cin >> t_p;
        std::cout << "Quante partite devo inserire? " << "> "; std::cin >> n_p;
        s.InsPartite(t_p, n_p);
        goto loop;
    
    case 2:
        int n_g_f;
        std::cout << "Quanti gol fatti aggiungo? " << "> "; std::cin >> n_g_f;
        s.GolFatto(n_g_f);
        goto loop;
    
    case 3:
        int n_g_s;
        std::cout << "Quanti gol subiti aggiungo?" << "> "; std::cin >> n_g_s;
        s.GolSubito(n_g_s);
        goto loop;

    case 4:
        s.Punti();
        goto loop;
    
    case 5:
        s.InizioAnno();
        goto loop;

    default:
        break;
    };
    return 0;
};