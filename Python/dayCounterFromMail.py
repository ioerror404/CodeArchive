f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
d = dict()
for line in f :
	if line.startswith('From ') :
		words = line.split()
		if words[2] not in d :
			d[words[2]] = 1
		else :
			d[words[2]] = d[words[2]] + 1
print(d)			
