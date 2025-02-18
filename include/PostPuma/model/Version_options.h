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
 * Version_options.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_H_


#include "PostPuma/ModelBase.h"

#include "PostPuma/model/Version_options_youtube.h"
#include "PostPuma/model/Version_options_instagram.h"
#include "PostPuma/model/Version_options_pinterest.h"
#include "PostPuma/model/Version_options_tiktok.h"
#include "PostPuma/model/Version_options_mastodon.h"
#include "PostPuma/model/Version_options_linkedin.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Version_options_tiktok;
class Version_options_youtube;
class Version_options_linkedin;
class Version_options_mastodon;
class Version_options_instagram;
class Version_options_pinterest;


/// <summary>
/// 
/// </summary>
class  Version_options
    : public ModelBase
{
public:
    Version_options();
    virtual ~Version_options();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Version_options members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Version_options_tiktok> getTiktok() const;
    bool tiktokIsSet() const;
    void unsetTiktok();

    void setTiktok(const std::shared_ptr<Version_options_tiktok>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Version_options_youtube> getYoutube() const;
    bool youtubeIsSet() const;
    void unsetYoutube();

    void setYoutube(const std::shared_ptr<Version_options_youtube>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Version_options_linkedin> getLinkedin() const;
    bool linkedinIsSet() const;
    void unsetLinkedin();

    void setLinkedin(const std::shared_ptr<Version_options_linkedin>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Version_options_mastodon> getMastodon() const;
    bool mastodonIsSet() const;
    void unsetMastodon();

    void setMastodon(const std::shared_ptr<Version_options_mastodon>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Version_options_instagram> getInstagram() const;
    bool instagramIsSet() const;
    void unsetInstagram();

    void setInstagram(const std::shared_ptr<Version_options_instagram>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Version_options_pinterest> getPinterest() const;
    bool pinterestIsSet() const;
    void unsetPinterest();

    void setPinterest(const std::shared_ptr<Version_options_pinterest>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Version_options_instagram> getFacebookPage() const;
    bool facebookPageIsSet() const;
    void unsetFacebook_page();

    void setFacebookPage(const std::shared_ptr<Version_options_instagram>& value);


protected:
    std::shared_ptr<Version_options_tiktok> m_Tiktok;
    bool m_TiktokIsSet;
    std::shared_ptr<Version_options_youtube> m_Youtube;
    bool m_YoutubeIsSet;
    std::shared_ptr<Version_options_linkedin> m_Linkedin;
    bool m_LinkedinIsSet;
    std::shared_ptr<Version_options_mastodon> m_Mastodon;
    bool m_MastodonIsSet;
    std::shared_ptr<Version_options_instagram> m_Instagram;
    bool m_InstagramIsSet;
    std::shared_ptr<Version_options_pinterest> m_Pinterest;
    bool m_PinterestIsSet;
    std::shared_ptr<Version_options_instagram> m_Facebook_page;
    bool m_Facebook_pageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Version_options_H_ */
