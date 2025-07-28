# rock papper and scissors game with computer
import random
rock = """
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
"""

# Paper
paper ="""
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
"""

# Scissors
scissors ="""
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
"""

game_images = [rock,paper,scissors]

print("enter your choice :\n1.rock\n2.papper\n3.scissor")
user = int(input("enter (1/2/3) :"))
if(user<1 or user>3):
    print("enter valid option")
else:
    print(f"user choice :{game_images[user-1]}")
    computer = random.randint(1,3)
    print(f"computer choice :{game_images[computer-1]}")
    if (computer == user):
        print(" TIE ")
    # elif(computer == 1 and user == 3) or (computer == 2 and user == 1) or (computer == 3 and user == 2):
    #     print("computer WIN")
    # elif(computer == 3 and user == 1) or (computer == 1 and user == 2) or (computer == 2 and user == 3):
    #     print("YOU WIN")
    elif computer == 1 and user == 3:
        print("computer WIN")
    elif computer == 3 and user == 1:
        print("YOU WIN")
    elif computer > user:
        print("computer WIN")
    elif user > computer :
        print("YOU WIN")
