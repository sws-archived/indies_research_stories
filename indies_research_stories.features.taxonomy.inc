<?php
/**
 * @file
 * indies_research_stories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function indies_research_stories_taxonomy_default_vocabularies() {
  return array(
    's_research_story_departments' => array(
      'name' => 'Departments',
      'machine_name' => 's_research_story_departments',
      'description' => 'One of the departments associated with the story.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    's_research_story_institutes' => array(
      'name' => 'Institutes',
      'machine_name' => 's_research_story_institutes',
      'description' => 'One of the Indies.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
