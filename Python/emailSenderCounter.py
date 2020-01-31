f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
d = dict()
for line in f :
	if line.startswith('From ') :
		words = line.split()
		if words[1] not in d :
			d[words[1]] = 1
		else :
			d[words[1]] = d[words[1]] + 1
largest = None
Key = 'nofhing yet' 
for key in d :
	if largest is None or d[key] > largest :
		Key = key
		largest = d[key]
print('Following is the most repeated sender.')		
print(Key,":",largest)		

