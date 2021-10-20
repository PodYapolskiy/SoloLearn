import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import roc_curve

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
x = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

x_train, x_test, y_train, y_test = train_test_split(x, y)

model = LogisticRegression()
model.fit(x_train, y_train)

y_pred_proba = model.predict_proba(x_test)

# fpr = false positive rates
# tpr = true positive rates
fpr, tpr, thresholds = roc_curve(y_test, y_pred_proba[:, 1])

plt.plot(fpr, tpr)
plt.plot([0, 1], [0, 1], linestyle='--')
plt.xlim([0.0, 1.0])
plt.ylim([0.0, 1.0])
plt.xlabel('1 - specificity (FPR)')  # FP
plt.ylabel('sensitivity (TPR)')  # TN
plt.show()

"""
Как построить ROC Curve.
	Кривая ROC представляет собой график зависимости spe(specificity) от sen(sensitivity).

	Мы строим модель логистической регрессии, а затем вычисляем spe и sen для каждого возможного порога.
	Если у нас есть 5 точек со след. прогнозируемыми вероятностями: 0.3, 0.4, 0.6, 0.7, 0.8, мы будем использовать каждое из этих 5 значений.
		
	Функция roc_curve() берёт истинные целевые значения и предсказанные вероятности из нашей модели.
	Мы используем метод pred_proba для модели, чтобы получить вероятности. Затем функцию roc_curve. Функция возвращает массивы FP(ложных положительных) результатов и TP(истинно положительных) показателей, threshold значения.
		Частота FP - это 1 - spe (ось X), а частота TP - sen (ось Y).
		
	Чем ближе кривая к верхнему левому углу, тем лучше производительность. Кривая никогда не должна опускаться ниже диагонали, поскольку это будет означать, что она работает хуже,чем случайная модель.
	
		
	Возьмём 3 точки с графика ('myplot_1.png'):
		Шаблон: point(1-spe, sen)
		Точка А(0.1, 0.6)
		Точка B(0.2, 0.7)
		Точка C(0.5, 0.8)
	
	Если ситуация такова, что выжно, чтобы все P(положительные) прогнозы были верными. Модель, которая правильно предсказывает большинство отрицательных случаев.
	(Модель А с высокой spe)

	Если ситуация, что важно уловить больше положительных случаев.
	(Модель С с высокой sen)

	Если важно соблюдать баланс.
	(Модель B)
	
	Очень важно следить за правильной интерпритацией данных, что то или иное значение означает именно себя.
"""