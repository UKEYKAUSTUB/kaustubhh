# This function adds two numbers
def add(x, y):
    return x + y 

# This function subtract two numbers 
def subtract(x' y)
    return x - y
    
# This function divides two numbers
def divide(x, y)
    return x / y 
    
    
    print("Select operation.")
    print("1.Add")
    print("2.Subtract")
    print("3.Divide")
    
    while True:
        # take input from the user 
        choice = input("Enter choice (1/2/3):")
        
        # check if choice is one of the four options 
        if choice in ('1','2','3'):
            try:
                num1 = float(input("Enter first number: "))