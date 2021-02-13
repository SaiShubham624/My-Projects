from direct.showbase.PythonUtil import reduceAngle
from ursina import *

class Voxel(Button):
    def __init__(self):
        super().__init__(
            model = 'cube',
            color = color.red,
            scale = (1, 1)

        )