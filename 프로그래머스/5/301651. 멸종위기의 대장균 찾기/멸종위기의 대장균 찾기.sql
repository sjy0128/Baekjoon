WITH RECURSIVE ecoli_tree AS (
    SELECT id, parent_id, 0 AS depth
    FROM ecoli_data
    WHERE parent_id IS NULL
    
    UNION ALL
    
    SELECT child.id, child.parent_id, parent.depth + 1 AS depth
    FROM ecoli_data AS child
    JOIN ecoli_tree AS parent
    ON child.parent_id = parent.id
)
SELECT COUNT(id) AS COUNT, depth + 1 AS GENERATION
FROM ecoli_tree
WHERE id NOT IN (
    SELECT DISTINCT parent_id
    FROM ecoli_data
    WHERE parent_id IS NOT NULL
)
GROUP BY GENERATION
ORDER BY GENERATION;