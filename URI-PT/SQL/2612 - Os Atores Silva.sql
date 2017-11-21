-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Os Atores Silva
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2612

select distinct m.id, m.name
from movies m, genres g, movies_actors mc, actors a
where m.id_genres = g.id and g.description = 'Action'
    and mc.id_movies = m.id and mc.id_actors = a.id 
    and (a.name = 'Marcelo Silva' or a.name = 'Miguel Silva')
