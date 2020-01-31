"""Finds the first and follow for a given grammar"""
# Author Ojas Shirekar
# Under the GPL license
import nltk
from tkinter import *
from collections import OrderedDict

win = Tk()

def print_follow_list(event):
    str = ""
    l1 = Label(win, text="FOLLOWS : ") 
    l1.pack()
    for k, v in follow_dict.items():
        str = k + " : "
        for val in v:
            str = str + val
        l1 = Label(win, text=str)
        l1.pack()
    
    win.mainloop()


def print_first_list(event):
    str = ""
    l2 = Label(win, text="\nFIRSTS : ")
    l2.pack()
    for k, v in firsts_dict.items():
        str = k + " : "
        for val in v:
            str = str + val
        l2 = Label(win, text=str)
        l2.pack() 

    win.mainloop() 
    
def tokenize(event):
    e1 = Entry(win)
    e1.pack()
    win.mainloop()

#def parse_tokens(event):
#    line = 

def lr0_parser(event):
    print("LR(0)")     


# Opening the rules file, doing it the hard coded way for development
rules = []  # Raw grammar rules
firsts = []  # Used as temp storage for firsts if needed

# Ordered dictionary to maintain the order of saving in the dictionary
# useful when doing the actual first finding in one pass.
rules_dict = OrderedDict()  # Dictionary to store all the rules in the grammar
firsts_dict = OrderedDict()  # Dictionary to store all the firsts
follow_dict = OrderedDict()  # Dictionary that stores all follows



def non_term_appender(firsts, rules):
    """Adds the non terminals on the left to the firsts_dict"""
    for rule in rules:
        if rule[0][0] not in firsts:
            firsts.append(rule[0][0])
            firsts_dict[rule[0][0]] = []
            follow_dict[rule[0][0]] = []


with open("C:\\Users\\Mr Brains\\Documents\\input.txt") as fp:
    for line in fp:
        # Splitting on newline and turning it into an array
        rules.append(line.strip().split('\n'))

#tokenazation()
# ++++++    Following code is used to find firsts   +++++++++
number_of_rules = len(rules)
rule_count = first_count = 0
non_term_appender(firsts, rules)
for first in firsts:
    rules_dict[first] = rules[rule_count][0][3:]
    rule_count += 1

for rule in rules:
    if rule[0][3].islower():
        firsts_dict[rule[0][0]].extend(rule[0][3])
# TODO try and re implement one pass, as an else condition in the above loop.
for rule in rules:
    if rule[0][3].isupper():
        firsts_dict[rule[0][0]].extend(firsts_dict[rule[0][3]])

with open("firsts.txt", "w+") as wp:
    for k in firsts_dict:
        wp.write("first(%s): \t " % k)
        wp.write("%s\n" % firsts_dict[k])

# ++++++    Following code is used to find the follows  ++++++

rules_keys = list(rules_dict.keys())
key_count = len(rules_keys)

for k in rules_dict:
    tmp_rule_str = rules_dict[k]
    if k == rules_keys[0]:
        follow_dict[k].append('$')
    for i in range(key_count):
        if rules_keys[i] in tmp_rule_str:
            # Follow finding for last non-terminal in the
            tmp_rule_list = list(tmp_rule_str)
            # stores the index non-terminal we are finding the follow for in a
            # variable
            current_non_term_index = tmp_rule_list.index(rules_keys[i])

            if current_non_term_index == (len(tmp_rule_list) - 1):
                # if the index of the current non-term is at last one, means that
                # the follow for the current non-term will be the follow of the
                # left-hand side
                follow_dict[rules_keys[i]].extend(follow_dict[rules_keys[0]])
            else:
                # If not then the first of the next non-term from the current
                # non-term becomes the follow of the current
                follow_dict[rules_keys[i]].extend(
                    firsts_dict[rules_keys[(i + 1) % key_count]])

with open("follows.txt", "w+") as wp:
    for k in follow_dict:
        wp.write("follow(%s): \t" % k)
        wp.write("%s\n" % follow_dict[k])
print ("Firsts Dict:")
print(follow_dict)
print ("Follow Dict:")
print(firsts_dict)

#win.geometry("500x500")
button = Button(win, text='Find First', width=25)
button.pack()
button.bind('<ButtonPress-1>', print_follow_list)

button1 = Button(win, text='Find Follow', width=25)
button1.pack()
button1.bind('<ButtonPress-1>', print_first_list)

button2 = Button(win, text='Tokenize', width=25)
button2.pack()
button2.bind('<ButtonPress-1>', tokenize)

button3 = Button(win, text='Parse LR(0)', width=25)
button3.pack()
button3.bind('<ButtonPress-1>', lr0_parser)

win.mainloop()