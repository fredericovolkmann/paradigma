numeros = [5,4,3,2,1,0]


unicos = {x for x in numeros}

print(unicos)  

conj_quadrados = {x**2 for x in numeros if x % 2 == 0}

print(conj_quadrados)  