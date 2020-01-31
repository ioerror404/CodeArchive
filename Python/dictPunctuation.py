import string
f = open('C:\\Users\\Mughis Mirza\\Downloads\\romeo.txt')
d = dict()
for line in f :
	line = line.rstrip()
	line = line.translate(line.maketrans('', '',string.punctuation))
	line = line.lower()
	words = line.split()

	for word in words :
		if word not in d :
			d[word] = 1
		else :
			d[word] = d[word] + 1
lst = list(d.keys()) 
print(lst)		
		
