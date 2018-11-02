/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Tag.h"
#include <stdexcept>
#include <sstream>

namespace org {
namespace openapitools {
namespace server {
namespace model {

Tag::Tag()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    
}

Tag::~Tag()
{
}

void Tag::validate()
{
    // TODO: implement validation
}

nlohmann::json Tag::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_IdIsSet)
    {
        val["id"] = m_Id;
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    
    
    return val;
}

void Tag::fromJson(nlohmann::json& val)
{
    if(val.find("id") != val.end())
    {
        setId(val.at("id"));
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
    }
    
    
}


int64_t Tag::getId() const
{
    return m_Id;
}
void Tag::setId(int64_t const value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Tag::idIsSet() const
{
    return m_IdIsSet;
}
void Tag::unsetId()
{
    m_IdIsSet = false;
}
std::string Tag::getName() const
{
    return m_Name;
}
void Tag::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Tag::nameIsSet() const
{
    return m_NameIsSet;
}
void Tag::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

