sentence = 'This is a sentence by Geo From CET '
split_value = []
tmp = ''
for c in sentence:
    if c == ' ':  
        split_value.append(tmp)
        tmp = ''
    else:
        tmp += c

print(split_value)