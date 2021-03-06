<<<<<<< HEAD
/**
 * @file muonActionInitialization.cc
 * @brief action 管理类
 * @details runaction eventaction steppingaction 注册
 * 一个 primary generator 强制类的注册
 * @author loyxin
 * @version 1.0
 * @date 2017-09-10
 */
=======

>>>>>>> parent of 1c568a5... add doxygen
#include "muonActionInitialization.hh"
#include "muonPrimaryGeneratorAction.hh"
#include "muonRunAction.hh"
#include "muonEventAction.hh"
#include "muonSteppingAction.hh"
muonActionInitialization::muonActionInitialization()
 : G4VUserActionInitialization()
{}

muonActionInitialization::~muonActionInitialization()
{}

void muonActionInitialization::BuildForMaster() const
{

}


void muonActionInitialization::Build() const
{
  SetUserAction(new muonPrimaryGeneratorAction());
  muonRunAction* runAction = new muonRunAction;
  SetUserAction(runAction);
  muonEventAction* event = new muonEventAction();
  SetUserAction(event);

  SetUserAction(new muonSteppingAction(event));

}
