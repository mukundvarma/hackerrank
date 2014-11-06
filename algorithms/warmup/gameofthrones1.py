string = raw_input()
 
found = False
# Write the code to find the required palindrome and then assign the variable 'found' a value of True or False
if len(string) % 2 == 0:
    isodd = False
else:
    isodd = True
amap = {}
for i in string:
    if i in amap:
        amap[i] = amap[i] + 1
    else:
        amap[i] = 1
nodds = 0
for key in amap:
    if amap[key] %2 != 0:
        nodds = nodds + 1
if nodds == 1 and isodd == True:
    found = True
elif nodds == 0 and isodd == False:
    found = True
else:
    found = False
if not found:
    print("NO")
else:
    print("YES")
