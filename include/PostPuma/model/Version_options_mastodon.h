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
 * Version_options_mastodon.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_mastodon_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_mastodon_H_


#include "PostPuma/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  Version_options_mastodon
    : public ModelBase
{
public:
    Version_options_mastodon();
    virtual ~Version_options_mastodon();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Version_options_mastodon members

    /// <summary>
    /// 
    /// </summary>
    bool isSensitive() const;
    bool sensitiveIsSet() const;
    void unsetSensitive();

    void setSensitive(bool value);


protected:
    bool m_Sensitive;
    bool m_SensitiveIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_mastodon_H_ */
