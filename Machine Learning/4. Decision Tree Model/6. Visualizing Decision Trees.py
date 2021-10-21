import os
os.environ["PATH"] += os.pathsep + r'D:\Graphviz\bin'  # Без этой штуки норально не рендериться

import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.tree import export_graphviz
import graphviz

feature_names = ['Pclass', 'male']
df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
X = df[feature_names].values
y = df['Survived'].values

dt = DecisionTreeClassifier()
dt.fit(X, y)

dot_file = export_graphviz(dt, feature_names=feature_names)
graph = graphviz.Source(dot_file)
graph.render(filename='tree', directory=r'Machine Learning\4. Decision Tree Model', format='png', cleanup=True)

"""
При запуске скрипта рендерит картинку этого дерева решений.
"""