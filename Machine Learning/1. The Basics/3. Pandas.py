import pandas as pd
from utils import decor

pd.options.display.max_columns = 6  # Line show all 6 columns in the table.
# "https://sololearn.com/uploads/files/titanic.csv"
df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
print(df.head())  # This method returns 5 rows.
decor()

'''
	df = DataFrame - 2ухмерная структура данных (столбики и ряды)
	csv (comma-separated values) file.
'''

print(df.describe())  # Table of statistics about the columns.
decor()

'''
	count: Number of rows that have a value. In our example every passenger has a value for each of the columns, so the value is 887(total number).
	mean: standard average
	std: standard deviation.
	min: smallest value
	25%: 25th percentile
	50%: 50th percentile (median)
	75%: 75th percentile
	max: largest value
'''

column = df['Fare']  # Выбор столбца.
print(column)
decor()

'''
	It's called Pandas Series.
	A Pandas Series is a single column from a Pandas DataFrame.
'''

# Выбор нескольких столбцов. Составление маленького DataFrame.
small_df = df[['Age', 'Sex', 'Survived']]
print(small_df.head())
decor()

'''
	При выборе одиночного столбца - [].
	При выборе нескольких столбцов - [[]].
'''

df['male'] = df['Sex'] == 'male'
print(df.head())
