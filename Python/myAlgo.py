def search_algo(lst, numToFind, size):
	
	beg = 0
	end = size - 1
	Q1 = 0
	Q3 = 0
	mid = 0

	while beg <= last:

		mid = ( beg + end )	/ 2
		point1 = mid - ( end - mid ) / 2
		point2 = mid + ( end - mid ) / 2

		if numToFind == A[mid] or numToFind == A[point1] or numToFind == A[point2]:
			ind = linear_search ( beg, end, A[], numToFind )
			return ind

		elif numToFind < A[point1]:
			end = point - 1

		elif numToFind < A[mid]:
			beg = point1 + 1
			end = mid - 1

		elif numToFind > A[point2]:
			beg = point2 + 1

		elif numToFind > A[mid]:
			beg = mid + 1
			end = point2 - 1		



def linear_search( first, last, lst1, val ):
	i = -1
	while first <= last:
		if lst[first] == val:
			i = first
			first += 1
	return i




A = list()
inp1 = input('SIZE : ')
inp2 = input('Num To Find : ')
n = int( inp1 )
num = int ( inp2 )
i = 0
while i < n:
	A.append(i)
	i += 1
index = search_algo(A, num, n)	
if index != -1:
	print(lst[index],"found at",index) 		


