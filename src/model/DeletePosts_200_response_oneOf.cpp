/**
 * PostPuma - OpenAPI 3.0
 * PostPuma API specifications
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@postpuma.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "PostPuma/model/DeletePosts_200_response_oneOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



DeletePosts_200_response_oneOf::DeletePosts_200_response_oneOf()
{
    m_Deleted = false;
    m_DeletedIsSet = false;
}

DeletePosts_200_response_oneOf::~DeletePosts_200_response_oneOf()
{
}

void DeletePosts_200_response_oneOf::validate()
{
    // TODO: implement validation
}

web::json::value DeletePosts_200_response_oneOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DeletedIsSet)
    {
        val[utility::conversions::to_string_t(U("deleted"))] = ModelBase::toJson(m_Deleted);
    }

    return val;
}

bool DeletePosts_200_response_oneOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("deleted"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("deleted")));
        if(!fieldValue.is_null())
        {
            bool refVal_setDeleted;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDeleted);
            setDeleted(refVal_setDeleted);
        }
    }
    return ok;
}

void DeletePosts_200_response_oneOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DeletedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("deleted")), m_Deleted));
    }
}

bool DeletePosts_200_response_oneOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("deleted"))))
    {
        bool refVal_setDeleted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("deleted"))), refVal_setDeleted );
        setDeleted(refVal_setDeleted);
    }
    return ok;
}

bool DeletePosts_200_response_oneOf::isDeleted() const
{
    return m_Deleted;
}

void DeletePosts_200_response_oneOf::setDeleted(bool value)
{
    m_Deleted = value;
    m_DeletedIsSet = true;
}

bool DeletePosts_200_response_oneOf::deletedIsSet() const
{
    return m_DeletedIsSet;
}

void DeletePosts_200_response_oneOf::unsetDeleted()
{
    m_DeletedIsSet = false;
}
}
}
}
}


