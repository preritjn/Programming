import numpy
import pyttsx3 as tts

details = ["Prerit", "Kumar", "Jain", "Jack"]

db = numpy.array(details)

print(db)

db = db.reshape(4, 1)
print(db)

numpy.append(db[0], 4521)
print(db)

s = tts.init()
s.say("Hello")
s.runAndWait()


