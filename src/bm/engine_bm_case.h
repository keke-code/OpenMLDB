/*-------------------------------------------------------------------------
 * Copyright (C) 2020, 4paradigm
 * engine_bm_case.h
 *
 * Author: chenjing
 * Date: 2020/4/7
 *--------------------------------------------------------------------------
 **/

#ifndef SRC_BM_ENGINE_BM_CASE_H_
#define SRC_BM_ENGINE_BM_CASE_H_
#include <string>
#include "benchmark/benchmark.h"
namespace fesql {
namespace bm {
enum MODE { BENCHMARK, TEST };
void EngineRequestModeSimpleQueryBM(const std::string& db,
                                    const std::string& request_table,
                                    const std::string& sql, int32_t limit_cnt,
                                    const std::string& resource_path,
                                    benchmark::State* state, MODE mode);
void EngineBatchModeSimpleQueryBM(const std::string& db, const std::string& sql,
                                  const std::string& resource_path,
                                  benchmark::State* state, MODE mode);
void EngineWindowSumFeature1(benchmark::State* state, MODE mode,
                             int64_t limit_cnt,
                             int64_t size);  // NOLINT

void EngineRunBatchWindowSumFeature1(benchmark::State* state, MODE mode,
                                     int64_t limit_cnt,
                                     int64_t size);  // NOLINT
void EngineRunBatchWindowSumFeature5(benchmark::State* state, MODE mode,
                                     int64_t limit_cnt,
                                     int64_t size);  // NOLINT

void EngineWindowSumFeature5(benchmark::State* state, MODE mode,
                             int64_t limit_cnt,
                             int64_t size);  // NOLINT

void EngineSimpleSelectDouble(benchmark::State* state, MODE mode);

void EngineSimpleSelectVarchar(benchmark::State* state, MODE mode);
void EngineSimpleSelectDate(benchmark::State* state, MODE mode);
void EngineSimpleSelectTimestamp(benchmark::State* state, MODE mode);

void EngineSimpleSelectInt32(benchmark::State* state, MODE mode);

void EngineSimpleUDF(benchmark::State* state, MODE mode);

void EngineRequestSimpleSelectDouble(benchmark::State* state, MODE mode);

void EngineRequestSimpleSelectVarchar(benchmark::State* state, MODE mode);

void EngineRequestSimpleSelectInt32(benchmark::State* state, MODE mode);

void EngineRequestSimpleUDF(benchmark::State* state, MODE mode);
void EngineRequestSimpleSelectTimestamp(benchmark::State* state, MODE mode);
void EngineRequestSimpleSelectDate(benchmark::State* state, MODE mode);
}  // namespace bm
}  // namespace fesql
#endif  // SRC_BM_ENGINE_BM_CASE_H_
