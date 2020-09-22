str='X-Dspam-Confidence:0.8475'
s=str.find(":")
f=float(str[s+1:])
print(f)