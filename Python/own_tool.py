import requests

api_key='wJeUB1nhQxtstG7W5e-umA'

api_endpoint = 'https://nubela.co/proxycurl/api/v2/linkedin'

header_dic = {'Authorization': 'Bearer ' + api_key}

def linkedin(link):
    params = {
        'url': link,
        'fallback_to_cache': 'on-error',
        'use_cache': 'if-present',
        'skills': 'include',
        'inferred_salary': 'include',
        'personal_email': 'include',
        'personal_contact_number': 'include',
        'twitter_profile_id': 'include',
        'facebook_profile_id': 'include',
        'github_profile_id': 'include',
        'extra': 'include',
        'headline': 'include',
        'certification': 'include'
    }

    response = requests.get(
        url=api_endpoint,
        headers=header_dic,
        params=params
    )

    return response.json()



data = linkedin('https://www.linkedin.com/in/prerit-kumar-jain-39278b229/')
print(data)

myOpenAIKey = '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'

from langchain.prompts import PromptTemplate
from langchain.chat_models import ChatOpenAI
from langchain.chains import LLMChain

model = ChatOpenAI(
    model='gpt-3.5-turbo',
    temperature=1,
    openai_api_key=myOpenAIKey
)

myTemplate='''Given is the information about {someoneinformation} LinkedIn Profile, what u have to do list is given below
    1. Tell me summary about in 1 lines
    2. 2 unique point about it
    3. Tell me about it in 5 words
'''

myPromptTemplate=PromptTemplate(
    input_variables=["someoneinformation"],
    template=myTemplate
)

# to create the final prompt
# print(myPromptTemplate.format(someoneinformation=data['public_identifier']))

mychain= LLMChain(
    llm=model,
    prompt=myPromptTemplate
)

print(mychain.run(someoneinformation=data['public_identifier']))

from langchain.agents import AgentType, initialize_agent
from langchain.tools import Tool

customTools = [
    Tool(
        name="Crawl Prerit Kumar Jain's LinkedIn Profile",
        func=linkedin,
        description="Find LinkedIn profile for details"
    )
]

myagent = initialize_agent(
    llm=model,
    agent=AgentType.ZERO_SHOT_REACT_DESCRIPTION,
    verbose=True,
    tools=customTools
)

print(myagent.run(myPromptTemplate.format_prompt(someoneinformation=data['public_identifier'])))


