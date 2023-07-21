# import requests

# url = "https://instagram28.p.rapidapi.com/user_info"

# querystring = {"user_name":"preritjn"}

# headers = {
# 	"X-RapidAPI-Key": "051ca3aceamshca04520cb35b5f6p1c8474jsnd92e574d4671",
# 	"X-RapidAPI-Host": "instagram28.p.rapidapi.com"
# }

# response = requests.get(url, headers=headers, params=querystring)

# data = response.json()

# print(data)


import requests

url = "https://axesso-facebook-data-service.p.rapidapi.com/fba/facebook-page-info"

querystring = {"url":"https://www.facebook.com/LinuxWorld.India"}

headers = {
	"X-RapidAPI-Key": "051ca3aceamshca04520cb35b5f6p1c8474jsnd92e574d4671",
	"X-RapidAPI-Host": "axesso-facebook-data-service.p.rapidapi.com"
}

response = requests.get(url, headers=headers, params=querystring)

print(response.json())