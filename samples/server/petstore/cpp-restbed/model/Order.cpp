/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.3-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Order.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

Order::Order()
{
    m_Id = 0L;
    m_PetId = 0L;
    m_Quantity = 0;
    m_ShipDate = "";
    m_Status = "";
    m_Complete = false;
    
}

Order::~Order()
{
}

std::string Order::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("PetId", m_PetId);
	pt.put("Quantity", m_Quantity);
	pt.put("ShipDate", m_ShipDate);
	pt.put("Status", m_Status);
	pt.put("Complete", m_Complete);
	write_json(ss, pt, false);
	return ss.str();
}

void Order::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", 0L);
	m_PetId = pt.get("PetId", 0L);
	m_Quantity = pt.get("Quantity", 0);
	m_ShipDate = pt.get("ShipDate", "");
	m_Status = pt.get("Status", "");
	m_Complete = pt.get("Complete", false);
}

int64_t Order::getId() const
{
    return m_Id;
}
void Order::setId(int64_t value)
{
    m_Id = value;
}
int64_t Order::getPetId() const
{
    return m_PetId;
}
void Order::setPetId(int64_t value)
{
    m_PetId = value;
}
int32_t Order::getQuantity() const
{
    return m_Quantity;
}
void Order::setQuantity(int32_t value)
{
    m_Quantity = value;
}
std::string Order::getShipDate() const
{
    return m_ShipDate;
}
void Order::setShipDate(std::string value)
{
    m_ShipDate = value;
}
std::string Order::getStatus() const
{
    return m_Status;
}
void Order::setStatus(std::string value)
{
    m_Status = value;
}
bool Order::isComplete() const
{
    return m_Complete;
}
void Order::setComplete(bool value)
{
    m_Complete = value;
}

}
}
}
}

