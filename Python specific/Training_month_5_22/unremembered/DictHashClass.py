class DictHash:

    def __init__(self):
        self.dict = {}

    def store(self, key, data):
        self.dict[key] = data

    def search(self, key):
        try:
            return self.dict[key]
        except KeyError:
            return None

    def __getitem__(self, key):
        return self.search(key)

    def __contains__(self, key):
        if self.search(key) is None:
            return False
        return True
