# I_alchemuy_book

Um aplicativo em **C** com interface gráfica (GTK3) e banco de dados (SQLite3) para gerenciar **ingredientes e poções** durante sessões de RPG. Ideal para jogadores que querem praticidade e organização na criação e consulta de receitas mágicas.

---

## 🧪 Tecnologias Utilizadas

- **Linguagem:** C
- **Interface Gráfica:** GTK3
- **Banco de Dados:** SQLite3
- **Build:** Makefile

---

## 🚀 Objetivo

Facilitar o controle dos ingredientes e poções durante campanhas de RPG, permitindo cadastro, busca e visualização em tempo real por meio de uma interface amigável.

---

## ✅ Conquistas de Desenvolvimento

### 🧱 Fase 1 – Fundamentos
- [ ] **1.** Configurar o projeto inicial e Makefile  
- [ ] **2.** Criar janela básica com GTK3  
- [ ] **3.** Conectar ao banco de dados SQLite  

### 🧰 Fase 2 – Estrutura de Dados
- [ ] **4.** Criar tabelas `ingredientes` e `pocoes`  
- [ ] **5.** Criar funções de execução de comandos SQL  
- [ ] **6.** Criar funções de consulta ao banco  

### 🖼️ Fase 3 – Interface Gráfica Básica
- [ ] **7.** Adicionar botão "Adicionar Ingrediente"  
- [ ] **8.** Conectar botão a uma função (callback)  
- [ ] **9.** Criar campos de entrada (GtkEntry)  
- [ ] **10.** Mostrar lista de ingredientes cadastrados  

### 🧩 Fase 4 – Integração Banco + Interface
- [ ] **11.** Adicionar ingrediente via interface  
- [ ] **12.** Atualizar lista após inserção  
- [ ] **13.** Exibir poções com seus ingredientes  

### ✨ Fase 5 – Polimento
- [ ] **14.** Melhorar layout com GtkBox/Grid  
- [ ] **15.** Separar código em múltiplos arquivos  
- [ ] **16.** Criar “Modo Jogo” para consulta rápida  
- [ ] **17.** Criar Makefile completo e README  

### 🏁 Fase Final – Conquista Suprema
- [ ] **18.** Criar sua primeira Poção com múltiplos ingredientes via interface  

---

## 🛠️ Como Compilar

```bash
sudo pacman -S gtk3 sqlite
make
./rpg_book
```
## 🤝 Contribuições

Contribuições são bem-vindas! Sinta-se livre para enviar pull requests ou abrir issues.

## 📜 Licença

Este projeto está sob a licença MIT.
