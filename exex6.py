
class Animal:
    def falar(self):
        return "barrulho do animal "


class cavalo(Animal):
    pass


cachorro = cavalo()


print(cavalo.falar())  
