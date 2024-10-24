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

/*
 * Version_content.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Version_content_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Version_content_H_


#include "PostPuma/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  Version_content
    : public ModelBase
{
public:
    Version_content();
    virtual ~Version_content();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Version_content members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getMedia();
    bool mediaIsSet() const;
    void unsetMedia();

    void setMedia(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);


protected:
    utility::string_t m_Body;
    bool m_BodyIsSet;
    std::vector<utility::string_t> m_Media;
    bool m_MediaIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Version_content_H_ */
