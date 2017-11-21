-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Action Movies
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2611

select m.id, m.name
from movies m, genres g
where m.id_genres = g.id and g.description = 'Action'
