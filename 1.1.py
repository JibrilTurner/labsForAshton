import traceback

def testDataType(rational):
    try:
        if rational.is_integer():
            print(f"Output: {rational}")
            print("Passed")
        else:
            print(f"Output: {rational}")
            print("Failed")
    except Exception:
        traceback.print_exc()

# Do Not Touch # Do Not Touch # Do Not Touch # Do Not Touch # Do Not Touch # Do Not Touch # Do Not Touch


def crashCourse():
    integer = 5                                      # The Name connect to the value is arbiarity and could be anythig but a keyword
    print(f"The Value of x is {integer}")            # {} are at the end to insert a var into a string 

    string = "iknowyoujustgotdonesmoking"
    print(string)

def dataType():
    return x;                                 # return whatever you must to get Passed  

def main():
    testDataType(dataType())

# Ignore For Now 
if __name__ == "__main__":
    main()

# i know funtions will be convered in 1.3 but for a little help here this 
#    def{FuntionName}({input},{input},{input}.......):
#        return {value}22			
