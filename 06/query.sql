use questao6;
SELECT Students.id,
  CASE WHEN Notes.Grade <= 7 THEN NULL ELSE Students.name END AS name, Notes.Grade
  FROM Students
  INNER JOIN Notes ON Notes.Max_Value > Students.value AND Notes.Min_Value < Students.value
  ORDER BY Notes.Grade DESC, Students.name;

