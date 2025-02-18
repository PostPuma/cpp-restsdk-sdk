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



#include "PostPuma/model/Version_content.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Version_content::Version_content()
{
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_MediaIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
}

Version_content::~Version_content()
{
}

void Version_content::validate()
{
    // TODO: implement validation
}

web::json::value Version_content::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t(U("body"))] = ModelBase::toJson(m_Body);
    }
    if(m_MediaIsSet)
    {
        val[utility::conversions::to_string_t(U("media"))] = ModelBase::toJson(m_Media);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }

    return val;
}

bool Version_content::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("body"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("body")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBody);
            setBody(refVal_setBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("media"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setMedia;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMedia);
            setMedia(refVal_setMedia);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
        }
    }
    return ok;
}

void Version_content::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("body")), m_Body));
    }
    if(m_MediaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media")), m_Media));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
}

bool Version_content::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("body"))))
    {
        utility::string_t refVal_setBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("body"))), refVal_setBody );
        setBody(refVal_setBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media"))))
    {
        std::vector<utility::string_t> refVal_setMedia;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media"))), refVal_setMedia );
        setMedia(refVal_setMedia);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    return ok;
}

utility::string_t Version_content::getBody() const
{
    return m_Body;
}

void Version_content::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool Version_content::bodyIsSet() const
{
    return m_BodyIsSet;
}

void Version_content::unsetBody()
{
    m_BodyIsSet = false;
}
std::vector<utility::string_t>& Version_content::getMedia()
{
    return m_Media;
}

void Version_content::setMedia(const std::vector<utility::string_t>& value)
{
    m_Media = value;
    m_MediaIsSet = true;
}

bool Version_content::mediaIsSet() const
{
    return m_MediaIsSet;
}

void Version_content::unsetMedia()
{
    m_MediaIsSet = false;
}
utility::string_t Version_content::getUrl() const
{
    return m_Url;
}

void Version_content::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool Version_content::urlIsSet() const
{
    return m_UrlIsSet;
}

void Version_content::unsetUrl()
{
    m_UrlIsSet = false;
}
}
}
}
}


