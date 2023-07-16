from langchain.llms import OpenAI
my_openai_key = "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"
myllm = OpenAI(temperature=0 , openai_api_key=my_openai_key)
print(myllm(prompt="top 2 {x}"))
from langchain.prompts import PromptTemplate
myprompt=PromptTemplate(
    template="tell me top 2 {things} of india , which me only name of it.",
    input_variables= ["things"]
)
        
myprompt.format(things="animal")
output = myllm(prompt=myprompt.format(things="animal"))
print(output)
from langchain.chains import LLMChain
my_things_prompt=myprompt.format(things="animal")
print(my_things_prompt) 
myllmchain=LLMChain(
    prompt=myprompt,
    llm=myllm
)
        
print(myllmchain.run(things="food of mp "))
        
from langchain.agents import load_tools
from langchain.agents  import AgentType 
mytools=load_tools(tool_names=["serpapi"])
        
import os 
os.environ['SERPAPI_API_KEY']= "bd741f509476c285f8aed2f30d13e4f08c3aa566bf5c546ce0ea73105e277ecb"
from langchain.agents import initialize_agent
my_google_chain = initialize_agent(
    tools=mytools,
    llm=myllm,
    agent=AgentType.ZERO_SHOT_REACT_DESCRIPTION,
    verbose=True 
)
print(my_google_chain)