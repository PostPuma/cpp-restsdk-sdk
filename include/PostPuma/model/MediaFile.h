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
 * MediaFile.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MediaFile_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MediaFile_H_


#include "PostPuma/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  MediaFile
    : public ModelBase
{
public:
    MediaFile();
    virtual ~MediaFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MediaFile members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();

    void setUuid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMimeType() const;
    bool mimeTypeIsSet() const;
    void unsetMime_type();

    void setMimeType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getThumbUrl() const;
    bool thumbUrlIsSet() const;
    void unsetThumb_url();

    void setThumbUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsVideo() const;
    bool isVideoIsSet() const;
    void unsetIs_video();

    void setIsVideo(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();

    void setCreatedAt(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Mime_type;
    bool m_Mime_typeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m_Thumb_url;
    bool m_Thumb_urlIsSet;
    bool m_Is_video;
    bool m_Is_videoIsSet;
    utility::string_t m_Created_at;
    bool m_Created_atIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MediaFile_H_ */
