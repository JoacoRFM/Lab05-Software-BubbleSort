#include <gtest/gtest.h>
#include "BubbleSort.h"

TEST(BubbleSortTest, CP1_UnSoloElemento) {
    std::vector<int> vet = { 5 };
    std::vector<int> expected = { 5 };

    BubbleSort::sort(vet);

    EXPECT_EQ(vet, expected);
}

TEST(BubbleSortTest, CP2_YaOrdenado) {
    std::vector<int> vet = { 1, 2 };
    std::vector<int> expected = { 1, 2 };

    BubbleSort::sort(vet);

    EXPECT_EQ(vet, expected);
}

TEST(BubbleSortTest, CP3_DosElementosDesordenados) {
    std::vector<int> vet = { 2, 1 };
    std::vector<int> expected = { 1, 2 };

    BubbleSort::sort(vet);

    EXPECT_EQ(vet, expected);
}

TEST(BubbleSortTest, CP4_TresElementosDesordenados) {
    std::vector<int> vet = { 2, 1, 3 };
    std::vector<int> expected = { 1, 2, 3 };

    BubbleSort::sort(vet);

    EXPECT_EQ(vet, expected);
}