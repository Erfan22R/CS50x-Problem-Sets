SELECT title
FROM movies
INNER JOIN stars ON movies.id = stars.movie_id
INNER JOIN people ON stars.person_id = people.id
WHERE name LIKE "Chadwick Boseman"
ORDER BY name DESC
LIMIT 5;
