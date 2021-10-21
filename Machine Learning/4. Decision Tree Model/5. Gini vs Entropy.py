import pandas as pd
import numpy as np
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import KFold
from sklearn.metrics import accuracy_score, precision_score, recall_score
from utils import decor

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
X = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

kf = KFold(n_splits=5, shuffle=True)
for criterion in ['gini', 'entropy']:
    print(f"Decision Tree - {criterion}:")

    accuracy  = []
    precision = []
    recall    = []

    for train_index, test_index in kf.split(X):
        X_train, X_test = X[train_index], X[test_index]
        y_train, y_test = y[train_index], y[test_index]

        dt = DecisionTreeClassifier(criterion=criterion)  # Выбираем критерий оценивая нечистоты
        dt.fit(X_train, y_train)

        y_pred = dt.predict(X_test)
        accuracy.append(accuracy_score(y_test, y_pred))
        precision.append(precision_score(y_test, y_pred))
        recall.append(recall_score(y_test, y_pred))

    print("  Accuracy: ", np.mean(accuracy))
    print("  Precision:", np.mean(precision))
    print("  Recall:   ", np.mean(recall))
    decor()

"""
Видим небольшую разницу в исполнении в сторону Энтропии, но это разница очень несущественная.
"""