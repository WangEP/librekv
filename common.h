// Copyright 2016 Shanghai Jiao Tong University
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#ifdef __cplusplus
#define LIBREKV_BEGIN extern "C" {
#define LIBREKV_END }
#else
#define LIBREKV_BEGIN
#define LIBREKV_END
#endif

#define LIBREKV_UNUSED __attribute__((unused))
#define LIBREKV_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define LIBREKV_ALWAYS_INLINE __attribute__((always_inline))

#define LIBREKV_ALIGNED(alignment) __attribute__ ((aligned (alignment)))
