/*********************************************************************************************************************/
/**
 * @file   unit_doc.h
 *
 * @brief  This file contains macros for Google test documentation.
 *
 *********************************************************************************************************************/

#pragma once

#include "gtest/gtest.h"
#include <string.h>
#include <chrono>
#include <ctime>

using namespace testing;
using namespace std::chrono;


#define DETAILS(_info)                       Test::RecordProperty("Description", _info)
#define REALIZES(_DoorsTestSpecId)           Test::RecordProperty("DoorsTestSpecificationId", _DoorsTestSpecId)
#define TESTSTEP(num, _TestStep)             Test::RecordProperty((std::string)"TestStep" + (std::string)num, _TestStep)
#define EXPECTED(num, _ExpectedResult)       Test::RecordProperty((std::string)"Expected" + (std::string)num, _ExpectedResult)

#define INPUT(varName, var, setVal)          {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Input :: " + (std::string)varName, #setVal); \
                                             var = setVal ; \
                                             }                                             
#define EXPECT_EQ_LOG(varName,varVal,expVal)               {\
                                             auto actualVal = varVal;\
                                             auto expectedVal = expVal;\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(actualVal));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected :: " + (std::string)varName, std::to_string(expectedVal));\
                                             EXPECT_EQ(actualVal,expectedVal);\
                                             }

#define EXPECT_EQ_TOL_LOG(varName,varVal,expVal,tol)        {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(varVal));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected :: " + (std::string)varName, std::to_string(expVal));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Tolerance :: " + (std::string)varName , std::to_string(tol));\
                                             EXPECT_EQ(TRUE, (fabsf(varVal - (expVal)) < tol));\
                                             }
#define EXPECT_NE_LOG(varName,varVal,neExpVal)              {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(varVal));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected Not equal to :: " + (std::string)varName, std::to_string(neExpVal));\
                                             EXPECT_NE(varVal,neExpVal);\
                                             }
#define EXPECT_GT_LOG(varName,var1,var2)     {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(var1));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected Greater than :: " + (std::string)varName, std::to_string(var2));\
                                             EXPECT_GT(var1,var2);\
                                             }
#define EXPECT_LT_LOG(varName,var1,var2)     {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(var1));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected Less than :: " + (std::string)varName, std::to_string(var2));\
                                             EXPECT_LT(var1,var2);\
                                             }
#define EXPECT_GE_LOG(varName,var1,var2)     {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(var1));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected Greater than or equal to :: " + (std::string)varName, std::to_string(var2));\
                                             EXPECT_GE(var1,var2);\
                                             }
#define EXPECT_LE_LOG(varName,var1,var2)     {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(var1));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected Less than or equal to :: " + (std::string)varName, std::to_string(var2));\
                                             EXPECT_LE(var1,var2);\
                                             }
#define EXPECT_NEAR_LOG(varName,varVal,expVal,abs_err)        {\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(varVal));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected :: " + (std::string)varName, std::to_string(expVal));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Tolerance :: " + (std::string)varName , std::to_string(abs_err));\
                                             EXPECT_NEAR(varVal, expVal, abs_err);\
                                             }
#define EXPECT_FLOAT_EQ_LOG(varName,varVal,expVal)               {\
                                             auto actualVal = varVal;\
                                             auto expectedVal = expVal;\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Actual :: " + (std::string)varName, std::to_string(actualVal));\
                                             Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: Expected :: " + (std::string)varName, std::to_string(expectedVal));\
                                             EXPECT_FLOAT_EQ(actualVal,expectedVal);\
                                             }											 
#define EXPECT_CALL_LOG(mockObj, func, ...) { \
        const std::string modifiersStr = #__VA_ARGS__; \
        const std::string modifiers = modifiersStr[0] == '\0' ? "NA" : modifiersStr; \
        Test::RecordProperty(std::to_string(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count()) + (std::string)" :: FunctionCall :: " + #func + (std::string)" :: Modifiers :: " + modifiers, "true"); \
        EXPECT_CALL(mockObj, func).__VA_ARGS__; \
}