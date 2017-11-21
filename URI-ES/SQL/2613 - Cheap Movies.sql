-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Cheap Movies
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2613

select m.id, m.name
from movies m, prices p
where m.id_prices = p.id and p.value < 2.00
