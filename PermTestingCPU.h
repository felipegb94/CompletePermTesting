#ifndef PERMTESTINGCPU_H
#define PERMTESTINGCPU_H
#include "armadillo"

/**
 * @brief PermTestingMatrix
 * @details 
 *         The following method performs permutation testing to find group differences between 2 
 *         different groups using a two-sample t-test as the test statistic. It uses a different
 *         approach than the iterative one because instead of calculating one permutation at a 
 *         time it computes a batch of them at a time. How big is the batch depends on the max 
 *         memory input.
 * 
 * @param data NxV matrix: N = Total number of subjects. 
 *                         V = Total number of statistics/voxels per subject
 * @param indexMatrix nPermutationsxV Matrix: 
 *                         nPermutations = Total number of permutations to be done
 *                         V = Same as in data.
 * @param nGroup1 = Total number of subjects in group1. N-nGroup1 = nGroup2.
 * @return maxT numPermutationsx1 vector: Maximum null distribution.
 */
arma::mat PermTestingCPU(arma::mat data, 
                         int nPermutations,
                         int nGroup1, 
                         double maxMemory);

#endif