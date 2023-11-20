create database questao8;
use questao8;
create table dogs (
  id integer not null,
  name varchar(50) not null,
  primary key(id)
);
create table cats (
  id integer not null,
  name varchar(50) not null,
  primary key(id)
);
insert into dogs ( id, name )
values
  ( 1, 'capeao' ),
  ( 2, 'belinha'),
  ( 3, 'lulu'),
  ( 4, 'lady'),
  ( 5, 'amora'),
  ( 6, 'capeao'),
  ( 7, 'belinha');
insert into cats (id, name )
values
  ( 1, 'frajola' ),
  ( 2, 'rachel'),
  ( 3, 'mike'),
  ( 4, 'amora'),
  ( 5, 'lady');
