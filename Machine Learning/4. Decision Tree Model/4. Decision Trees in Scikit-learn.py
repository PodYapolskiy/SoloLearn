import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split, KFold
from sklearn.metrics import precision_score, recall_score
import numpy as np
from utils import decor

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
X = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=22)
model = DecisionTreeClassifier()
model.fit(X_train, y_train)

print(model.predict([[3, True, 22, 1, 0, 7.25]]))  # [0]
decor()

# Метрики древа решений
dt_accuracy_scores  = []
dt_precision_scores = []
dt_recall_scores    = []

# Метрики логистической регрессии
lr_accuracy_scores  = []
lr_precision_scores = []
lr_recall_scores    = []

kf = KFold(n_splits=5, shuffle=True, random_state=10)
for train_index, test_index in kf.split(X):
    X_train, X_test = X[train_index], X[test_index]  # Значения для тренировки моделей и их последующего теста
    y_train, y_test = y[train_index], y[test_index]  # Окончательные значения для проверки моделей и их последующего теста

    dt = DecisionTreeClassifier()
    dt.fit(X_train, y_train)
    
    dt_y_pred = dt.predict(X_test)
    dt_accuracy_scores.append(dt.score(X_test, y_test))
    dt_precision_scores.append(precision_score(y_test, dt_y_pred))
    dt_recall_scores.append(recall_score(y_test, dt_y_pred))
    
    lr = LogisticRegression()
    lr.fit(X_train, y_train)
    
    lr_y_pred = lr.predict(X_test)
    lr_accuracy_scores.append(lr.score(X_test, y_test))
    lr_precision_scores.append(precision_score(y_test, lr_y_pred))
    lr_recall_scores.append(recall_score(y_test, lr_y_pred))

print("Decision Tree")
print("\tAccuracy:", np.mean(dt_accuracy_scores))
print("\tPrecision:", np.mean(dt_precision_scores))
print("\tRecall:", np.mean(dt_recall_scores))
decor()

print("Logistic Regression")
print("\tAccuracy:", np.mean(lr_accuracy_scores))
print("\tPrecision:", np.mean(lr_precision_scores))
print("\tRecall:", np.mean(lr_recall_scores))

"""
Можем видеть, что в среднем значения Логистической регрессии лучше, чем дерево решений. Только Recall получается примерно одинаковым.
"""