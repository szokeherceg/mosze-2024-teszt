#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//N_ELEMENTS-nek k�ne lennie
    std::cout << '1-100 ertekek duplazasa' //nem macskak�r�m k�z�tt van,hi�nyzik az endline
    for (int i = 0;)//NIncs befejezve
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)//hi�nyzik az i fels� hat�r�rt�ke
    {
        std::cout << "Ertek:" //hi�nyzik a pontosvessz� �s az endline
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //az �tlag nem eg�sz kell hogy legyen hanem double
    for (int i = 0; i < N_ELEMENTS, i++)// az N_ELEMENTS �s az i++ k�z� pontosvessz� kell
    {
        atlag += b[i] //hi�yznik a pontosvessz�
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
