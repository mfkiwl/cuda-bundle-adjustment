/*
Copyright 2020 Fixstars Corporation

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef __MACRO_H__
#define __MACRO_H__

#include <cstdio>

#define CUDA_CHECK(err) \
do {\
	if (err != cudaSuccess) { \
		printf("[CUDA Error] %s (code: %d) at %s:%d\n", cudaGetErrorString(err), err, __FILE__, __LINE__); \
	} \
} while (0)

#endif // !__MACRO_H__
