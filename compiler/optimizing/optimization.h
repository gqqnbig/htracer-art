/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_COMPILER_OPTIMIZING_OPTIMIZATION_H_
#define ART_COMPILER_OPTIMIZING_OPTIMIZATION_H_

#include "base/arena_object.h"
#include "nodes.h"
#include "optimizing_compiler_stats.h"

namespace art {

/**
 * Abstraction to implement an optimization pass.
 */
class HOptimization : public ArenaObject<kArenaAllocOptimization> {
 public:
  HOptimization(HGraph* graph,
                const char* pass_name,
                OptimizingCompilerStats* stats = nullptr)
      //以下是构造函数的初始化列表
      : graph_(graph),
        stats_(stats),
        pass_name_(pass_name) {}

  virtual ~HOptimization() {}

  // Return the name of the pass. Pass names for a single HOptimization should be of form
  // <optimization_name> or <optimization_name>$<pass_name> for common <optimization_name> prefix.
  // Example: 'instruction_simplifier', 'instruction_simplifier$after_bce',
  // 'instruction_simplifier$before_codegen'.
  const char* GetPassName() const { return this->pass_name_; } //是内联函数

  // Perform the analysis itself.
  virtual void Run() = 0;

 protected:
  //结尾的const表示this指针是const指针
  void MaybeRecordStat(MethodCompilationStat compilation_stat, size_t count = 1) const;

  HGraph* const graph_;
  // Used to record stats about the optimization.
  OptimizingCompilerStats* const stats_;

 private:
  // Optimization pass name.
  const char* pass_name_;

  DISALLOW_COPY_AND_ASSIGN(HOptimization);
};

}  // namespace art

#endif  // ART_COMPILER_OPTIMIZING_OPTIMIZATION_H_
