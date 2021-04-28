/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUIWebAction.h>

@class NSString, NSDictionary;

@interface AMSUIWebPluginAction : AMSUIWebAction {

	NSString* _actionIdentifier;
	NSString* _bundleIdentifier;
	NSDictionary* _options;

}

@property (readonly) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSDictionary * options;                   //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(NSString *)bundleIdentifier;
-(NSString *)actionIdentifier;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

