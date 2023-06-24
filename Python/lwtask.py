import numpy as np

team_data = np.array([
    ['Prerit', 89927894, 'Jaipur'],
    ['Mohit', 46465148, 'Jaipur'],
    ['Lucky', 544444498, 'Jaipur'],
    ['Aman', 4884988, 'Jaipur'],
    ['Samrudhhi', 468494658, 'Jaipur'],
])

print(team_data[:,1])

for i in team_data:
    print(i[1])