p1 = "subscribe to this"
p2 = "buy now"
p3 = "click this"
p4 = "make a lot of money"

mail_text = input("enter the mail text here:- ")

mail_text = mail_text.lower()  

if (p1 in mail_text or p2 in mail_text or p3 in mail_text or p4 in mail_text):
    print("SPAM")
else:
    print("not spam")
