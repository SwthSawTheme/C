import os
import time
import zipfile

print("Extraindo arquivos...")
with zipfile.ZipFile('ModeloExerciciosCriativosRaylib-main.zip', 'r') as zip:
    zip.extractall()
time.sleep(1)
n1 = int(input("Digite o número do exercicio: "))
os.system(f"ren ModeloExerciciosCriativosRaylib-main ex1.{n1}creativo")
time.sleep(1)
print("Criado com sucesso!")