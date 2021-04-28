/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSJSCallbackHandler, WBSWebExtensionWebRequestFilter;

@interface WBSWebExtensionAPIWebRequestEventListener : NSObject {

	WBSJSCallbackHandler* _callbackHandler;
	WBSWebExtensionWebRequestFilter* _filter;

}

@property (nonatomic,readonly) WBSJSCallbackHandler * callbackHandler;                //@synthesize callbackHandler=_callbackHandler - In the implementation block
@property (nonatomic,readonly) WBSWebExtensionWebRequestFilter * filter;              //@synthesize filter=_filter - In the implementation block
-(WBSWebExtensionWebRequestFilter *)filter;
-(id)initWithCallbackHandler:(id)arg1 filter:(id)arg2 ;
-(WBSJSCallbackHandler *)callbackHandler;
@end

