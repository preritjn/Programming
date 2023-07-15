from langchain.llms import OpenAI

my_key = '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'
myllm = OpenAI(temperature=0,openai_api_key=my_key)

# # inputprompt = input('Enter your prompt : ')

# # output = myllm(prompt=inputprompt)

# # print(output)

# from langchain.prompts import PromptTemplate

# myPrompt = PromptTemplate(template="tell me top 2 {items} of india, which me only name of it.", input_variables=['items'])

# # myPrompt.format(items='animals')

# output = myllm(prompt=myPrompt.format(items='animal'))
# print(output)


from langchain.agents import load_tools
import os

os.environ['SERPAPI_API_KEY']='bd741f509476c285f8aed2f30d13e4f08c3aa566bf5c546ce0ea73105e277ecb'
mytools = load_tools(tool_names=["serpapi"])

from langchain.agents import initialize_agent,AgentType

my_google_chain = initialize_agent(
    agent_name=AgentType.ZERO_SHOT_REACT_DESCRIPTION,
    tools=mytools,
    llm=myllm,
    )
my_google_chain.run("tell me current president of US")