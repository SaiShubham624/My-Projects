while True:
    print("Press Q to Quit")
    a = input('Enter your Number: ')
    if a == 'q':
        break
    try:
        print("Trying....")
        a = int(a)
        if(a == 6):
            print("You are Correct")
    except Exception as e:
        print(f"Error Error {e} ")
print("Finished")