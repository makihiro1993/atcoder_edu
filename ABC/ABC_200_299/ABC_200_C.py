N = int(input())
A = list(map(int, input().split()))

def cmb(l):
  comb = l*(l-1)//2
  return comb

mod_list = []
for i in range(N):
  mod_list.append(A[i]%200)

mod_list.sort()
mod_list.append(200)

ans = 0
max_num = mod_list[0]
l = 1
for i in range(1,N+1):
  if mod_list[i] == max_num:
    l += 1
  else:
    max_num = mod_list[i]
    if l >= 2:
      ans += cmb(l)
      l = 1
    else:
      ans += 0
      l = 1
    
print(int(ans))