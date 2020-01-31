#generate random numbers
import random

def RANDOM_0_1_Float():
    ran = random.random() #The function random returns a random ﬂoat between 0.0 and 1.0
    print(ran)

def RANDOM_INT():
    ran = random.randint(1,10) #The function randint takes the parameters low and high, and returns an integer between low and high (including both).
    print(ran)

def RANDOM_CHOICE():
    seq = [1, 2, 3]
    ran = random.choice(1) #To choose an element from a sequence at random, you can use choice
    print(ran)

RANDOM_0_1_Float()
RANDOM_INT()
RANDOM_CHOICE()
