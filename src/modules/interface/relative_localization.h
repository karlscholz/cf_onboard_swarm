#ifndef RELATIVELOCA_H_
#define RELATIVELOCA_H_
#include "system.h"

typedef enum {
<<<<<<< HEAD
  STATE_rlX, STATE_rlY, STATE_rlYaw, STATE_DIM_rl
=======
  STATE_rlX, STATE_rlY, STATE_rlZ, STATE_rlYaw, STATE_DIM_rl
>>>>>>> swarm3d
} relative_stateIdx_t;

typedef enum
{
<<<<<<< HEAD
  INPUT_vxi, INPUT_vyi, INPUT_ri, INPUT_vxj, INPUT_vyj, INPUT_rj, INPUT_DIM
=======
  INPUT_vxi, INPUT_vyi, INPUT_vzi, INPUT_ri, INPUT_vxj, INPUT_vyj, INPUT_vzj, INPUT_rj, INPUT_DIM
>>>>>>> swarm3d
} relative_inputIdx_t;

typedef struct
{
  float S[STATE_DIM_rl];
  float P[STATE_DIM_rl][STATE_DIM_rl];
  uint32_t oldTimetick;
  bool receiveFlag;
} relaVariable_t;

void relativeLocoInit(void);
void relativeLocoTask(void* arg);
<<<<<<< HEAD
void relativeEKF(int n, float vxi, float vyi, float ri, float hi, float vxj, float vyj, float rj, float hj, uint16_t dij, float dt);
=======
void relativeEKF(int n, float vxi, float vyi, float vzi, float ri, float hi, float vxj, float vyj, float vzj, float rj, float hj, uint16_t dij, float dt);
>>>>>>> swarm3d
bool relativeInfoRead(float* relaVarParam, float* inputVarParam);
#endif