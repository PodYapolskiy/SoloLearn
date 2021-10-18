import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')

plt.scatter(df['Fare'], df['Age'], c = df['Survived'])
plt.xlabel('Fare')
plt.ylabel('Age')

"""
Classification Graphically (Графическая классификация):
	Анализируя график:
		- Те кто заплатил больше, имели больший шанс на выживание (правая половина)
		- Дети имют больший шанс выжить, что соответствует интуиции.
			
	Задача Linear Model (Линейной Модели) - найти линию, лучше всего разделяющую 2 класса, так чтобы жёлтые и фиолетовые точки находились с разных сторон.
		
	Equation for the line (Уравнение для линии)
	Линия определяется уравнением 0 = ax + by + c (a,b,c - коэффиценты)
	...
	Логистическая Регрессия - путь поиска лучшей разделяющей линии математически.
"""

plt.plot( [30, 100], [0, 80] )

plt.show()