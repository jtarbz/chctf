import hashlib # used to hash items in the word list
import string # used to remove punctuation

CONTROL = "38928327ada5f0a310f317fa5e41bf5a1ed962778eb526fd6709068f662295ea" # the string given

def main():
    words = [] # will hold all words in the wordlist
    
    # adds all words in the wordlist to a python list
    with open("wordlist.txt",'r') as f:
        for line in f:
            # splits each line of the file on spaces i.e the line "This is a line!" would split to ['This', 'is', 'a', 'line!']
            line_word = line.split() 
            for item in line_word:
                words.append(item) # add each word to the word list

    rm_dupe = list(set(words)) # converts the list to a set to remove duplicates, then converts the set back to a list

    # This hashs each word in the wordlist without duplicates and compares it against the string given 
    for word in rm_dupe:
        # String.punctuation is a string of all the punctuation, in this case - and ' are removed because they can be part of words, such as O'Riley or can-cell
        punct = string.punctuation.translate(str.maketrans('','',"-'")) 

        word = word.translate(str.maketrans('','',punct)) # remove anything in the punct variable from the wordlist, i.e "hello!" will become "hello"
        full_item = ("chctf{" + str(word) + "}").lower() # combines what will be hashed into one string and makes everything lowercase
        test_hash = hashlib.sha256(full_item.encode('utf-8')).hexdigest() # hashes the string into SHA256 and makes sure it is in hexidecimal
        if str(test_hash) == CONTROL: # checks if the hashed value is equal to the given string
            print(f"match found: {full_item}")
            input("") # pause script upon finding correct item
        else:
            print(test_hash)
            print(f"{full_item} not correct hash")
main()
input("") # Pauses so you know that your wordlist is bad