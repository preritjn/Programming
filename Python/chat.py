import openai

openai.api_key = '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'

def chat_with_girlfriend(prompt):
    response = openai.Completion.create(
        engine='text-davinci-003',
        prompt=prompt,
        max_tokens=50,
        temperature=0.6,
        n=1,
        stop=None
    )

    return response.choices[0].text.strip()

# Main loop
while True:
    user_input = input("You: ")
    prompt = f"User: {user_input}\nLucy:"

    girlfriend_response = chat_with_girlfriend(prompt)
    print("Lucy:", girlfriend_response)