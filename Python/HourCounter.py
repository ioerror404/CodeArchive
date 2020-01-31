f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
counts = dict()
for line in f:
	if line.startswith('From '):
		line = line.split()
		time = line[5].split(':')
		if time[0] not in counts:
			counts[time[0]] = 1
		else:
			counts[time[0]] = counts[time[0]] + 1
lst = list()
for key, val in counts:
	lst.append((key, val))
lst.sort(reverse = True)
print(lst)
