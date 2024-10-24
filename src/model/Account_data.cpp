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



#include "PostPuma/model/Account_data.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Account_data::Account_data()
{
    m_Union_id = utility::conversions::to_string_t("");
    m_Union_idIsSet = false;
    m_Is_private = false;
    m_Is_privateIsSet = false;
    m_Duet_disabled = false;
    m_Duet_disabledIsSet = false;
    m_Privacy_levelsIsSet = false;
    m_Stitch_disabled = false;
    m_Stitch_disabledIsSet = false;
    m_Comment_disabled = false;
    m_Comment_disabledIsSet = false;
    m_Max_video_post_duration_sec = 0;
    m_Max_video_post_duration_secIsSet = false;
}

Account_data::~Account_data()
{
}

void Account_data::validate()
{
    // TODO: implement validation
}

web::json::value Account_data::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Union_idIsSet)
    {
        val[utility::conversions::to_string_t(U("union_id"))] = ModelBase::toJson(m_Union_id);
    }
    if(m_Is_privateIsSet)
    {
        val[utility::conversions::to_string_t(U("is_private"))] = ModelBase::toJson(m_Is_private);
    }
    if(m_Duet_disabledIsSet)
    {
        val[utility::conversions::to_string_t(U("duet_disabled"))] = ModelBase::toJson(m_Duet_disabled);
    }
    if(m_Privacy_levelsIsSet)
    {
        val[utility::conversions::to_string_t(U("privacy_levels"))] = ModelBase::toJson(m_Privacy_levels);
    }
    if(m_Stitch_disabledIsSet)
    {
        val[utility::conversions::to_string_t(U("stitch_disabled"))] = ModelBase::toJson(m_Stitch_disabled);
    }
    if(m_Comment_disabledIsSet)
    {
        val[utility::conversions::to_string_t(U("comment_disabled"))] = ModelBase::toJson(m_Comment_disabled);
    }
    if(m_Max_video_post_duration_secIsSet)
    {
        val[utility::conversions::to_string_t(U("max_video_post_duration_sec"))] = ModelBase::toJson(m_Max_video_post_duration_sec);
    }

    return val;
}

bool Account_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("union_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("union_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUnionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUnionId);
            setUnionId(refVal_setUnionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_private"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_private")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsPrivate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsPrivate);
            setIsPrivate(refVal_setIsPrivate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("duet_disabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("duet_disabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_setDuetDisabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDuetDisabled);
            setDuetDisabled(refVal_setDuetDisabled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("privacy_levels"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("privacy_levels")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setPrivacyLevels;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPrivacyLevels);
            setPrivacyLevels(refVal_setPrivacyLevels);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("stitch_disabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("stitch_disabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_setStitchDisabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStitchDisabled);
            setStitchDisabled(refVal_setStitchDisabled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("comment_disabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("comment_disabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_setCommentDisabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCommentDisabled);
            setCommentDisabled(refVal_setCommentDisabled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("max_video_post_duration_sec"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("max_video_post_duration_sec")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setMaxVideoPostDurationSec;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxVideoPostDurationSec);
            setMaxVideoPostDurationSec(refVal_setMaxVideoPostDurationSec);
        }
    }
    return ok;
}

void Account_data::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Union_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("union_id")), m_Union_id));
    }
    if(m_Is_privateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_private")), m_Is_private));
    }
    if(m_Duet_disabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("duet_disabled")), m_Duet_disabled));
    }
    if(m_Privacy_levelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("privacy_levels")), m_Privacy_levels));
    }
    if(m_Stitch_disabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("stitch_disabled")), m_Stitch_disabled));
    }
    if(m_Comment_disabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("comment_disabled")), m_Comment_disabled));
    }
    if(m_Max_video_post_duration_secIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("max_video_post_duration_sec")), m_Max_video_post_duration_sec));
    }
}

bool Account_data::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("union_id"))))
    {
        utility::string_t refVal_setUnionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("union_id"))), refVal_setUnionId );
        setUnionId(refVal_setUnionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_private"))))
    {
        bool refVal_setIsPrivate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_private"))), refVal_setIsPrivate );
        setIsPrivate(refVal_setIsPrivate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("duet_disabled"))))
    {
        bool refVal_setDuetDisabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("duet_disabled"))), refVal_setDuetDisabled );
        setDuetDisabled(refVal_setDuetDisabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("privacy_levels"))))
    {
        std::vector<utility::string_t> refVal_setPrivacyLevels;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("privacy_levels"))), refVal_setPrivacyLevels );
        setPrivacyLevels(refVal_setPrivacyLevels);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("stitch_disabled"))))
    {
        bool refVal_setStitchDisabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("stitch_disabled"))), refVal_setStitchDisabled );
        setStitchDisabled(refVal_setStitchDisabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("comment_disabled"))))
    {
        bool refVal_setCommentDisabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("comment_disabled"))), refVal_setCommentDisabled );
        setCommentDisabled(refVal_setCommentDisabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("max_video_post_duration_sec"))))
    {
        int32_t refVal_setMaxVideoPostDurationSec;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("max_video_post_duration_sec"))), refVal_setMaxVideoPostDurationSec );
        setMaxVideoPostDurationSec(refVal_setMaxVideoPostDurationSec);
    }
    return ok;
}

utility::string_t Account_data::getUnionId() const
{
    return m_Union_id;
}

void Account_data::setUnionId(const utility::string_t& value)
{
    m_Union_id = value;
    m_Union_idIsSet = true;
}

bool Account_data::unionIdIsSet() const
{
    return m_Union_idIsSet;
}

void Account_data::unsetUnion_id()
{
    m_Union_idIsSet = false;
}
bool Account_data::isIsPrivate() const
{
    return m_Is_private;
}

void Account_data::setIsPrivate(bool value)
{
    m_Is_private = value;
    m_Is_privateIsSet = true;
}

bool Account_data::isPrivateIsSet() const
{
    return m_Is_privateIsSet;
}

void Account_data::unsetIs_private()
{
    m_Is_privateIsSet = false;
}
bool Account_data::isDuetDisabled() const
{
    return m_Duet_disabled;
}

void Account_data::setDuetDisabled(bool value)
{
    m_Duet_disabled = value;
    m_Duet_disabledIsSet = true;
}

bool Account_data::duetDisabledIsSet() const
{
    return m_Duet_disabledIsSet;
}

void Account_data::unsetDuet_disabled()
{
    m_Duet_disabledIsSet = false;
}
std::vector<utility::string_t>& Account_data::getPrivacyLevels()
{
    return m_Privacy_levels;
}

void Account_data::setPrivacyLevels(const std::vector<utility::string_t>& value)
{
    m_Privacy_levels = value;
    m_Privacy_levelsIsSet = true;
}

bool Account_data::privacyLevelsIsSet() const
{
    return m_Privacy_levelsIsSet;
}

void Account_data::unsetPrivacy_levels()
{
    m_Privacy_levelsIsSet = false;
}
bool Account_data::isStitchDisabled() const
{
    return m_Stitch_disabled;
}

void Account_data::setStitchDisabled(bool value)
{
    m_Stitch_disabled = value;
    m_Stitch_disabledIsSet = true;
}

bool Account_data::stitchDisabledIsSet() const
{
    return m_Stitch_disabledIsSet;
}

void Account_data::unsetStitch_disabled()
{
    m_Stitch_disabledIsSet = false;
}
bool Account_data::isCommentDisabled() const
{
    return m_Comment_disabled;
}

void Account_data::setCommentDisabled(bool value)
{
    m_Comment_disabled = value;
    m_Comment_disabledIsSet = true;
}

bool Account_data::commentDisabledIsSet() const
{
    return m_Comment_disabledIsSet;
}

void Account_data::unsetComment_disabled()
{
    m_Comment_disabledIsSet = false;
}
int32_t Account_data::getMaxVideoPostDurationSec() const
{
    return m_Max_video_post_duration_sec;
}

void Account_data::setMaxVideoPostDurationSec(int32_t value)
{
    m_Max_video_post_duration_sec = value;
    m_Max_video_post_duration_secIsSet = true;
}

bool Account_data::maxVideoPostDurationSecIsSet() const
{
    return m_Max_video_post_duration_secIsSet;
}

void Account_data::unsetMax_video_post_duration_sec()
{
    m_Max_video_post_duration_secIsSet = false;
}
}
}
}
}


