/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef killaction_h
#define killaction_h

#include "action.h"

class KillAction: public Action
{
public:
   KillAction();

   void act(JNIEnv* jniEnv);

   void setSignal(int signal);

private:
   int signal;
};

static inline Action* createKillAction() {
    return new KillAction();
}

#endif // killaction_h
