import joblib
mind = joblib.load("mymarks.model")
h = input("Enter ur hrs of study : ")
f_score = mind.predict([[int(h)]])
print(f_score)
