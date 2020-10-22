import keyboard

while True:
    try:
        if keyboard.is_pressed('D'):
            print("You Pressed the Key Right")
            break
        else:
            print("You Pressed The Wrong Key")
            break
    except:
        break