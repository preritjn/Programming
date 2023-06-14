import joblib
mind  = joblib.load("mymarks.model")

h = input("Enter ur hrs of study : ")

fscore = mind.predict([[int(h)]])

print(fscore)