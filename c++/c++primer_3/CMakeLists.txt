cmake_minimum_required(VERSION 3.12)
project(c__primer_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(07)
include_directories(12)
include_directories(13)
include_directories(14)
include_directories(15)

add_executable(c__primer_3
        07/07_01.cpp
        07/ex07_02.h
        07/ex07_03.cpp
        07/ex07_04.h
        07/ex07_06.h
        07/ex07_07.cpp
        07/ex07_09.h
        07/ex07_11.cpp
        07/ex07_11.h
        07/ex07_12.h
        07/ex07_13.cpp
        07/ex07_15.h
        07/ex07_21.h
        07/ex07_22.h
        07/ex07_23.h
        07/ex07_24.h
        07/ex07_26.h
        07/ex07_27.cpp
        07/ex07_27.h
        07/ex07_32.h
        07/ex07_41.cpp
        07/ex07_41.h
        07/ex07_53.h
        07/test.cpp
        08/ex08_01.cpp
        08/ex08_04.cpp
        08/ex08_05.cpp
        10/ex10_01.cpp
        10/ex10_02.cpp
        10/ex10_03.cpp
        10/ex10_04.cpp
        10/ex10_06.cpp
        10/ex10_09.cpp
        10/ex10_11.cpp
        10/ex10_13.cpp
        10/ex10_16.cpp
        10/ex10_18.cpp
        10/ex10_19.cpp
        10/ex10_20.cpp
        11/ex11_03.cpp
        11/ex11_04.cpp
        11/ex11_07.cpp
        11/ex11_08.cpp
        11/ex11_09_10.cpp
        11/ex11_12.cpp
        11/ex11_13.cpp
        11/ex11_14.cpp
        11/ex11_14_other.cpp
        11/ex11_20.cpp
        11/ex11_23.cpp
        11/ex11_31.cpp
        11/ex11_32.cpp
        11/ex11_33.cpp
        12/ex12_01.cpp
        12/ex12_02.h
        12/ex12_06.cpp
        12/ex12_07.cpp
        12/ex12_10.cpp
        12/ex12_11.cpp
        12/ex12_13.cpp
        12/ex12_14.cpp
        12/ex12_16.cpp
        12/ex12_23.cpp
        12/ex12_27.cpp
        12/ex12_27.h
        12/strblob.h
        12/test12_02.cpp
        13/ex13_08.h
        13/ex13_13_30.h
        13/ex13_14.cpp
        13/ex13_15.cpp
        13/ex13_16.cpp
        13/ex13_18.h
        13/ex13_19.h
        13/ex13_22.h
        13/ex13_26.h
        13/ex13_27.h
        13/ex13_28.h
        13/ex13_30.h
        13/ex13_31.cpp
        13/ex13_31.h
        13/ex13_34.cpp
        13/ex13_34.h
        14/ex14_02.cpp
        14/ex14_02.h
        14/ex14_07.cpp
        14/ex14_07.h
        14/ex14_13.cpp
        14/ex14_13.h
        14/ex14_15.cpp
        14/ex14_15.h
        14/test_02.cpp
        14/test_13.cpp
        14/test_15.cpp
        15/bulk_quote.cpp
        15/bulk_quote.h
        15/disc_quote.cpp
        15/disc_quote.h
        15/ex15_03.cpp
        15/ex15_03.h
        15/ex15_05.cpp
        15/ex15_05.h
        15/ex15_07.cpp
        15/ex15_07.h
        15/ex15_09.cpp
        15/ex15_20.cpp
        15/limit_quote.cpp
        15/limit_quote.h
        15/quote.cpp
        15/quote.h
        15/test_07.cpp
        15/test_11.cpp
        16/blob.cpp
        16/ex16_02.cpp
        16/ex16_04.cpp
        16/ex16_07.cpp
        16/test.cpp)
