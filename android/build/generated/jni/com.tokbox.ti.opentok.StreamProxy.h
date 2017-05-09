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

class StreamProxy : public titanium::Proxy
{
public:
	explicit StreamProxy(jobject javaObject);

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void hasVideo(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getConnection(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasAudio(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getStreamId(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCreationTime(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_name(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_connection(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_creationTime(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_streamId(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // opentok
} // ti
} // tokbox
} // com
