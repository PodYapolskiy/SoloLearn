import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import roc_curve, roc_auc_score

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
x = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

x_train, x_test, y_train, y_test = train_test_split(x, y)

model1 = LogisticRegression()
model1.fit(x_train, y_train)  # В первой модели берём 6 свойств
y_pred_proba1 = model1.predict_proba(x_test)
print("Model 1 AUC score:", roc_auc_score(y_test, y_pred_proba1[:, 1]))


fpr1, tpr1, thresholds1 = roc_curve(y_test, y_pred_proba1[:, 1])


model2 = LogisticRegression()
model2.fit(x_train[:, 0:2], y_train)  # Во второй модели берём только 'Pclass' и 'male' (2 столбца)
y_pred_proba2 = model2.predict_proba(x_test[:, 0:2])
print("Model 2 AUC score:", roc_auc_score(y_test, y_pred_proba2[:, 1]))


fpr2, tpr2, thresholds2 = roc_curve(y_test, y_pred_proba2[:, 1])

plt.plot(fpr1, tpr1)
plt.plot(fpr2, tpr2)

plt.plot([0, 1], [0, 1], linestyle='--')
plt.xlim([0.0, 1.0])
plt.ylim([0.0, 1.0])
plt.xlabel('1 - specificity (FPR)')  # FP
plt.ylabel('sensitivity (TPR)')  # TN
plt.show()

"""
Синий график заметно лучше, оранжевого. Следовательно, первая модель эффективнее второй.

AUC:
	Этот показатель показывает в целом насколько хорошо работает модель лог. регрессии с нашими данными.
	Кривая ROC показывает производительность нескольких моделей, AUC НЕ измеряет производительность одной модели.
"""