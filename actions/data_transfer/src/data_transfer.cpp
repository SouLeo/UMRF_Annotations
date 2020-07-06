
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *
 *  The basis of this file has been automatically generated
 *  by the TeMoto action package generator. Modify this file
 *  as you wish but please note:
 *
 *    WE HIGHLIY RECOMMEND TO REFER TO THE TeMoto ACTION
 *    IMPLEMENTATION TUTORIAL IF YOU ARE UNFAMILIAR WITH
 *    THE PROCESS OF CREATING CUSTOM TeMoto ACTION PACKAGES
 *    
 *  because there are plenty of components that should not be
 *  modified or which do not make sence at the first glance.
 *
 *  See TeMoto documentation & tutorials at: 
 *    https://temoto-telerobotics.github.io
 *
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

/* REQUIRED BY TEMOTO */
#include <class_loader/class_loader.hpp>
#include "data_transfer/temoto_action.h"
#include "data_transfer/macros.h"

/* 
 * ACTION IMPLEMENTATION of DataTransfer 
 */
class DataTransfer : public TemotoAction
{
public:

// Constructor. REQUIRED BY TEMOTO
DataTransfer()
{
  std::cout << __func__ << " constructed\n";
}

// REQUIRED BY TEMOTO
void executeTemotoAction()
{
  // Input parameters
  std::string data type = GET_PARAMETER("data type", std::string);
  std::string verb = GET_PARAMETER("verb", std::string);

  /* * * * * * * * * * * * * * 
   *                          
   * ===> YOUR CODE HERE <===
   *                          
   * * * * * * * * * * * * * */

}

// Destructor
~DataTransfer()
{
  TEMOTO_INFO("Action instance destructed");
}

}; // DataTransfer class

/* REQUIRED BY CLASS LOADER */
CLASS_LOADER_REGISTER_CLASS(DataTransfer, ActionBase);
