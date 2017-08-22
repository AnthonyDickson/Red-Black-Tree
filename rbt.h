#ifndef RBT_H_
#define RBT_H_

/** Defines the node colours of a rbt. */
typedef enum {RED, BLACK} rbt_colour;

/** Defines a rbt node. */
typedef struct rbt_node *rbt;

/** 
 * Creates a new, empty rbt.
 * @return The new rbt.
 */
extern rbt rbt_new();

/* Deallocates the memory used by the rbt. 
 * @return A NULL pointer.
 */
extern rbt rbt_free(rbt r);

/**
 * Inserts a key into a rbt.
 * Must assign result to original rbt. E.g. rbt r = rbt_insert(r, "key");
 * @param rbt r The rbt to insert into.
 * @param char *key The key to insert.
 * @return The rbt after the key is inserted.
 */
 extern rbt rbt_insert(rbt r, char *key);
 
 /**
  * Searches the rbt for a key.
  * @param rbt r The rbt to search.
  * @param char *key The key to search for.
  * @return Returns 1 if found, 0 if not found.
  */
 extern int rbt_search(rbt r, char *key);

 /**
 * Deletes a key from the rbt.
 * Must assign result to original rbt. E.g. rbt r = rbt_delete(r, "key");
 * @param rbt r The rbt to delete from.
 * @param char *key The key to delete.
 * @return The rbt after the key is deleted.
 */
extern rbt rbt_delete(rbt r, char *key);

/** 
 * Traverses the rbt inorder and applies the given function to each node.
 * @param rbt r The rbt to traverse.
 * @param void f(char *key) The function to apply.
 */
 extern void rbt_inorder(rbt r, void f(char *key, rbt_colour c));
 
 /** 
  * Traverses the rbt preorder and applies the given function to each node.
  * @param rbt r The rbt to traverse.
  * @param void f(char *key) The function to apply.
  */
extern void rbt_preorder(rbt r, void f(char *key, rbt_colour c));

#endif