-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Categories with Various P...
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2623

select p.name, c.name
from products p, categories c
where p.amount > 100 and p.id_categories = c.id 
    and (p.id_categories = 1 or p.id_categories = 2 or p.id_categories = 3 
        or p.id_categories = 6 or p.id_categories = 9)
