# Search for lines that start with 'X' followed by any non 
# whitespace characters and ':' 
# followed by a space and any number. 
# The number can include a decimal. 
import re
lst = list()
flst = list()
count = 0
f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
for line in f:
	line = line.strip()
	x = re.findall('^X\S*: ([0-9.]+)', line)
	if len(x) > 0:
		lst.append(x[0])
for elem in lst:
	flst.append(float(elem))
	count +=1
SUM = sum(flst)
avg = SUM/count
print(avg)