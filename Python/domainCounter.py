f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
d = dict()
for line in f :
	if line.startswith('From ') :
		words = line.split()
		domain = words[1].split('@')
		if domain[1] not in d :
			d[domain[1]] = 1
		else :
			d[domain[1]] = d[domain[1]] + 1
print(d)			
