import pandas as pd
from sklearn.datasets import load_breast_cancer
from sklearn.linear_model import LogisticRegression

from utils import decor


cancer_data = load_breast_cancer() # Похожая стуктура на Python словарь

print(cancer_data.keys()) # Все возможные ключи cancer_data по которым можно узнать о dataset
#print(cancer_data['DESCR']) # detailed DESCRIPTION of the dataset
decor()

"""
Мы имеем 30 свойств, качеств ; 569 случаев ; цель: злокачественная или нет (malignant or benign).
	
Было 10 измерений. Есть среднее значение, стандартная ошибка, худшее значение. В результате 3 * 10 = 30 свойств, качеств.
В этом dataset несколько свойств (features) базируются на вычислениях из других столбцов.
Процесс определения того, какие доп. свойства следует рассчитывать называется разработкой свойст (Feature Engineering).
"""

df = pd.DataFrame( cancer_data['data'], columns = cancer_data['feature_names'] )
print(cancer_data['target_names'])  # malignant = 0, benign = 1.
decor()
df['target'] = cancer_data['target']
print(df.head())
decor()

X = df[cancer_data.feature_names].values
Y = df['target'].values

Model = LogisticRegression(solver = 'liblinear')  # Используем алгоритм, который лучше подходит для маленьких dataset`ов
Model.fit(X, Y)

print('Prediction for datapoint 0: ', Model.predict( [X[0]] ))
decor()

print(Model.score(X,Y))  # 96% точность