import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import recall_score, precision_recall_fscore_support


sensitivity_score = recall_score
def specificity_score(y_true, y_pred):
    p, r, f, s = precision_recall_fscore_support(y_true, y_pred)
    return r[0]  # r = [0.92142857, 0.68292683]


df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
x = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

x_train, x_test, y_train, y_test = train_test_split(x, y, random_state=5)

model = LogisticRegression()
model.fit(x_train, y_train)
y_pred = model.predict(x_test)

print("sensitivity:", sensitivity_score(y_test, y_pred))
print("specificity:", specificity_score(y_test, y_pred))

"""
Sensitivity - то же самое, что и recall (recall положительного класса)
В данном случае - сколько действительно выживших приходится на сумму действительно выживжих и тех кто должен был выжить, но не выжил

Specificity - это recall отрицательного класса.
В данном случае - сколько действительно невыживших приходится на сумму действительно невыживших и тех, кто должен был не выжить, но выжил.
"""