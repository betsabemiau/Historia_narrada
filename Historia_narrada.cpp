// proyecto_betsa_mate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>



int main()
{
    std::string p_sueno[3];
    int camino;
    int ht, hc;
    ht = 65;
    hc = 120;
    float p_vida = 0;
    std::string vidaT [3];
    int vida;
    float agua;
    float miel;
    float polvo;
    std::string RE;


    std::cout << " bienvenido usuario \n";
    std::cout << "esta, es una historia dinamica, mucha suerte en tu viaje \n";

    std::cout << R"(La historia es de un mago en busca de aventuras, conforme hay nuevos obstaculos y jefes va a ir creando pociones que sirven para cosas diferentes 
    Todo empieza un dia normal, el mago se encontraba en su casa intentando crear pociones nuevas, pero no tenia ideas, se sintio frustado, asi que decidio salir a despejarse
    cuando estaba en su caminata por las colinas encontro un lobo que quiso comerlo, asi que de su morral saco cosas para crear una posion de sueño
    la posion se puede crear con 4 ramitas de lavanda, 2 cucharadas de moco de gusarajo, 4 ramas de valeriana
    crea la pocion de sueño!)" << std::endl;


    std::cout << "escribe el primer ingrediente! \n";
    std::getline(std::cin, p_sueno[0]);

    std::cout << "escribe el siguiente ingredinete \n";
    std::getline(std::cin, p_sueno[1]);

    std::cout << "escribe le ultimo ingrediente \n";
    std::getline(std::cin, p_sueno[2]);

    std::cout << R"(Genial! ahora el lobo duerme y el mago logro escapar con exito, llegando a cierto punto se encontro con dos caminos, uno a la derecha y el otro a la izquierda, ¿cual quieres tomar?
    presiona 1 para derecha y 0 para izquierda )" << std::endl;


    std::cin >> camino;

    switch (camino)
    {
    case 0:

        std::cout << R"(bien! elegiste ir a la izquierda
        siguiendo con su camino, el mago encontro hongos, 65 toxicos y 120 comestibles
        resta los toxicos de los comestibles
        primero ingresa los toxicos)" << std::endl;

        std::cin >> ht;
        std::cout << "ahora los comestibles \n";
        std::cin >> hc;
        std::cout << "este es un mundo de magia, pueden quedar numeros negativos! \n";
        std::cout << " ahora el mago quedo con " << ht - hc << std::endl;

        std::cout << "genial! ya no hay hongos toxicos, ahora el mago puede comer sin problemas y seguir con su viaje \n";
        std::cout << R"(Ahora el mago sigue su travesia, la historia que empezo como una salida ahora es un viaje, la opcion de regresar ya no es valida, despues de todo, era lo que necesitaba aunque en un principio no lo sabia
        cuando siguio con su camino tuvo un encuentro muy inesperado, habia un ciervo herido, ahora tiene que elegir, lo salva o lo deja morir, escribe 1 para salvarlo o 0 para dejarlo
        para hacer la pocima de curacion son 2.3 ml de agua, 3.3 ml de miel y 1.4 gr de polvo curativo
        escribe los numeros)" << std::endl;

        std::cin >> vida;

        if (vida == 0)
        {
            std::cout << "se murio el ciervo, que triste, el mago regreso a su casa deprimido pero de la depresion se avento de un acantilado y se mato :c \n";
        }

        if (vida == 1)
        {
            std::cout << "escribe cuantos ml son de agua \n";
            std::cin >> agua;

            std::cout << "ahora escribe los ml de miel \n";
            std::cin >> miel;

            std::cout << "por ultimo los gr de polvo \n";
            std::cin >> polvo;

            std::cout << "salvo al ciervo! ahora son amigos y el mago llevo al ciervo a su casa con su familia, FINAL FELIZ! :D \n";
        }
            break;

    case 1:
        std::cout << "elegiste ir a la derecha! \n";
        std::cout << "El mago sigue su camino, en cierto punto encuentra a una chica que necesitaba ayuda contra un oso gigante que la queria devorar, quieres ayudar a la chica? si o no \n";
        std::cin >> RE;

        if (RE == "Si")
        {
            std::cout << "felicidades, el mago ayudo a la chica, se conocieron, se casaron y tuvieron un final feliz! \n";
        }
        if (RE == "No")
        {
            std::cout << "que mal, la chica se murio y el mago fue devorado tambien \n";
        }
        break;

     default: 
         std::cout << "intenta de nuevo \n";
        break;
    }

   
}