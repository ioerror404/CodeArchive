f = open('C:\\Users\\Mughis Mirza\\Downloads\\romeo.txt')
d = dict()
for line in f :
	line = line.split()
	for word in line :
		if word not in d :
			d[word] = 1
		else :
			d[word] = d[word] + 1
print(d)		
