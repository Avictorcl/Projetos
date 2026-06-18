import numpy as np
import matplotlib.pyplot as plt

# Parâmetros do sistema (Valores da Questão 28)
m = 0.25      # Massa em kg
k = 85.0      # Constante elástica em N/m
b = 0.07      # Constante de amortecimento em kg/s
A = 1.0       # Amplitude inicial em metros
delta = 0.0   # Fase inicial

# Cálculos da dinâmica do sistema
omega_n = np.sqrt(k / m)                 # Frequência angular natural
gama = b / (2 * m)                       # Fator de amortecimento exponencial
omega_d = np.sqrt(omega_n**2 - gama**2)  # Frequência angular da malha amortecida

# Geração do vetor de tempo (de 0 a 5 segundos com alta resolução)
t = np.linspace(0, 5, 1000)

# 1. Equação principal do movimento oscilatório subamortecido
x_t = A * np.exp(-gama * t) * np.cos(omega_d * t + delta)

# 2. Equações das envoltórias de decaimento (limites superior e inferior)
env_sup = A * np.exp(-gama * t)
env_inf = -A * np.exp(-gama * t)

# Renderização Gráfica
plt.style.use('dark_background') # Interface otimizada
plt.figure(figsize=(10, 6))

# Plotagem das curvas
plt.plot(t, x_t, label='Posição x(t)', color='cyan', linewidth=2)
plt.plot(t, env_sup, 'r--', label='Envoltória de Decaimento', alpha=0.8)
plt.plot(t, env_inf, 'r--', alpha=0.8)

# Configurações do painel
plt.title('Simulação Telemétrica: Oscilador Harmônico Subamortecido', fontsize=14, fontweight='bold')
plt.xlabel('Tempo (s)', fontsize=12)
plt.ylabel('Posição (m)', fontsize=12)
plt.axhline(0, color='white', linewidth=1, alpha=0.3)
plt.grid(True, linestyle=':', alpha=0.4)
plt.legend(loc='upper right')

# Exibir painel
plt.show()