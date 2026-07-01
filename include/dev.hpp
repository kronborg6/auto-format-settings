#pragma once

#ifdef DEV_MODE
#define DEV_PRINT(msg)                                                                             \
  do {                                                                                             \
    std::cout << x << std::endl;                                                                   \
  } while (0)
#else
#define DEV_PRINT(msg)                                                                             \
  do {                                                                                             \
  } while (0)
#endif
