# Generate a random word the player should guess the word within the lives

import random

words_list = ['apple','rat','pineapple','strawberry','cherry','orange']
word = ""
num_player = int(input("enter no.of players :"))
if num_player == 2:
    word = input("enter the word to guess other player :")
else:
    word = random.choice(words_list)

word_length = len(word)

guess = []
for i in range(word_length):
    guess.append('_')

print("\n       ==== Welcokme To HangMan Game ====")
print(f"\nYou have {word_length} words to guess. You only have Six Lifes only.")
print(guess)
print("every wrong guess you lose your life..")

life = 6
while True :
    w = input("Enter a Single word :")
    if w in word :     
            index = word.index(w)
            guess[index] = w
    else:
            life -= 1
            print(f"wrong guess...You have {life} lifes left.")
    # switch case in python is match
    match life:
        case 0:
            print("""
                |===========
                |       |
                |       0
                |      /|\\
                |      / \\
                |___________""")
            
        case 1:
            print("""
                |===========
                |       |
                |       0
                |      /|\\
                |      / 
                |___________""")
            
        case 2:
            print("""
                |===========
                |       |
                |       0
                |      /|\\
                |      
                |___________""")
            
        case 3:
            print("""
                |===========
                |       |
                |       0
                |      /|
                |      
                |___________""")
            
        case 4:
            print("""
                |===========
                |       |
                |       0
                |       |
                |      
                |___________""")
            
        case 5:
            print("""
                |===========
                |       |
                |       0
                |      
                |      
                |___________""")
            
        case 6:
            print("""
                |===========
                |       |
                |       
                |      
                |      
                |___________""")
            
    print(guess)
    
    if guess == word:
        print(" === You Won ===")
        break
    if life == 0:
        print("You out of Lifes...\n === You Lose ===")
        break

