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
 * PostsApi.h
 *
 * 
 */

#ifndef POSTPUMA_PostsApi_H_
#define POSTPUMA_PostsApi_H_



#include "PostPuma/ApiClient.h"

#include "PostPuma/model/CreatePost_request.h"
#include "PostPuma/model/DeleteMediaFiles_200_response.h"
#include "PostPuma/model/DeletePost_request.h"
#include "PostPuma/model/DeletePosts_200_response.h"
#include "PostPuma/model/DeletePosts_request.h"
#include "PostPuma/model/ListPosts_200_response.h"
#include "PostPuma/model/Post.h"
#include "PostPuma/model/QueuePost_200_response.h"
#include "PostPuma/model/SchedulePost_request.h"
#include "PostPuma/model/UpdatePost_request.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace PostPuma {

using namespace org::openapitools::client::model;



class  PostsApi 
{
public:

    explicit PostsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~PostsApi();

    /// <summary>
    /// Create post
    /// </summary>
    /// <remarks>
    /// Create post
    /// </remarks>
    /// <param name="createPostRequest"> (optional)</param>
    pplx::task<std::shared_ptr<Post>> createPost(
        boost::optional<std::shared_ptr<CreatePost_request>> createPostRequest
    ) const;
    /// <summary>
    /// Delete post
    /// </summary>
    /// <remarks>
    /// Delete post
    /// </remarks>
    /// <param name="postUuid">Post UUID</param>
    /// <param name="deletePostRequest"> (optional)</param>
    pplx::task<std::shared_ptr<DeletePosts_200_response>> deletePost(
        utility::string_t postUuid,
        boost::optional<std::shared_ptr<DeletePost_request>> deletePostRequest
    ) const;
    /// <summary>
    /// Delete posts
    /// </summary>
    /// <remarks>
    /// Delete posts
    /// </remarks>
    /// <param name="deletePostsRequest"> (optional)</param>
    pplx::task<std::shared_ptr<DeletePosts_200_response>> deletePosts(
        boost::optional<std::shared_ptr<DeletePosts_request>> deletePostsRequest
    ) const;
    /// <summary>
    /// Get post
    /// </summary>
    /// <remarks>
    /// Get post
    /// </remarks>
    /// <param name="postUuid">Post UUID</param>
    pplx::task<std::shared_ptr<Post>> getPost(
        utility::string_t postUuid
    ) const;
    /// <summary>
    /// List posts
    /// </summary>
    /// <remarks>
    /// List posts
    /// </remarks>
    /// <param name="page">Page (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ListPosts_200_response>> listPosts(
        boost::optional<int32_t> page
    ) const;
    /// <summary>
    /// Queue post
    /// </summary>
    /// <remarks>
    /// Queue post
    /// </remarks>
    /// <param name="postUuid">Post UUID</param>
    pplx::task<std::shared_ptr<QueuePost_200_response>> queuePost(
        utility::string_t postUuid
    ) const;
    /// <summary>
    /// Schedule post
    /// </summary>
    /// <remarks>
    /// Schedule post
    /// </remarks>
    /// <param name="postUuid">Post UUID</param>
    /// <param name="schedulePostRequest"> (optional)</param>
    pplx::task<std::shared_ptr<QueuePost_200_response>> schedulePost(
        utility::string_t postUuid,
        boost::optional<std::shared_ptr<SchedulePost_request>> schedulePostRequest
    ) const;
    /// <summary>
    /// Update post
    /// </summary>
    /// <remarks>
    /// Update post
    /// </remarks>
    /// <param name="postUuid">Post UUID</param>
    /// <param name="updatePostRequest"> (optional)</param>
    pplx::task<std::shared_ptr<DeleteMediaFiles_200_response>> updatePost(
        utility::string_t postUuid,
        boost::optional<std::shared_ptr<UpdatePost_request>> updatePostRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}

#endif /* POSTPUMA_PostsApi_H_ */

