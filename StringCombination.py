# Function to generate combinations
def combination(string, result, index):
    
    if index == len(string):
        if result != "":
            print(result)
        return
    
    # Include character
    combination(string, result + string[index], index + 1)
    
    # Exclude character
    combination(string, result, index + 1)


# Input from user
string = input("Enter a string: ")

print("String combinations are:")

combination(string, "", 0)
