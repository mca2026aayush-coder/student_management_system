from abc import ABC, abstractmethod

# Implemented Abstraction

class Person(ABC):

    def __init__(self, id, name):
        self.__id = id
        self.__name = name

    # Implemented Encapsulation
    def getId(self):
        return self.__id

    def getName(self):
        return self.__name

    def setId(self, id):
        self.__id = id

    def setName(self, name):
        self.__name = name

    @abstractmethod
    def showRole(self):
        pass
