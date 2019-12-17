a = {
    'x' : 1,
    'y' : 2,
    'z' : 3
}

b = {
    'w' : 10,
    'x' : 11,
    'y' : 2
}

key_common = a.keys() & b.keys()

key_diff = a.keys() - b.keys()

value_common = a.items() & b.items()

print(key_common)
print(key_diff)
print(value_common)