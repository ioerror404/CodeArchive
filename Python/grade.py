def compute_grade(score): # function to compute grade
    x = 1
    while x == 1 :
        if score < 0.5 :
                print('\nF')
        elif score >= 0.5 and score < 0.6 :
                print('\nE')
        elif score >= 0.6 and score < 0.7 :
                print('\nD')
        elif score >= 0.7 and score < 0.8 :
                print('\nC')
        elif score >= 0.8 and score < 0.9 :
                print('\nB')
        elif score >= 0.9 and score <= 1.0 :
                print('\nA')
        else :
                print('BAD Score')
        choice = input('Do it again?(y/n) : ')
        if choice == 'n' :
            quit()
        elif choice == 'y' :
            Input()

def Input() :  # function to take input from user
    inp1 = input('Enter a score between 0.0-1.0 : ')
    score = float(inp1)
    compute_grade(score)

Input()
