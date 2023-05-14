class Class:
    class_variable: int = 0 # class variable

    def __init__(self, variable:int): # local variable
        self.variable = 90 # instance variable
        variable = self.variable # supressed using self keyword
        print(variable)

class LocalVariableSupressor:
    @staticmethod
    def main(*args: list[str]) -> None:
        Class(100)


if __name__ == "__main__": 
    LocalVariableSupressor.main()

        
    
