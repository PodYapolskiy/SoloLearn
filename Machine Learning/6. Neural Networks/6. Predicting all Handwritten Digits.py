import matplotlib.pyplot as plt
from sklearn.datasets import load_digits
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
from utils import decor

X, y = load_digits(return_X_y=True)
X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=2)

mlp = MLPClassifier(random_state=2)
mlp.fit(X_train, y_train)

print("Accuracy:", mlp.score(X_test, y_test))  # 0.96
decor()


y_pred = mlp.predict(X_test)
incorrect = X_test[y_pred != y_test]  # Все неверно предсказанные картинки 
incorrect_true = y_test[y_pred != y_test]  # Действителбные значения неправильно предсказанных
incorrect_pred = y_pred[y_pred != y_test]  # Сами предсказанные значения

j = 0
plt.matshow(incorrect[j].reshape(8, 8), cmap=plt.cm.gray)
plt.xticks(())
plt.yticks(())

print(incorrect[j].reshape(8, 8).astype(int))
decor()

print(incorrect.shape[0])  # 18 - всего неверно предсказанных случаев
decor()

print("True Value:", incorrect_true[j])
print("Predicted Value:", incorrect_pred[j])
decor()

plt.show()
