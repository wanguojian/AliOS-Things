/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/visionai-poc/model/PredictCategoryRequest.h>

using AlibabaCloud::Visionai_poc::Model::PredictCategoryRequest;

PredictCategoryRequest::PredictCategoryRequest() :
	RpcServiceRequest("visionai-poc", "2020-04-08", "PredictCategory")
{
	setMethod(HttpRequest::Method::Post);
}

PredictCategoryRequest::~PredictCategoryRequest()
{}

std::string PredictCategoryRequest::getMethod()const
{
	return method_;
}

void PredictCategoryRequest::setMethod(const std::string& method)
{
	method_ = method;
	setBodyParameter("Method", method);
}

std::string PredictCategoryRequest::getImageUrl()const
{
	return imageUrl_;
}

void PredictCategoryRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

std::string PredictCategoryRequest::getTitle()const
{
	return title_;
}

void PredictCategoryRequest::setTitle(const std::string& title)
{
	title_ = title;
	setBodyParameter("Title", title);
}

std::string PredictCategoryRequest::getUrl()const
{
	return url_;
}

void PredictCategoryRequest::setUrl(const std::string& url)
{
	url_ = url;
	setBodyParameter("Url", url);
}

