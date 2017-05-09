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
	namespace opentok {

class SessionProxy : public titanium::Proxy
{
public:
	explicit SessionProxy(jobject javaObject);

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void disconnect(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getConnection(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSessionConnectionStatus(const v8::FunctionCallbackInfo<v8::Value>&);
	static void connectSubscriber(const v8::FunctionCallbackInfo<v8::Value>&);
	static void subscribe(const v8::FunctionCallbackInfo<v8::Value>&);
	static void unsubscribe(const v8::FunctionCallbackInfo<v8::Value>&);
	static void unpublish(const v8::FunctionCallbackInfo<v8::Value>&);
	static void publish(const v8::FunctionCallbackInfo<v8::Value>&);
	static void connectPublisher(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSessionId(const v8::FunctionCallbackInfo<v8::Value>&);
	static void connect(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_connection(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_sessionId(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_sessionConnectionStatus(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

	} // namespace opentok
} // opentok
} // ti
} // tokbox
} // com
