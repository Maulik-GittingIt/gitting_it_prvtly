sentence = input("enter the sentence:- ")
words = sentence.lower().split(" ")
dict_words = {"a": "ek", "he": "wo", "is": "", "sweet": "meetha", "boy": "ladka hai", "arjun": "Arjun"}

translated_word = ""  # make this a string
for i in words:
    translation = dict_words.get(i, i)  # also safer: use .get() in case word not in dict
    translated_word += translation + " "

print(translated_word.strip())  # remove trailing space
