from collections import defaultdict

d = defaultdict(list)
d['a'].append(1)
d['a'].append(2)
d['b'].append(4)

print(list(d.items()))

d = defaultdict(set)
d['a'].add(1)
d['a'].add(2)
d['b'].add(4)

print(list(d.items()))


s = [('Python', 1), ('Swift', 2), ('Python', 3), ('Swift', 4), ('Python', 9)]
d = defaultdict(list)
for k,v in s:
    d[k].append(v)
print(list(d.items()))