CREATE DATABASE IF NOT EXISTS questao6;
USE questao6;
CREATE TABLE IF NOT EXISTS Students (
  id INT NOT NULL AUTO_INCREMENT,
  name VARCHAR(20),
  value INT,
  PRIMARY KEY(id)
);
CREATE TABLE IF NOT EXISTS Notes (
  Grade INT NOT NULL AUTO_INCREMENT,
  Min_Value INT,
  Max_Value INT,
  PRIMARY KEY(Grade)
);
INSERT INTO Notes ( Grade, Min_Value, Max_Value )
VALUES
  (1, 0, 9 ),
  (2, 10, 19),
  (3, 20, 29),
  (4, 30, 39),
  (5, 40, 49),
  (6, 50, 59),
  (7, 60, 69),
  (8, 70, 79),
  (9, 80, 89),
  (10, 90, 100);

INSERT INTO Students ( id, name, value )
VALUES
  ( 1, 'Julia', 81 ),
  ( 2, 'Carol', 68 ),
  ( 3,'Maria', 99 ),
  ( 4,'Andreia', 78),
  ( 5,'jaqueline', 63),
  ( 6,'Marcela', 88);
