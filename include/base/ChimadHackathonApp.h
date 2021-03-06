#ifndef CHIMAD_HACKATHONAPP_H
#define CHIMAD_HACKATHONAPP_H

#include "MooseApp.h"

class ChimadHackathonApp;

template<>
InputParameters validParams<ChimadHackathonApp>();

class ChimadHackathonApp : public MooseApp
{
public:
  ChimadHackathonApp(InputParameters parameters);
  virtual ~ChimadHackathonApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* CHIMAD_HACKATHONAPP_H */
