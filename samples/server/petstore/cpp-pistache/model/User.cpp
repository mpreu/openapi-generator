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


#include "User.h"
#include <stdexcept>
#include <sstream>

namespace org {
namespace openapitools {
namespace server {
namespace model {

User::User()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Username = "";
    m_UsernameIsSet = false;
    m_FirstName = "";
    m_FirstNameIsSet = false;
    m_LastName = "";
    m_LastNameIsSet = false;
    m_Email = "";
    m_EmailIsSet = false;
    m_Password = "";
    m_PasswordIsSet = false;
    m_Phone = "";
    m_PhoneIsSet = false;
    m_UserStatus = 0;
    m_UserStatusIsSet = false;
    
}

User::~User()
{
}

void User::validate()
{
    // TODO: implement validation
}

nlohmann::json User::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_IdIsSet)
    {
        val["id"] = m_Id;
    }
    if(m_UsernameIsSet)
    {
        val["username"] = ModelBase::toJson(m_Username);
    }
    if(m_FirstNameIsSet)
    {
        val["firstName"] = ModelBase::toJson(m_FirstName);
    }
    if(m_LastNameIsSet)
    {
        val["lastName"] = ModelBase::toJson(m_LastName);
    }
    if(m_EmailIsSet)
    {
        val["email"] = ModelBase::toJson(m_Email);
    }
    if(m_PasswordIsSet)
    {
        val["password"] = ModelBase::toJson(m_Password);
    }
    if(m_PhoneIsSet)
    {
        val["phone"] = ModelBase::toJson(m_Phone);
    }
    if(m_UserStatusIsSet)
    {
        val["userStatus"] = m_UserStatus;
    }
    
    
    return val;
}

void User::fromJson(nlohmann::json& val)
{
    if(val.find("id") != val.end())
    {
        setId(val.at("id"));
    }
    if(val.find("username") != val.end())
    {
        setUsername(val.at("username"));
    }
    if(val.find("firstName") != val.end())
    {
        setFirstName(val.at("firstName"));
    }
    if(val.find("lastName") != val.end())
    {
        setLastName(val.at("lastName"));
    }
    if(val.find("email") != val.end())
    {
        setEmail(val.at("email"));
    }
    if(val.find("password") != val.end())
    {
        setPassword(val.at("password"));
    }
    if(val.find("phone") != val.end())
    {
        setPhone(val.at("phone"));
    }
    if(val.find("userStatus") != val.end())
    {
        setUserStatus(val.at("userStatus"));
    }
    
    
}


int64_t User::getId() const
{
    return m_Id;
}
void User::setId(int64_t const value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool User::idIsSet() const
{
    return m_IdIsSet;
}
void User::unsetId()
{
    m_IdIsSet = false;
}
std::string User::getUsername() const
{
    return m_Username;
}
void User::setUsername(std::string const& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool User::usernameIsSet() const
{
    return m_UsernameIsSet;
}
void User::unsetUsername()
{
    m_UsernameIsSet = false;
}
std::string User::getFirstName() const
{
    return m_FirstName;
}
void User::setFirstName(std::string const& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}
bool User::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}
void User::unsetFirstName()
{
    m_FirstNameIsSet = false;
}
std::string User::getLastName() const
{
    return m_LastName;
}
void User::setLastName(std::string const& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}
bool User::lastNameIsSet() const
{
    return m_LastNameIsSet;
}
void User::unsetLastName()
{
    m_LastNameIsSet = false;
}
std::string User::getEmail() const
{
    return m_Email;
}
void User::setEmail(std::string const& value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool User::emailIsSet() const
{
    return m_EmailIsSet;
}
void User::unsetEmail()
{
    m_EmailIsSet = false;
}
std::string User::getPassword() const
{
    return m_Password;
}
void User::setPassword(std::string const& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}
bool User::passwordIsSet() const
{
    return m_PasswordIsSet;
}
void User::unsetPassword()
{
    m_PasswordIsSet = false;
}
std::string User::getPhone() const
{
    return m_Phone;
}
void User::setPhone(std::string const& value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool User::phoneIsSet() const
{
    return m_PhoneIsSet;
}
void User::unsetPhone()
{
    m_PhoneIsSet = false;
}
int32_t User::getUserStatus() const
{
    return m_UserStatus;
}
void User::setUserStatus(int32_t const value)
{
    m_UserStatus = value;
    m_UserStatusIsSet = true;
}
bool User::userStatusIsSet() const
{
    return m_UserStatusIsSet;
}
void User::unsetUserStatus()
{
    m_UserStatusIsSet = false;
}

}
}
}
}

