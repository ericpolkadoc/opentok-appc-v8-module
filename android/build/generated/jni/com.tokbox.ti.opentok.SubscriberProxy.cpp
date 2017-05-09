/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "com.tokbox.ti.opentok.SubscriberProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.kroll.KrollProxy.h"

#define TAG "SubscriberProxy"

using namespace v8;

namespace com {
namespace tokbox {
namespace ti {
namespace opentok {


Persistent<FunctionTemplate> SubscriberProxy::proxyTemplate;
jclass SubscriberProxy::javaClass = NULL;

SubscriberProxy::SubscriberProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void SubscriberProxy::bindProxy(Local<Object> exports, Local<Context> context)
{
	Isolate* isolate = context->GetIsolate();

	Local<FunctionTemplate> pt = getProxyTemplate(isolate);
	Local<Function> proxyConstructor = pt->GetFunction(context).ToLocalChecked();
	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Subscriber"); // use symbol over string for efficiency
	exports->Set(nameSymbol, proxyConstructor);
}

void SubscriberProxy::dispose(Isolate* isolate)
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Reset();
	}

	titanium::KrollProxy::dispose(isolate);
}

Local<FunctionTemplate> SubscriberProxy::getProxyTemplate(Isolate* isolate)
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate.Get(isolate);
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("com/tokbox/ti/opentok/SubscriberProxy");
	EscapableHandleScope scope(isolate);

	// use symbol over string for efficiency
	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Subscriber");

	Local<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(isolate,
		titanium::KrollProxy::getProxyTemplate(isolate)
, javaClass, nameSymbol);

	proxyTemplate.Reset(isolate, t);
	t->Set(titanium::Proxy::inheritSymbol.Get(isolate),
		FunctionTemplate::New(isolate, titanium::Proxy::inherit<SubscriberProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *t);

	// Method bindings --------------------------------------------------------
	titanium::SetProtoMethod(isolate, t, "getSubscribeToVideo", SubscriberProxy::getSubscribeToVideo);
	titanium::SetProtoMethod(isolate, t, "setSubscribeToVideo", SubscriberProxy::setSubscribeToVideo);
	titanium::SetProtoMethod(isolate, t, "getStream", SubscriberProxy::getStream);
	titanium::SetProtoMethod(isolate, t, "setSubscribeToAudio", SubscriberProxy::setSubscribeToAudio);
	titanium::SetProtoMethod(isolate, t, "getSubscribeToAudio", SubscriberProxy::getSubscribeToAudio);
	titanium::SetProtoMethod(isolate, t, "createView", SubscriberProxy::createView);
	titanium::SetProtoMethod(isolate, t, "getSession", SubscriberProxy::getSession);
	titanium::SetProtoMethod(isolate, t, "getView", SubscriberProxy::getView);

	Local<ObjectTemplate> prototypeTemplate = t->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = t->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "subscribeToVideo"),
			SubscriberProxy::getter_subscribeToVideo,
			SubscriberProxy::setter_subscribeToVideo,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "view"),
			SubscriberProxy::getter_view,
			titanium::Proxy::onPropertyChanged,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "stream"),
			SubscriberProxy::getter_stream,
			titanium::Proxy::onPropertyChanged,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "subscribeToAudio"),
			SubscriberProxy::getter_subscribeToAudio,
			SubscriberProxy::setter_subscribeToAudio,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "session"),
			SubscriberProxy::getter_session,
			titanium::Proxy::onPropertyChanged,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete)
		);

	// Accessors --------------------------------------------------------------

	return scope.Escape(t);
}

// Methods --------------------------------------------------------------------
void SubscriberProxy::getSubscribeToVideo(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getSubscribeToVideo()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getSubscribeToVideo", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getSubscribeToVideo' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void SubscriberProxy::setSubscribeToVideo(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setSubscribeToVideo()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "setSubscribeToVideo", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setSubscribeToVideo' with signature '(Z)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setSubscribeToVideo: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	if (!args[0]->IsBoolean() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
		titanium::JSException::Error(isolate, error);
		return;
	}
	

	if (!args[0]->IsNull()) {
		Local<Boolean> arg_0 = args[0]->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void SubscriberProxy::getStream(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getStream()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getStream", "()Lcom/tokbox/ti/opentok/StreamProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getStream' with signature '()Lcom/tokbox/ti/opentok/StreamProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}
void SubscriberProxy::setSubscribeToAudio(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setSubscribeToAudio()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "setSubscribeToAudio", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setSubscribeToAudio' with signature '(Z)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setSubscribeToAudio: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	if (!args[0]->IsBoolean() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
		titanium::JSException::Error(isolate, error);
		return;
	}
	

	if (!args[0]->IsNull()) {
		Local<Boolean> arg_0 = args[0]->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void SubscriberProxy::getSubscribeToAudio(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getSubscribeToAudio()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getSubscribeToAudio", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getSubscribeToAudio' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void SubscriberProxy::createView(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "createView()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "createView", "(Lorg/appcelerator/kroll/KrollDict;)Lcom/tokbox/ti/opentok/OpentokViewProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'createView' with signature '(Lorg/appcelerator/kroll/KrollDict;)Lcom/tokbox/ti/opentok/OpentokViewProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "createView: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	bool isNew_0;

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsObjectToJavaKrollDict(
				isolate,
				env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}
void SubscriberProxy::getSession(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getSession()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getSession", "()Lcom/tokbox/ti/opentok/SessionProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getSession' with signature '()Lcom/tokbox/ti/opentok/SessionProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}
void SubscriberProxy::getView(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getView()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getView", "()Lcom/tokbox/ti/opentok/OpentokViewProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getView' with signature '()Lcom/tokbox/ti/opentok/OpentokViewProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}

// Dynamic property accessors -------------------------------------------------

void SubscriberProxy::getter_subscribeToVideo(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getSubscribeToVideo", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getSubscribeToVideo' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}

void SubscriberProxy::setter_subscribeToVideo(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, subscribeToVideo wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "setSubscribeToVideo", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setSubscribeToVideo' with signature '(Z)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	if (!value->IsBoolean() && !value->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
	}
	

	if (!value->IsNull()) {
		Local<Boolean> arg_0 = value->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




}


void SubscriberProxy::getter_view(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getView", "()Lcom/tokbox/ti/opentok/OpentokViewProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getView' with signature '()Lcom/tokbox/ti/opentok/OpentokViewProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}



void SubscriberProxy::getter_stream(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getStream", "()Lcom/tokbox/ti/opentok/StreamProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getStream' with signature '()Lcom/tokbox/ti/opentok/StreamProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}



void SubscriberProxy::getter_subscribeToAudio(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getSubscribeToAudio", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getSubscribeToAudio' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}

void SubscriberProxy::setter_subscribeToAudio(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, subscribeToAudio wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "setSubscribeToAudio", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setSubscribeToAudio' with signature '(Z)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	if (!value->IsBoolean() && !value->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
	}
	

	if (!value->IsNull()) {
		Local<Boolean> arg_0 = value->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




}


void SubscriberProxy::getter_session(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SubscriberProxy::javaClass, "getSession", "()Lcom/tokbox/ti/opentok/SessionProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getSession' with signature '()Lcom/tokbox/ti/opentok/SessionProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}




} // opentok
} // ti
} // tokbox
} // com
