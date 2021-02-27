import random
super_secret_key = <Some Integer Value>
rand_mixer = random.randint(1,100)
print("Welcome to the Battle Bus, please be respectful of our rules and don't go anywhere you're not supposed to be")
print("Degree of randomization:", rand_mixer)
print("Mixed: ", super_secret_key * rand_mixer)
inputted_key = int(input("Enter the key for verification "))
if(inputted_key == super_secret_key):
    print("<FLAG>")
else:
    print("Error: Cheating detected")
