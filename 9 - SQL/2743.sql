--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2743

CREATE TABLE people(
	id INTEGER PRIMARY KEY,
	name varchar(255)
);


INSERT INTO people(id, name)
VALUES 
      (1, 'Karen'),
      (2, 'Manuel'),
      (3, 'Ygor'),
      (4, 'Valentine'),
      (5, 'Jo');

  
  /*  Execute this query to drop the tables */
  -- DROP TABLE people; --

/* Solution */
SELECT name, CHAR_LENGTH(name) AS length
FROM people 
ORDER BY length DESC;