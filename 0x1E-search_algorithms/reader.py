#!/usr/bin/python3
""" Read file content.txt contaning blocks of code and creates a file for each
    Each block of code is preceded by the filename line in the format <\\filename>
"""
with open('content.txt', 'r', encoding = 'utf-8') as content :
    l = content.readline()
    name = ""
    while len(l) != 0 :
        if l[:2] == "//" :
            name = l[2:-1] 
            with open(name, 'w') as code :
                l = content.readline()
                while l[:2] != "//" and len(l) != 0:
                    code.write(l)
                    l = content.readline()

