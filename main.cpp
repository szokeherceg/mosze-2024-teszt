#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];//N_ELEMENTS-nek k�ne lennie
    std::cout << "1-100 ertekek duplazasa" << std::endl; //nem macskak�r�m k�z�tt van,hi�nyzik az endline
    for (int i = 0; i < N_ELEMENTS;i++)//NIncs befejezve
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++)//hi�nyzik az i fels� hat�r�rt�ke
    {
        std::cout << "Ertek:" << std::endl; //hi�nyzik a pontosvessz� �s az endline
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag; //az �tlag nem eg�sz kell hogy legyen hanem double
    for (int i = 0; i < N_ELEMENTS; i++)// az N_ELEMENTS �s az i++ k�z� pontosvessz� kell
    {
        atlag += b[i]; //hi�yznik a pontosvessz�
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
