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
 * Version_options_youtube.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_youtube_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_youtube_H_


#include "PostPuma/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  Version_options_youtube
    : public ModelBase
{
public:
    Version_options_youtube();
    virtual ~Version_options_youtube();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Version_options_youtube members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);


protected:
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_youtube_H_ */
