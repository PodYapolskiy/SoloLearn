"""
В данном датасете у каждого случая есть 30 свойств (параметров), влияющих на результат по-разному.
Порой бывает важно знать, что в большей степени влияет на результат.

В регрессии мы высчитываем важность свойств используя дисперсию.
"""
import pandas as pd
from sklearn.datasets import load_breast_cancer
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
from utils import decor

cancer_data = load_breast_cancer()
df = pd.DataFrame(cancer_data['data'], columns=cancer_data['feature_names'])
df['target'] = cancer_data['target']

X = df[cancer_data.feature_names].values
y = df['target'].values

X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=101)

rf = RandomForestClassifier(n_estimators=10, random_state=111)
rf.fit(X_train, y_train)

# Порядок важности свойств в модели в убывающем порядке
ft_imp = pd.Series(rf.feature_importances_, index=cancer_data.feature_names).sort_values(ascending=False)
print(ft_imp.head(10))  # worst radius = 0.309701 - самое важное свойство в этой модели
decor()

# Точность модели
print(f"Accuracy: {rf.score(X_test, y_test)}")  # 0.965
decor()

# Обнаружив, что наибольшее влияние дают 'worst' свойства, ищем именно их
worst_cols = [col for col in df.columns if 'worst' in col]
print(worst_cols)
decor()

X_worst = df[worst_cols]  # Выбираем столбцы только с 'worst'
X_train, X_test, y_train, y_test = train_test_split(X_worst, y, random_state=101)  # Также разделяем с тем же сидом
rf.fit(X_train, y_train)

print(f"Accuracy : {rf.score(X_test, y_test)}")  # 0.972
"""
Точность улучшилась, так как мы убрали свойства, создающие шум и слабо коррелирующие с результатом.
Преимущество построения лучшей модели с использованием меньшего количества свойств будет более заметным при большом размере выборки.
"""