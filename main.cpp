#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];//N_ELEMENTS-nek kéne lennie
    std::cout << "1-100 ertekek duplazasa" << std::endl; //nem macskaköröm között van,hiányzik az endline
    for (int i = 0; i < N_ELEMENTS;i++)//NIncs befejezve
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++)//hiányzik az i felső határértéke
    {
        std::cout << "Ertek:" << std::endl; //hiányzik a pontosvessző és az endline
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag; //az átlag nem egész kell hogy legyen hanem double
    for (int i = 0; i < N_ELEMENTS; i++)// az N_ELEMENTS és az i++ közé pontosvessző kell
    {
        atlag += b[i]; //hiáyznik a pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Hello World" << std::endl;
    return 0;
}
