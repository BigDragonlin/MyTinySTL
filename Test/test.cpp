// 检测是否在Microsoft Visual Studio编译环境中，如果是，则禁用特定的安全警告
#ifdef _MSC_VER
#define _SCL_SECURE_NO_WARNINGS
#endif

// 如果是在Visual Studio的Debug模式下，则配置内存泄漏检测
#if defined(_MSC_VER) && defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h>    // 包含标准库中关于内存分配等的定义
#include <crtdbg.h>    // 包含内存泄漏检测的头文件
#endif // check memory leaks

// 引入自定义的测试模块头文件
#include "algorithm_performance_test.h"
#include "algorithm_test.h"
#include "vector_test.h"
#include "list_test.h"
#include "deque_test.h"
#include "queue_test.h"
#include "stack_test.h"
#include "map_test.h"
#include "set_test.h"
#include "unordered_map_test.h"
#include "unordered_set_test.h"
#include "string_test.h"

int main()
{
  // 使用命名空间mystl::test中的内容，简化代码中的调用
  using namespace mystl::test;

  // 关闭C++标准库iostream与C语言stdio之间的同步，提高输出效率
  std::cout.sync_with_stdio(false);

  // 运行所有基础测试（这是一个假设的宏，实际定义取决于使用的测试框架）
  RUN_ALL_TESTS();

  // 逐个调用具体的测试函数
  algorithm_performance_test::algorithm_performance_test();      // 算法性能测试
  vector_test::vector_test();                                   // 向量容器测试
  list_test::list_test();                                       // 列表容器测试
  deque_test::deque_test();                                     // 双端队列容器测试
  queue_test::queue_test();                                     // 队列容器测试
  queue_test::priority_test();                                  // 优先队列测试
  stack_test::stack_test();                                     // 栈容器测试
  map_test::map_test();                                         // 映射容器测试
  map_test::multimap_test();                                    // 多映射容器测试
  set_test::set_test();                                         // 集合容器测试
  set_test::multiset_test();                                    // 多集合容器测试
  unordered_map_test::unordered_map_test();                      // 无序映射容器测试
  unordered_map_test::unordered_multimap_test();                 // 无序多映射容器测试
  unordered_set_test::unordered_set_test();                      // 无序集合容器测试
  unordered_set_test::unordered_multiset_test();                 // 无序多集合容器测试
  string_test::string_test();                                   // 字符串类测试

  // 如果在Debug模式下编译，则报告内存泄漏情况
#if defined(_MSC_VER) && defined(_DEBUG)
  _CrtDumpMemoryLeaks();
#endif // check memory leaks

  // 主函数正常结束
  return 0; // 默认情况下，main函数应该返回0表示成功
}