import subprocess
text = '"Hello world"'
subprocess.call('espeak '+text, shell=True)

text1 = '"MY NAME IS USER1233"'
subprocess.call('espeak '+text1, shell=True)

