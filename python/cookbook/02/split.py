import re

line = 'asdf fjdk; afed, fjek,asdf,foo'

# print(re.split(r'\W+', line))
print(re.split(r'[;,\s]\s*', line))
print(re.split(r'(;|,|\s)\s*', line))