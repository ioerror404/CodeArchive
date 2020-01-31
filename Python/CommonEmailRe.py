import re
count = 0
lst = list()
f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
for line in f:
	line = line.strip()
	x = re.findall('[a-zA-Z0-9]\S+@\S+[a-zA-Z]', line)
	if len(x) > 0:
		lst.append(x[0])
d = dict()
for entry in lst:
	if entry not in d:
		d[lst[count]] = 1
	else:
		d[lst[count]] += 1
	count += 1	
lst.clear()
for key, val in list(d.items()):
	lst.append((val, key))
lst.sort(reverse = True)
for val, key in	lst[:20]:
	print(key, ":", val)
