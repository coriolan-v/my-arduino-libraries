// This is just the linear fireColor[] array from the original OctoWS2811
// Fire example, since NeoPXL8 has its own gamma function.

extern const unsigned int fireColor[100];

#define RGB(r, g, b) (((r) << 16) | ((g) << 8) | (b))

const unsigned int fireColor[100] = {
    RGB(0, 0, 0),      RGB(5, 0, 0),      RGB(10, 0, 0),     RGB(14, 0, 0),
    RGB(19, 0, 0),     RGB(23, 0, 0),     RGB(27, 0, 0),     RGB(31, 0, 0),
    RGB(35, 0, 0),     RGB(39, 0, 0),     RGB(43, 0, 0),     RGB(47, 0, 0),
    RGB(51, 0, 0),     RGB(55, 0, 0),     RGB(59, 0, 0),     RGB(63, 0, 0),
    RGB(67, 0, 0),     RGB(71, 0, 0),     RGB(75, 0, 0),     RGB(79, 0, 0),
    RGB(83, 0, 0),     RGB(88, 0, 0),     RGB(92, 0, 0),     RGB(96, 0, 0),
    RGB(100, 0, 0),    RGB(104, 0, 0),    RGB(108, 0, 0),    RGB(112, 0, 0),
    RGB(116, 0, 0),    RGB(121, 0, 0),    RGB(125, 0, 0),    RGB(129, 0, 0),
    RGB(133, 0, 0),    RGB(137, 0, 0),    RGB(141, 0, 0),    RGB(145, 0, 0),
    RGB(149, 0, 0),    RGB(153, 0, 0),    RGB(157, 0, 0),    RGB(161, 0, 0),
    RGB(165, 0, 0),    RGB(169, 0, 0),    RGB(173, 0, 0),    RGB(177, 0, 0),
    RGB(181, 0, 0),    RGB(185, 0, 0),    RGB(190, 0, 0),    RGB(194, 0, 0),
    RGB(198, 0, 0),    RGB(202, 0, 0),    RGB(205, 2, 0),    RGB(207, 6, 0),
    RGB(209, 10, 0),   RGB(211, 14, 0),   RGB(213, 18, 0),   RGB(215, 22, 0),
    RGB(217, 26, 0),   RGB(219, 30, 0),   RGB(221, 35, 0),   RGB(223, 39, 0),
    RGB(225, 43, 0),   RGB(227, 47, 0),   RGB(229, 51, 0),   RGB(231, 55, 0),
    RGB(233, 59, 0),   RGB(235, 63, 0),   RGB(237, 67, 0),   RGB(239, 71, 0),
    RGB(241, 75, 0),   RGB(243, 79, 0),   RGB(245, 83, 0),   RGB(248, 88, 0),
    RGB(250, 92, 0),   RGB(252, 96, 0),   RGB(254, 100, 0),  RGB(255, 105, 1),
    RGB(255, 111, 3),  RGB(255, 117, 5),  RGB(255, 123, 7),  RGB(255, 130, 9),
    RGB(255, 136, 11), RGB(255, 142, 13), RGB(255, 148, 15), RGB(255, 154, 17),
    RGB(255, 160, 19), RGB(255, 166, 21), RGB(255, 172, 23), RGB(255, 179, 25),
    RGB(255, 185, 27), RGB(255, 191, 29), RGB(255, 197, 31), RGB(255, 203, 33),
    RGB(255, 209, 35), RGB(255, 215, 37), RGB(255, 221, 39), RGB(255, 227, 41),
    RGB(255, 234, 44), RGB(255, 240, 46), RGB(255, 246, 48), RGB(255, 252, 50)};
