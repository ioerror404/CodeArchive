f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
d = dict()
count = 1
for line in f:
	if line.startswith('From '):
		words = line.split()
		if words[1] not in d:
			d[words[1]] = 1
		else:
			d[words[1]] = d[words[1]] + 1
lst = list()
for key, val in list(d.items()):
	lst.append((val,key))
lst.sort(reverse = True)
for key, val in lst[:10]:
	print(count,":",val,key)
	count +=1

