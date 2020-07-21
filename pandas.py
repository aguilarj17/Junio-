import pandas as pd
import numpy as np


#First make the elements of the colums
data = {'list' : [1, 2, 3, 4, 5, 6, 7, 8, 9, 10],
        'name': ['Jorge', 'Angel', 'Gabriel', 'Ricardo', 'Pedro', 'Neguip','Adriana', 'Trillo', 'Mariana', 'Saul'],
        'score': [9.5, 8.5, 9.7, 7.5, 6.0, 7.5, 10, 10, 8.2, 9.5],
        'approved' : ['yes', 'yes', 'yes', 'yes', 'no', 'yes', 'yes', 'yes', 'yes', 'yes']}

#Then put the labels of th raws
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']

#print the tabla and organized the data
tabla = pd.DataFrame(data, index = labels)
print(tabla)
