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



#include "PostPuma/model/Version_options.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Version_options::Version_options()
{
    m_TiktokIsSet = false;
    m_YoutubeIsSet = false;
    m_LinkedinIsSet = false;
    m_MastodonIsSet = false;
    m_InstagramIsSet = false;
    m_PinterestIsSet = false;
    m_Facebook_pageIsSet = false;
}

Version_options::~Version_options()
{
}

void Version_options::validate()
{
    // TODO: implement validation
}

web::json::value Version_options::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TiktokIsSet)
    {
        val[utility::conversions::to_string_t(U("tiktok"))] = ModelBase::toJson(m_Tiktok);
    }
    if(m_YoutubeIsSet)
    {
        val[utility::conversions::to_string_t(U("youtube"))] = ModelBase::toJson(m_Youtube);
    }
    if(m_LinkedinIsSet)
    {
        val[utility::conversions::to_string_t(U("linkedin"))] = ModelBase::toJson(m_Linkedin);
    }
    if(m_MastodonIsSet)
    {
        val[utility::conversions::to_string_t(U("mastodon"))] = ModelBase::toJson(m_Mastodon);
    }
    if(m_InstagramIsSet)
    {
        val[utility::conversions::to_string_t(U("instagram"))] = ModelBase::toJson(m_Instagram);
    }
    if(m_PinterestIsSet)
    {
        val[utility::conversions::to_string_t(U("pinterest"))] = ModelBase::toJson(m_Pinterest);
    }
    if(m_Facebook_pageIsSet)
    {
        val[utility::conversions::to_string_t(U("facebook_page"))] = ModelBase::toJson(m_Facebook_page);
    }

    return val;
}

bool Version_options::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("tiktok"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tiktok")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Version_options_tiktok> refVal_setTiktok;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTiktok);
            setTiktok(refVal_setTiktok);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("youtube"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("youtube")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Version_options_youtube> refVal_setYoutube;
            ok &= ModelBase::fromJson(fieldValue, refVal_setYoutube);
            setYoutube(refVal_setYoutube);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("linkedin"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("linkedin")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Version_options_linkedin> refVal_setLinkedin;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLinkedin);
            setLinkedin(refVal_setLinkedin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("mastodon"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mastodon")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Version_options_mastodon> refVal_setMastodon;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMastodon);
            setMastodon(refVal_setMastodon);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("instagram"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("instagram")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Version_options_instagram> refVal_setInstagram;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInstagram);
            setInstagram(refVal_setInstagram);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pinterest"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pinterest")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Version_options_pinterest> refVal_setPinterest;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPinterest);
            setPinterest(refVal_setPinterest);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("facebook_page"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("facebook_page")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Version_options_instagram> refVal_setFacebookPage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFacebookPage);
            setFacebookPage(refVal_setFacebookPage);
        }
    }
    return ok;
}

void Version_options::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TiktokIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tiktok")), m_Tiktok));
    }
    if(m_YoutubeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("youtube")), m_Youtube));
    }
    if(m_LinkedinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("linkedin")), m_Linkedin));
    }
    if(m_MastodonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mastodon")), m_Mastodon));
    }
    if(m_InstagramIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("instagram")), m_Instagram));
    }
    if(m_PinterestIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pinterest")), m_Pinterest));
    }
    if(m_Facebook_pageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("facebook_page")), m_Facebook_page));
    }
}

bool Version_options::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("tiktok"))))
    {
        std::shared_ptr<Version_options_tiktok> refVal_setTiktok;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tiktok"))), refVal_setTiktok );
        setTiktok(refVal_setTiktok);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("youtube"))))
    {
        std::shared_ptr<Version_options_youtube> refVal_setYoutube;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("youtube"))), refVal_setYoutube );
        setYoutube(refVal_setYoutube);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("linkedin"))))
    {
        std::shared_ptr<Version_options_linkedin> refVal_setLinkedin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("linkedin"))), refVal_setLinkedin );
        setLinkedin(refVal_setLinkedin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mastodon"))))
    {
        std::shared_ptr<Version_options_mastodon> refVal_setMastodon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mastodon"))), refVal_setMastodon );
        setMastodon(refVal_setMastodon);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("instagram"))))
    {
        std::shared_ptr<Version_options_instagram> refVal_setInstagram;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("instagram"))), refVal_setInstagram );
        setInstagram(refVal_setInstagram);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pinterest"))))
    {
        std::shared_ptr<Version_options_pinterest> refVal_setPinterest;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pinterest"))), refVal_setPinterest );
        setPinterest(refVal_setPinterest);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("facebook_page"))))
    {
        std::shared_ptr<Version_options_instagram> refVal_setFacebookPage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("facebook_page"))), refVal_setFacebookPage );
        setFacebookPage(refVal_setFacebookPage);
    }
    return ok;
}

std::shared_ptr<Version_options_tiktok> Version_options::getTiktok() const
{
    return m_Tiktok;
}

void Version_options::setTiktok(const std::shared_ptr<Version_options_tiktok>& value)
{
    m_Tiktok = value;
    m_TiktokIsSet = true;
}

bool Version_options::tiktokIsSet() const
{
    return m_TiktokIsSet;
}

void Version_options::unsetTiktok()
{
    m_TiktokIsSet = false;
}
std::shared_ptr<Version_options_youtube> Version_options::getYoutube() const
{
    return m_Youtube;
}

void Version_options::setYoutube(const std::shared_ptr<Version_options_youtube>& value)
{
    m_Youtube = value;
    m_YoutubeIsSet = true;
}

bool Version_options::youtubeIsSet() const
{
    return m_YoutubeIsSet;
}

void Version_options::unsetYoutube()
{
    m_YoutubeIsSet = false;
}
std::shared_ptr<Version_options_linkedin> Version_options::getLinkedin() const
{
    return m_Linkedin;
}

void Version_options::setLinkedin(const std::shared_ptr<Version_options_linkedin>& value)
{
    m_Linkedin = value;
    m_LinkedinIsSet = true;
}

bool Version_options::linkedinIsSet() const
{
    return m_LinkedinIsSet;
}

void Version_options::unsetLinkedin()
{
    m_LinkedinIsSet = false;
}
std::shared_ptr<Version_options_mastodon> Version_options::getMastodon() const
{
    return m_Mastodon;
}

void Version_options::setMastodon(const std::shared_ptr<Version_options_mastodon>& value)
{
    m_Mastodon = value;
    m_MastodonIsSet = true;
}

bool Version_options::mastodonIsSet() const
{
    return m_MastodonIsSet;
}

void Version_options::unsetMastodon()
{
    m_MastodonIsSet = false;
}
std::shared_ptr<Version_options_instagram> Version_options::getInstagram() const
{
    return m_Instagram;
}

void Version_options::setInstagram(const std::shared_ptr<Version_options_instagram>& value)
{
    m_Instagram = value;
    m_InstagramIsSet = true;
}

bool Version_options::instagramIsSet() const
{
    return m_InstagramIsSet;
}

void Version_options::unsetInstagram()
{
    m_InstagramIsSet = false;
}
std::shared_ptr<Version_options_pinterest> Version_options::getPinterest() const
{
    return m_Pinterest;
}

void Version_options::setPinterest(const std::shared_ptr<Version_options_pinterest>& value)
{
    m_Pinterest = value;
    m_PinterestIsSet = true;
}

bool Version_options::pinterestIsSet() const
{
    return m_PinterestIsSet;
}

void Version_options::unsetPinterest()
{
    m_PinterestIsSet = false;
}
std::shared_ptr<Version_options_instagram> Version_options::getFacebookPage() const
{
    return m_Facebook_page;
}

void Version_options::setFacebookPage(const std::shared_ptr<Version_options_instagram>& value)
{
    m_Facebook_page = value;
    m_Facebook_pageIsSet = true;
}

bool Version_options::facebookPageIsSet() const
{
    return m_Facebook_pageIsSet;
}

void Version_options::unsetFacebook_page()
{
    m_Facebook_pageIsSet = false;
}
}
}
}
}


