#include <iostream>
#include <vector>

#include "pokemon.h"


std::vector<Pokemon> initializePokemons()
{
    std::vector<Pokemon> pokemons;

    pokemons.push_back(Pokemon("Balbasaur", "leaf", "water"));
    pokemons.push_back(Pokemon("Pikatchu", "electric", "water"));
    pokemons.push_back(Pokemon("Charizard", "fire", "leaf"));
    pokemons.push_back(Pokemon("Balbasaur", "water", "fire"));
    pokemons.push_back(Pokemon("Kingler", "water", "fire"));

    return pokemons;
}

int main(int argc, char* args[])
{
    std::string name;
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();
    Pokemon wildPokemon("Oddish", "leaf", "water");
    for (int i = 0; i < pokemonOfAsh.size(); ++i) {
        if(wildPokemon._type == pokemonOfAsh[i]._effectiveAgainst){
            name=pokemonOfAsh[i]._name;
        }
    }

    // Which pokemon should Ash use?

    std::cout << "I choose You, " << name << std::endl;
    return 0;
}