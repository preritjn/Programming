import requests

payload = {
    'page': 2,
    'count': 25
}

data = {
    'username': 'Prerit',
    'password': 'Pkjain@1234'
}

# r = requests.get('https://xkcd.com/353/')
# r = requests.get('https://imgs.xkcd.com/comics/python.png')
# r = requests.get('https://httpbin.org/get',params=payload)
# r = requests.post('https://httpbin.org/post',data=data)
r = requests.get('https://httpbin.org/basic-auth/Prerit/Pkjain@1234', auth=('Prerit', 'Pkjain@1234'))

# print(dir(r))
# print(help(r))
# print(r.text)
# print(r.status_code)
# print(r.ok)
# print(r.headers)
print(r.text)
print(r)
# print(r.url)
# r_dict = r.json()
# print(r_dict['form'])


# with open('comic.png','wb') as comic:
#     comic.write(r.content)
