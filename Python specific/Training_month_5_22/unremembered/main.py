from DictHashClass import DictHash
from unremembered.PokemonClass import Pokemon
from HashNodeClass import Hashtable
from matplotlib import pyplot as plt


def test():
    dictionary = DictHash()
    pokemon_list = Pokemon.get_pokemon_list("pokemon.csv")
    for pokemon in pokemon_list:
        dictionary.store(pokemon.name.lower(), pokemon)

    # testing
    while True:
        continue_input = input("Enter x to quit searching, or anything else to continue: ").strip()
        if continue_input.lower() == "x":
            break
        sought_pokemon = input('Input name of sought pokemon: ').strip().lower()
        if sought_pokemon in dictionary:
            print("Dictionary contains", sought_pokemon.capitalize())
        else:
            print("Pokemon not found")


# test()
# implementation of hash table

def test_2():
    pokemon_list = Pokemon.get_pokemon_list("pokemon.csv")
    hash_table = Hashtable(len(pokemon_list))
    for pokemon in pokemon_list:
        hash_table.store(pokemon.name.lower(), pokemon)

    distribution = hash_table.show_distribution()
    print(*distribution)
    print("load factor is ", sum(distribution) / len(distribution))
    plt.plot(distribution)
    plt.title("Distribution with quadratic probing")
    plt.show()
    # testing
    while True:
        continue_input = input("Enter x to quit searching, or anything else to continue: ").strip()
        if continue_input.lower() == "x":
            break
        sought_pokemon = input('Input name of sought pokemon: ').strip().lower()
        try:
            print("Dictionary contains", hash_table.search(sought_pokemon).key.capitalize())
        except KeyError:
            print("Pokemon not found")


test_2()
