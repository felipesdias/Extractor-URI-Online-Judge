-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Filmes de Ação
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2611

select m.id, m.name
from movies m, genres g
where m.id_genres = g.id and g.description = 'Action'
