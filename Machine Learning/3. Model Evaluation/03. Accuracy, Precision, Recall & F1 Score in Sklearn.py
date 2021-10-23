import pandas as pd
from sklearn.linear_model import LogisticRegression

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
X = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
Y = df['Survived'].values

Model = LogisticRegression()
Model.fit(X, Y)

Y_pred = Model.predict(X)

from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score

print(f'Accuracy: {accuracy_score(Y, Y_pred)}')
print(f'Precision: {precision_score(Y, Y_pred)}')
print(f'Recall: {recall_score(Y, Y_pred)}')
print(f'F1 Score: {f1_score(Y, Y_pred)}')

"""
Каждая из этих Ф принимает 2 одномерных массива: (Истиные значения цели, предсказанные значения).
Имея эти значения можем пользоваться метриками, для анализа модели.

С одной моделью эти значения не особо многое могут нам показать, они будут полезны при сравнении с другими моделями.
"""

from sklearn.metrics import confusion_matrix

print(confusion_matrix(Y, Y_pred))  # Output [[475 70][103 239]]

"""
Scikit-learn переворачивает Матрицу путаницы
    
                        Предсказано неверно       Предсказано верно
Действительно неверно          [475]                     70
Действительно верно             103                     [239]
    
Отрицательные целевые значения соответствуют 0, а положительные - 1. Scikit-learn упорядочил их в этом порядке.
Убедиться и проверять правильность интерпретации значений!
"""