/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
var bootstrap = kroll.NativeModule.require("bootstrap"),
	invoker = kroll.NativeModule.require("invoker"),
	Titanium = kroll.binding("Titanium").Titanium;

function moduleBootstrap(moduleBinding) {
	function lazyGet(object, binding, name, namespace) {
		return bootstrap.lazyGet(object, binding,
			name, namespace, moduleBinding.getBinding);
	}

	var module = moduleBinding.getBinding("com.tokbox.ti.opentok.OpentokModule")["Opentok"];
	var invocationAPIs = module.invocationAPIs = [];
	module.apiName = "Opentok";

	function addInvocationAPI(module, moduleNamespace, namespace, api) {
		invocationAPIs.push({ namespace: namespace, api: api });
	}

		addInvocationAPI(module, "Opentok", "Opentok", "createSession");

			if (!("__propertiesDefined__" in module)) {		
		Object.defineProperties(module, {
			"Publisher": {
				get: function() {
					var Publisher = lazyGet(this, "com.tokbox.ti.opentok.PublisherProxy", "Publisher", "Publisher");
					return Publisher;
				},
				configurable: true
			},
			"Stream": {
				get: function() {
					var Stream = lazyGet(this, "com.tokbox.ti.opentok.StreamProxy", "Stream", "Stream");
					return Stream;
				},
				configurable: true
			},
			"OpentokView": {
				get: function() {
					var OpentokView = lazyGet(this, "com.tokbox.ti.opentok.OpentokViewProxy", "OpentokView", "OpentokView");
					return OpentokView;
				},
				configurable: true
			},
			"Subscriber": {
				get: function() {
					var Subscriber = lazyGet(this, "com.tokbox.ti.opentok.SubscriberProxy", "Subscriber", "Subscriber");
					return Subscriber;
				},
				configurable: true
			},
			"Connection": {
				get: function() {
					var Connection = lazyGet(this, "com.tokbox.ti.opentok.ConnectionProxy", "Connection", "Connection");
					return Connection;
				},
				configurable: true
			},
			"Session": {
				get: function() {
					var Session = lazyGet(this, "com.tokbox.ti.opentok.SessionProxy", "Session", "Session");
					return Session;
				},
				configurable: true
			},
		
		});
		module.constructor.prototype.createSession = function() {
			return new module.Session(arguments);
		}
		}
		module.__propertiesDefined__ = true;
		return module;

}
exports.bootstrap = moduleBootstrap;
