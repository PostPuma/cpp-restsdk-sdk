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



#include "PostPuma/model/CreatePost_request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CreatePost_request::CreatePost_request()
{
    m_date = utility::conversions::to_string_t("");
    m_dateIsSet = false;
    m_Time = utility::conversions::to_string_t("");
    m_TimeIsSet = false;
    m_Timezone = utility::conversions::to_string_t("");
    m_TimezoneIsSet = false;
    m_Schedule = false;
    m_ScheduleIsSet = false;
    m_Schedule_now = false;
    m_Schedule_nowIsSet = false;
    m_Queue = false;
    m_QueueIsSet = false;
    m_AccountsIsSet = false;
    m_TagsIsSet = false;
    m_VersionsIsSet = false;
}

CreatePost_request::~CreatePost_request()
{
}

void CreatePost_request::validate()
{
    // TODO: implement validation
}

web::json::value CreatePost_request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_dateIsSet)
    {
        val[utility::conversions::to_string_t(U("date"))] = ModelBase::toJson(m_date);
    }
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }
    if(m_TimezoneIsSet)
    {
        val[utility::conversions::to_string_t(U("timezone"))] = ModelBase::toJson(m_Timezone);
    }
    if(m_ScheduleIsSet)
    {
        val[utility::conversions::to_string_t(U("schedule"))] = ModelBase::toJson(m_Schedule);
    }
    if(m_Schedule_nowIsSet)
    {
        val[utility::conversions::to_string_t(U("schedule_now"))] = ModelBase::toJson(m_Schedule_now);
    }
    if(m_QueueIsSet)
    {
        val[utility::conversions::to_string_t(U("queue"))] = ModelBase::toJson(m_Queue);
    }
    if(m_AccountsIsSet)
    {
        val[utility::conversions::to_string_t(U("accounts"))] = ModelBase::toJson(m_Accounts);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_Tags);
    }
    if(m_VersionsIsSet)
    {
        val[utility::conversions::to_string_t(U("versions"))] = ModelBase::toJson(m_Versions);
    }

    return val;
}

bool CreatePost_request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("date"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("date")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDate);
            setDate(refVal_setDate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timezone"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timezone")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTimezone;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimezone);
            setTimezone(refVal_setTimezone);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("schedule"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("schedule")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSchedule;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSchedule);
            setSchedule(refVal_setSchedule);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("schedule_now"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("schedule_now")));
        if(!fieldValue.is_null())
        {
            bool refVal_setScheduleNow;
            ok &= ModelBase::fromJson(fieldValue, refVal_setScheduleNow);
            setScheduleNow(refVal_setScheduleNow);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("queue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("queue")));
        if(!fieldValue.is_null())
        {
            bool refVal_setQueue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQueue);
            setQueue(refVal_setQueue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accounts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accounts")));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_setAccounts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccounts);
            setAccounts(refVal_setAccounts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tags")));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_setTags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
            setTags(refVal_setTags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("versions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("versions")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Version>> refVal_setVersions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVersions);
            setVersions(refVal_setVersions);
        }
    }
    return ok;
}

void CreatePost_request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("date")), m_date));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
    if(m_TimezoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timezone")), m_Timezone));
    }
    if(m_ScheduleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("schedule")), m_Schedule));
    }
    if(m_Schedule_nowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("schedule_now")), m_Schedule_now));
    }
    if(m_QueueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("queue")), m_Queue));
    }
    if(m_AccountsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accounts")), m_Accounts));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_Tags));
    }
    if(m_VersionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("versions")), m_Versions));
    }
}

bool CreatePost_request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("date"))))
    {
        utility::string_t refVal_setDate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("date"))), refVal_setDate );
        setDate(refVal_setDate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        utility::string_t refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timezone"))))
    {
        utility::string_t refVal_setTimezone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timezone"))), refVal_setTimezone );
        setTimezone(refVal_setTimezone);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("schedule"))))
    {
        bool refVal_setSchedule;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("schedule"))), refVal_setSchedule );
        setSchedule(refVal_setSchedule);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("schedule_now"))))
    {
        bool refVal_setScheduleNow;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("schedule_now"))), refVal_setScheduleNow );
        setScheduleNow(refVal_setScheduleNow);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("queue"))))
    {
        bool refVal_setQueue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("queue"))), refVal_setQueue );
        setQueue(refVal_setQueue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accounts"))))
    {
        std::vector<int32_t> refVal_setAccounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accounts"))), refVal_setAccounts );
        setAccounts(refVal_setAccounts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<int32_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("versions"))))
    {
        std::vector<std::shared_ptr<Version>> refVal_setVersions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("versions"))), refVal_setVersions );
        setVersions(refVal_setVersions);
    }
    return ok;
}

utility::string_t CreatePost_request::getDate() const
{
    return m_date;
}

void CreatePost_request::setDate(const utility::string_t& value)
{
    m_date = value;
    m_dateIsSet = true;
}

bool CreatePost_request::dateIsSet() const
{
    return m_dateIsSet;
}

void CreatePost_request::unsetdate()
{
    m_dateIsSet = false;
}
utility::string_t CreatePost_request::getTime() const
{
    return m_Time;
}

void CreatePost_request::setTime(const utility::string_t& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool CreatePost_request::timeIsSet() const
{
    return m_TimeIsSet;
}

void CreatePost_request::unsetTime()
{
    m_TimeIsSet = false;
}
utility::string_t CreatePost_request::getTimezone() const
{
    return m_Timezone;
}

void CreatePost_request::setTimezone(const utility::string_t& value)
{
    m_Timezone = value;
    m_TimezoneIsSet = true;
}

bool CreatePost_request::timezoneIsSet() const
{
    return m_TimezoneIsSet;
}

void CreatePost_request::unsetTimezone()
{
    m_TimezoneIsSet = false;
}
bool CreatePost_request::isSchedule() const
{
    return m_Schedule;
}

void CreatePost_request::setSchedule(bool value)
{
    m_Schedule = value;
    m_ScheduleIsSet = true;
}

bool CreatePost_request::scheduleIsSet() const
{
    return m_ScheduleIsSet;
}

void CreatePost_request::unsetSchedule()
{
    m_ScheduleIsSet = false;
}
bool CreatePost_request::isScheduleNow() const
{
    return m_Schedule_now;
}

void CreatePost_request::setScheduleNow(bool value)
{
    m_Schedule_now = value;
    m_Schedule_nowIsSet = true;
}

bool CreatePost_request::scheduleNowIsSet() const
{
    return m_Schedule_nowIsSet;
}

void CreatePost_request::unsetSchedule_now()
{
    m_Schedule_nowIsSet = false;
}
bool CreatePost_request::isQueue() const
{
    return m_Queue;
}

void CreatePost_request::setQueue(bool value)
{
    m_Queue = value;
    m_QueueIsSet = true;
}

bool CreatePost_request::queueIsSet() const
{
    return m_QueueIsSet;
}

void CreatePost_request::unsetQueue()
{
    m_QueueIsSet = false;
}
std::vector<int32_t>& CreatePost_request::getAccounts()
{
    return m_Accounts;
}

void CreatePost_request::setAccounts(std::vector<int32_t> value)
{
    m_Accounts = value;
    m_AccountsIsSet = true;
}

bool CreatePost_request::accountsIsSet() const
{
    return m_AccountsIsSet;
}

void CreatePost_request::unsetAccounts()
{
    m_AccountsIsSet = false;
}
std::vector<int32_t>& CreatePost_request::getTags()
{
    return m_Tags;
}

void CreatePost_request::setTags(std::vector<int32_t> value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool CreatePost_request::tagsIsSet() const
{
    return m_TagsIsSet;
}

void CreatePost_request::unsetTags()
{
    m_TagsIsSet = false;
}
std::vector<std::shared_ptr<Version>>& CreatePost_request::getVersions()
{
    return m_Versions;
}

void CreatePost_request::setVersions(const std::vector<std::shared_ptr<Version>>& value)
{
    m_Versions = value;
    m_VersionsIsSet = true;
}

bool CreatePost_request::versionsIsSet() const
{
    return m_VersionsIsSet;
}

void CreatePost_request::unsetVersions()
{
    m_VersionsIsSet = false;
}
}
}
}
}


