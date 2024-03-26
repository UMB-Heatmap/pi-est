from subprocess import Popen, PIPE, STDOUT

rng = Popen('./rng', stdout=PIPE, stderr=STDOUT, shell=True)

while True:
    line = rng.stdout.readline()
    #print(line)
    if not line: break

print("Done")
