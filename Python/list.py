def chop(y) :
	del y[0]
	length = len(y)
	length = length - 1
	del[length]

def middle(z) :
	length = len(z)
	i = list()
	i = z[1:length - 1]
	return i
x = list()
x = [1,2,3,4,5,6]
print(x)
chop(x)
print(x)
x = middle(x)
print(x)