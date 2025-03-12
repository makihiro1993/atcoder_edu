N,K = map(int, input().split())

def div(x):
  D = x/200
  D = int(D)
  return D

def add(x):
  x = str(x)
  ad = x + "200"
  ad = int(ad)
  return ad

for i in range(K):
  if N%200 == 0:
    N = div(N)
  else:
    N = add(N)
    
print(N)