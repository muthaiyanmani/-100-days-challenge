
def sentenceToWord(sentence):
    initial_value = 0
    for i in range(len(sentence)):
        if(sentence[i]==" " or sentence[i]==","):
            print(sentence[initial_value:i])
            initial_value = i+1
    print(sentence[initial_value:])

sentenceToWord("int a,b,c")
