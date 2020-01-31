from sklearn.datasets 
import load_boston from sklearn.preprocessing 
import MinMaxScaler from sklearn.preprocessing 
import StandardScaler from sklearn.linear_model 
import LinearRegression from sklearn.model_selection 
import train_test_split from sklearn.pipeline 
import make_pipeline from sklearn.metrics 
import mean_squared_error import time                     

def timer(f):    
    start = time.time()    
    res = f()    
    end = time.time()    
    print("fitting: {}".format(end - start))    
    return res

def build_model_for_data(data, target):
    X_train, X_test, y_train, y_test = train_test_split(data, target, random_state=2)
    pipeline = make_pipeline(LinearRegression())    
    model = timer(lambda: pipeline.fit(X_train, y_train))    
    return (X_test, y_test, model) 
    
boston = load_boston() print(boston['DESCR']) print() print() print("Example value distribution of features: ")
for x in boston['data'][0]:    
    print(x)
min_max = MinMaxScaler() boston_min_max = min_max.fit_transform(boston['data'])
print() print("Value distribution after min max: ") for x in boston_min_max[0]:    
    print(x)
std = StandardScaler() boston_std = std.fit_transform(boston['data'])
print() 
print("Value distribution after std: ") for x in boston_std[0]:
    print(x)
print("MinMax:") X_test, y_test, model = build_model_for_data(boston_min_max, boston['target']) 
prediction = model.predict(X_test) print("MSE: {}".format(mean_squared_error(y_test, prediction))) 
print() 
print("Std:") X_test, y_test, model = build_model_for_data(boston_std, boston['target']) 
prediction = model.predict(X_test) print("MSE: {}".format(mean_squared_error(y_test, prediction))