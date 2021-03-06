/**
* nat API
* nat API generated from nat.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* RuleSnatEntryJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  RuleSnatEntryJsonObject : public JsonObjectBase {
public:
  RuleSnatEntryJsonObject();
  RuleSnatEntryJsonObject(const nlohmann::json &json);
  ~RuleSnatEntryJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Rule identifier
  /// </summary>
  uint32_t getId() const;
  void setId(uint32_t value);
  bool idIsSet() const;

  /// <summary>
  /// Internal IP address (or subnet)
  /// </summary>
  std::string getInternalNet() const;
  void setInternalNet(std::string value);
  bool internalNetIsSet() const;

  /// <summary>
  /// Natted source IP address
  /// </summary>
  std::string getExternalIp() const;
  void setExternalIp(std::string value);
  bool externalIpIsSet() const;

private:
  uint32_t m_id;
  bool m_idIsSet;
  std::string m_internalNet;
  bool m_internalNetIsSet;
  std::string m_externalIp;
  bool m_externalIpIsSet;
};

}
}
}
}

