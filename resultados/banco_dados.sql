CREATE DATABASE angulo;

USE angulo;

/* tabela de dados da planilha cadastro */
CREATE TABLE cadastro
(
	id INT UNSIGNED NOT NULL AUTO_INCREMENT,
	c1 VARCHAR(255),
	c2 VARCHAR(255),
	c3 VARCHAR(255),
	c4 VARCHAR(255),
	c5 VARCHAR(255),
	c6 VARCHAR(255),
	c7 VARCHAR(255),
	c8 VARCHAR(255),
	c9 VARCHAR(255),
	c10 VARCHAR(255),
	c11 VARCHAR(255),
	c12 VARCHAR(255),
	c13 VARCHAR(255),
	c14 VARCHAR(255),
	c15 VARCHAR(255),
	c16 VARCHAR(255),
	c17 VARCHAR(255),
	c18 VARCHAR(255),
	c19 VARCHAR(255),
	c20 VARCHAR(255),
	c21 VARCHAR(255),
	c22 VARCHAR(255),
	c23 VARCHAR(255),
	PRIMARY KEY(id)
);

/* tabela de dados da planilha dos gabaritos */
CREATE TABLE gabaritos
(
	id INT UNSIGNED NOT NULL AUTO_INCREMENT,
	c1 VARCHAR(255),
	c2 VARCHAR(255),
	c3 VARCHAR(255),
	c4 VARCHAR(255),
	c5 VARCHAR(255),
	c6 VARCHAR(255),
	c7 VARCHAR(255),
	c8 VARCHAR(255),
	c9 VARCHAR(255),
	c10 VARCHAR(255),
	c11 VARCHAR(255),
	c12 VARCHAR(255),
	c13 VARCHAR(255),
	PRIMARY KEY(id)
);

/* tabela com apenas os dados necessários */
CREATE TABLE selecionados
(
	id INT UNSIGNED NOT NULL AUTO_INCREMENT,
	respostas VARCHAR(30),
	serie_prova VARCHAR(6),
	numero VARCHAR(7),
	turma VARCHAR(1),
	nome VARCHAR(255),
	PRIMARY KEY(id)
);
