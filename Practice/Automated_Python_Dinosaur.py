# Hi I am Sai Shubham Ray and Creating My First AI
import pyautogui
from PIL import Image, ImageGrab

import time
def Hit(key):
    pyautogui.keyDown(key)

def isCollide(data):
    for i in range(210, 330):
            for j in range(410, 450):
                if data[i ,j] < 100:
                    Hit("up")
                    return True
    return False

if __name__ == "__main__":
    print("Hey Dino is about to start in 3 seconds")
    time.sleep(3)
    Hit("up")
    while True:
        image = ImageGrab.grab().convert('L')
        data = image.load()
        isCollide(data)

    
        # for i in range(180, 270):
        #     for j in range(410, 450):
        #         data[i ,j] = 0
    
        # image.show()
        # break
        
#  for i in range(240, 330):
#         for j in range(410, 450):
#             data[i ,j] = 0