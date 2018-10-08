from TOSSIM import *
t = Tossim([])
m = t.getNode(32)
m.bootAtTime(45654)


import sys
f = open("log.txt", "w")
t.addChannel("Boot", f)
t.addChannel("Boot", sys.stdout)
t.addChannel("RadioCountToLedsC", sys.stdout)

t.runNextEvent()
