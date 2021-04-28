/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _ICSearchContext : NSObject {

	char _isResponseContextDenylisted;
	char _shouldDisableAutoCaps;
	NSString* _locale;
	NSArray* _recipients;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,readonly) NSString * locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) char isResponseContextDenylisted;                    //@synthesize isResponseContextDenylisted=_isResponseContextDenylisted - In the implementation block
@property (nonatomic,readonly) char shouldDisableAutoCaps;                          //@synthesize shouldDisableAutoCaps=_shouldDisableAutoCaps - In the implementation block
-(NSString *)locale;
-(NSArray *)recipients;
-(NSString *)applicationBundleIdentifier;
-(char)shouldDisableAutoCaps;
-(id)initWithLocale:(id)arg1 recipients:(id)arg2 applicationBundleIdentifier:(id)arg3 isResponseContextDenylisted:(char)arg4 shouldDisableAutoCaps:(char)arg5 ;
-(char)isResponseContextDenylisted;
@end

