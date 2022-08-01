class Pokemon:

    def __init__(self,
                 number,
                 name,
                 type1,
                 type2,
                 total,
                 hp,
                 attack,
                 defence,
                 sp_atk,
                 sp_def,
                 speed,
                 generation,
                 legendary):
        self.number = int(number)
        self.name = str(name)
        self.type1 = str(type1)
        self.type2 = str(type2)
        self.total = int(total)
        self.hp = int(hp)
        self.attack = int(attack)
        self.defence = int(defence)
        self.sp_atk = int(sp_atk)
        self.sp_def = int(sp_def)
        self.speed = int(speed)
        self.generation = int(generation)
        self.legendary = bool(legendary)

    def __str__(self):
        return str(self.number) + " | " + self.name

    def __lt__(self, other):
        return self.number < other.number

    def get_types(self):
        return self.type1, self.type2

    def get_stats(self):
        return {"HP": self.hp,
                "Attack": self.attack,
                "Defense": self.defence,
                "SpAtk": self.sp_atk,
                "SpDef": self.sp_def,
                "Speed": self.speed
                }

    @staticmethod
    def get_pokemon_list(filename):
        with open(filename, encoding="utf8") as fil:
            fil.readline()  # First line irrelevant
            data_line = fil.readline()
            pokemon_list = []
            while data_line:
                pokemon_list.append(Pokemon(*(data_line.strip().split(","))))
                data_line = fil.readline()
        return pokemon_list
