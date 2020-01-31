import string
f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
counts = dict()
for line in f:
	line = line.translate(str.maketrans('', '', string.punctuation))
	line = line.translate(str.maketrans('', '', string.digits))
	line = line.lower()
	line = line.split()
	for w in line:
		word = list(w)
		for letter in word:
			if letter not in counts:
				counts[letter] = 1
			else:
				counts[letter] = counts[letter] + 1
lst = list()
for key, val in list(counts.items()):
	lst.append((val, key))
lst.sort(reverse = True)
for val, key in lst:
	print(key,val)
