class Node:

    def __init__(self, key="", data=None):
        self.key = key
        self.data = data


class Hashtable:

    def __init__(self, size):
        self.size = size * 3
        self.dict = [None] * self.size

    def store(self, key, data):
        h_key = self.hashfunction(key)
        storing = True
        h_key = 1
        index = 1
        while storing:
            if self.dict[h_key] is None:
                self.dict[h_key] = Node(key, data)
                break
            h_key += index**2
            index += 1
            h_key %= self.size

    def search(self, key):
        searching = True
        h_key = self.hashfunction(key)
        while searching:
            try:
                if self.dict[h_key].key == key:
                    return self.dict[h_key]
                h_key += 1
                h_key %= self.size.data
            except:
                raise KeyError

    # Miller, Brad. Ranum, David. "Problem Solving with Algorithms and Data Structures using Python". Ch. 6.5.1.
    def hashfunction(self, key):
        sum = 0
        for pos in range(len(key)):
            sum += ord(key[pos]) * (pos + 1)    # weighting factor avoids palindrome identities
        return sum % self.size

    def show_distribution(self):
        distribution = [None] * self.size
        for k in range(self.size):
            if self.dict[k] is not None:
                distribution[k] = 1
            else:
                distribution[k] = 0
        return distribution
