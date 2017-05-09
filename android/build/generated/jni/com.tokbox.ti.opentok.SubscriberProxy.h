/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace com {
namespace tokbox {
namespace ti {
namespace opentok {

class SubscriberProxy : public titanium::Proxy
{
public:
	explicit SubscriberProxy(jobject javaObject);

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void getSubscribeToVideo(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setSubscribeToVideo(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getStream(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setSubscribeToAudio(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSubscribeToAudio(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createView(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSession(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getView(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_subscribeToVideo(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_subscribeToVideo(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_view(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_stream(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_subscribeToAudio(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_subscribeToAudio(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_session(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // opentok
} // ti
} // tokbox
} // com
