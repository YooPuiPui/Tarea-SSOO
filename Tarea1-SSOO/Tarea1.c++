#include<iostream>
#include<thread>
#include<vector>
#include<random>
#include<chrono>
#include<mutex>
#include<string>

//? Vector para guardar el orden de llegada de los autos
std::vector<int> results;

//? Variable que guarda la posicion de llegada de cada auto
int position = 1;

void carRace(int carId, int totalDistance){

    
    int distanceCovered = 0;

    std::random_device rd;
    std::mt19937 gen(rd());

    //? genera distancias aleatorias
    std::uniform_int_distribution<> dist(1,10);
    //?
    std::uniform_int_distribution <> speed(100,500);

    while(distanceCovered < totalDistance){
        
        //? Se genera una distancia aleatoria que el auto avanzara en esta iteracion
        int distance = dist(gen);

        //? Actualizamos la distancia recorrida
        distanceCovered += distance;

        //! Si el auto avanza mas de la distancia total, lo igualamos para que no sobrepase
        if(distanceCovered > totalDistance){
            distanceCovered = totalDistance;
        }
    }

}