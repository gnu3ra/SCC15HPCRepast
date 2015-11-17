#!/usr/bin/env python                                                                                                   
import sys
count = 0
total = 0
for line in sys.stdin:
        total += float(line.split()[0])
        count += 1
print float(total) / count
