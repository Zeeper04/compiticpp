#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int avanzaTurno(int turnoP, int nGiocatori)
{
    if(turnoP+1>nGiocatori)
        turnoP=1;
    else
        turnoP++;
    return turnoP;
}

int tiroDado()
{
    return rand()%11+2;
}

int movimento(int posGiocatore)
{
    int tiro = tiroDado();
    posGiocatore=posGiocatore+tiro;

    //raddoppio
    if (posGiocatore==5 || posGiocatore==6 || posGiocatore==9 || posGiocatore==18 || posGiocatore==27 || posGiocatore==36 || posGiocatore==45 || posGiocatore==54)
        posGiocatore=posGiocatore+tiro;
    
    //labirinto
    if (posGiocatore==42)
        posGiocatore=39;
    
    //labirinto
    if (posGiocatore==58)
        posGiocatore=1;

    return 0;
}

int main()
{
    int nGiocatori=2; //numero giocatori effettivi-1
    int posP1, posP2=0;
    int turnoP=1; //indica di chi è il turno, 0=P0, 1=P1,...
    //cout<<avanzaTurno(turnoP, nGiocatori)<<endl;



    return 0;
}

