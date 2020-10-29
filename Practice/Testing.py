import pyautogui
from PIL import Image, ImageGrab
import time

def ScreenShot():
    image = ImageGrab.grab()
    image.show()

time.sleep(3)
ScreenShot()
