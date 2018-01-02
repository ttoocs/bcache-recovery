# Why:
At some point I `echo 1 > running` of a drive that didn't have it's cache attached, without realizing the cache had dirty data.
# Plan:
 * Attempt to be able to find data-structures on disk
 * Attempt to find the b-trees of the cache / backing
 * Find any partial trees (Via data-blocks, vs superblocks)
 * ??? Alter the cache/backing to use alternative tree,
 * ??? Recover particular versions of blocks of the bcache device. (from different trees/caches/whatnot)


