/**
 * @file ProfinetToMARTeLogAdapterGTest.cpp
 * @brief Source file for class ProfinetToMARTeLogAdapterTest
 * @date 20/01/2021
 * @author Pedro Lourenco
 *
 * @copyright Copyright 2015 F4E | European Joint Undertaking for ITER and
 * the Development of Fusion Energy ('Fusion for Energy').
 * Licensed under the EUPL, Version 1.1 or - as soon they will be approved
 * by the European Commission - subsequent versions of the EUPL (the "Licence")
 * You may not use this work except in compliance with the Licence.
 * You may obtain a copy of the Licence at: http://ec.europa.eu/idabc/eupl
 *
 * @warning Unless required by applicable law or agreed to in writing,
 * software distributed under the Licence is distributed on an "AS IS"
 * basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
 * or implied. See the Licence permissions and limitations under the Licence.
 *
 * @details This source file contains the definition of all the methods for
 * the class ProfinetToMARTeLogAdapterTest (public, protected, and private). 
 * Be aware that some methods, such as those inline could be defined on the
 * header file, instead.
 */

/*---------------------------------------------------------------------------*/
/*                         Standard header includes                          */
/*---------------------------------------------------------------------------*/

#include <limits.h>
#include "gtest/gtest.h"

/*---------------------------------------------------------------------------*/
/*                         Project header includes                           */
/*---------------------------------------------------------------------------*/
#include "ProfinetToMARTeLogAdapterTest.h"

/*---------------------------------------------------------------------------*/
/*                           Static definitions                              */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                           Method definitions                              */
/*---------------------------------------------------------------------------*/
TEST(ProfinetToMARTeLogAdapterGTest, TestConstructor) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestConstructor());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMinimumLevels) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMinimumLevels());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageZeroSize) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageZeroSize());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageAverageSize) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageAverageSize());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageMaximumSize) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageMaximumSize());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageOverrunSize) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageOverrunSize());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageDebugLevel) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageDebugLevel());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageInformationLevel) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageInformationLevel());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageWarningLevel) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageWarningLevel());
}

TEST(ProfinetToMARTeLogAdapterGTest, TestLoggerMessageErrorLevel) {
    ProfinetToMARTeLogAdapterTest test;
    ASSERT_TRUE(test.TestLoggerMessageErrorLevel());
}
