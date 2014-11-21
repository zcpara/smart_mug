#ifndef NTC_H
#define NTC_H

typedef struct _RT_t {
  int temp;
  float rmin, rnor, rmax;
} RT_t;

RT_t RT_table[] = {
  { -40, 196.094, 205.861, 215.92 },
  { -39, 185.228, 194.386, 203.815 },
  { -38, 175.038, 183.631, 192.471 },
  { -37, 165.479, 173.543, 181.837 },
  { -36, 156.507, 164.078, 171.862 },
  { -35, 148.082, 155.194, 162.502 },
  { -34, 140.167, 146.85, 153.714 },
  { -33, 132.728, 139.011, 145.461 },
  { -32, 125.734, 131.643, 137.706 },
  { -31, 119.155, 124.714, 130.415 },
  { -30, 112.964, 118.196, 123.559 },
  { -29, 107.135, 112.061, 117.109 },
  { -28, 101.645, 106.285, 111.037 },
  { -27, 96.472, 100.844, 105.32 },
  { -26, 91.596, 95.717, 99.934 },
  { -25, 86.998, 90.884, 94.858 },
  { -24, 82.66, 86.326, 90.073 },
  { -23, 78.567, 82.026, 85.56 },
  { -22, 74.702, 77.967, 81.302 },
  { -21, 71.052, 74.135, 77.282 },
  { -20, 67.603, 70.515, 73.487 },
  { -19, 64.322, 67.073, 69.879 },
  { -18, 61.222, 63.822, 66.471 },
  { -17, 58.292, 60.749, 63.252 },
  { -16, 55.521, 57.844, 60.21 },
  { -15, 52.899, 55.096, 57.333 },
  { -14, 50.418, 52.497, 54.613 },
  { -13, 48.07, 50.037, 52.039 },
  { -12, 45.845, 47.708, 49.603 },
  { -11, 43.738, 45.503, 47.296 },
  { -10, 41.741, 43.413, 45.111 },
  { -9, 39.848, 41.432, 43.041 },
  { -8, 38.053, 39.554, 41.079 },
  { -7, 36.349, 37.773, 39.218 },
  { -6, 34.733, 36.084, 37.453 },
  { -5, 33.198, 34.48, 35.779 },
  { -4, 31.741, 32.957, 34.19 },
  { -3, 30.356, 31.511, 32.681 },
  { -2, 29.041, 30.138, 31.248 },
  { -1, 27.79, 28.832, 29.887 },
  { 0, 26.601, 27.591, 28.593 },
  { 1, 25.479, 26.421, 27.372 },
  { 2, 24.41, 25.306, 26.21 },
  { 3, 23.392, 24.244, 25.104 },
  { 4, 22.421, 23.232, 24.05 },
  { 5, 21.497, 22.268, 23.047 },
  { 6, 20.615, 21.349, 22.09 },
  { 7, 19.774, 20.473, 21.178 },
  { 8, 18.971, 19.637, 20.309 },
  { 9, 18.206, 18.84, 19.479 },
  { 10, 17.475, 18.08, 18.688 },
  { 11, 16.778, 17.354, 17.934 },
  { 12, 16.111, 16.661, 17.213 },
  { 13, 15.475, 15.999, 16.525 },
  { 14, 14.867, 15.367, 15.868 },
  { 15, 14.286, 14.763, 15.241 },
  { 16, 13.731, 14.185, 14.642 },
  { 17, 13.2, 13.634, 14.069 },
  { 18, 12.692, 13.106, 13.521 },
  { 19, 12.207, 12.602, 12.998 },
  { 20, 11.742, 12.119, 12.497 },
  { 21, 11.297, 11.657, 12.018 },
  { 22, 10.872, 11.216, 11.56 },
  { 23, 10.464, 10.793, 11.122 },
  { 24, 10.074, 10.388, 10.702 },
  { 25, 9.7, 10, 10.3 },
  { 26, 9.338, 9.629, 9.92 },
  { 27, 8.99, 9.273, 9.555 },
  { 28, 8.658, 8.932, 9.206 },
  { 29, 8.339, 8.605, 8.871 },
  { 30, 8.034, 8.292, 8.55 },
  { 31, 7.741, 7.991, 8.242 },
  { 32, 7.46, 7.703, 7.947 },
  { 33, 7.191, 7.427, 7.663 },
  { 34, 6.933, 7.161, 7.391 },
  { 35, 6.685, 6.907, 7.13 },
  { 36, 6.447, 6.663, 6.879 },
  { 37, 6.219, 6.428, 6.639 },
  { 38, 6, 6.203, 6.407 },
  { 39, 5.789, 5.987, 6.185 },
  { 40, 5.587, 5.779, 5.972 },
  { 41, 5.393, 5.579, 5.767 },
  { 42, 5.206, 5.387, 5.57 },
  { 43, 5.027, 5.203, 5.38 },
  { 44, 4.855, 5.026, 5.198 },
  { 45, 4.689, 4.855, 5.023 },
  { 46, 4.53, 4.691, 4.854 },
  { 47, 4.377, 4.534, 4.692 },
  { 48, 4.23, 4.382, 4.536 },
  { 49, 4.088, 4.236, 4.386 },
  { 50, 3.952, 4.096, 4.241 },
  { 51, 3.824, 3.964, 4.106 },
  { 52, 3.701, 3.837, 3.975 },
  { 53, 3.583, 3.715, 3.85 },
  { 54, 3.469, 3.598, 3.729 },
  { 55, 3.359, 3.485, 3.612 },
  { 56, 3.254, 3.376, 3.5 },
  { 57, 3.152, 3.272, 3.393 },
  { 58, 3.055, 3.171, 3.289 },
  { 59, 2.961, 3.074, 3.189 },
  { 60, 2.87, 2.981, 3.092 },
  { 61, 2.783, 2.891, 3 },
  { 62, 2.699, 2.804, 2.91 },
  { 63, 2.618, 2.72, 2.824 },
  { 64, 2.54, 2.639, 2.74 },
  { 65, 2.465, 2.562, 2.66 },
  { 66, 2.392, 2.487, 2.583 },
  { 67, 2.322, 2.414, 2.508 },
  { 68, 2.254, 2.344, 2.436 },
  { 69, 2.189, 2.277, 2.366 },
  { 70, 2.126, 2.212, 2.299 },
  { 71, 2.065, 2.149, 2.234 },
  { 72, 2.007, 2.088, 2.171 },
  { 73, 1.95, 2.03, 2.111 },
  { 74, 1.895, 1.973, 2.052 },
  { 75, 1.842, 1.918, 1.995 },
  { 76, 1.791, 1.865, 1.941 },
  { 77, 1.742, 1.814, 1.888 },
  { 78, 1.694, 1.765, 1.837 },
  { 79, 1.648, 1.717, 1.787 },
  { 80, 1.603, 1.671, 1.739 },
  { 81, 1.558, 1.624, 1.691 },
  { 82, 1.514, 1.579, 1.644 },
  { 83, 1.472, 1.535, 1.599 },
  { 84, 1.431, 1.492, 1.555 },
  { 85, 1.392, 1.451, 1.512 },
  { 86, 1.353, 1.412, 1.471 },
  { 87, 1.316, 1.373, 1.431 },
  { 88, 1.28, 1.336, 1.393 },
  { 89, 1.245, 1.300, 1.355 },
  { 90, 1.212, 1.265, 1.319 },
  { 91, 1.179, 1.231, 1.284 },
  { 92, 1.147, 1.198, 1.25 },
  { 93, 1.116, 1.166, 1.216 },
  { 94, 1.087, 1.135, 1.184 },
  { 95, 1.058, 1.105, 1.153 },
  { 96, 1.03, 1.076, 1.123 },
  { 97, 1.003, 1.048, 1.094 },
  { 98, 0.976, 1.02, 1.066 },
  { 99, 0.951, 0.994, 1.038 },
  { 100, 0.926, 0.9683, 1.011 },
  { 101, 0.902, 0.943, 0.986 },
  { 102, 0.879, 0.919, 0.96 },
  { 103, 0.856, 0.896, 0.936 },
  { 104, 0.834, 0.873, 0.912 },
  { 105, 0.813, 0.851, 0.889 },
  { 106, 0.792, 0.829, 0.867 },
  { 107, 0.772, 0.808, 0.845 },
  { 108, 0.753, 0.788, 0.824 },
  { 109, 0.734, 0.768, 0.804 },
  { 110, 0.716, 0.749, 0.784 },
  { 111, 0.698, 0.731, 0.765 },
  { 112, 0.68, 0.713, 0.746 },
  { 113, 0.664, 0.695, 0.728 },
  { 114, 0.647, 0.678, 0.71 },
  { 115, 0.631, 0.662, 0.693 },
  { 116, 0.616, 0.646, 0.676 },
  { 117, 0.601, 0.63, 0.66 },
  { 118, 0.586, 0.615, 0.644 },
  { 119, 0.572, 0.600, 0.628 },
  { 120, 0.558, 0.586, 0.614 },
  { 121, 0.545, 0.572, 0.599 },
  { 122, 0.532, 0.558, 0.585 },
  { 123, 0.519, 0.545, 0.571 },
  { 124, 0.507, 0.532, 0.558 },
  { 125, 0.495, 0.519, 0.545 }
};

const int RT_table_len = sizeof(RT_table)/sizeof(RT_t);

#endif
