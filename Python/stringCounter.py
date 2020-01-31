def counter(word, char) :
    count = 0
    for letter in word :
        if letter == char :
            count = count + 1
    return count
word = input('Enter a string : ')
char = input('Enter a char to find : ')
count = counter(word, char)
print(count)
