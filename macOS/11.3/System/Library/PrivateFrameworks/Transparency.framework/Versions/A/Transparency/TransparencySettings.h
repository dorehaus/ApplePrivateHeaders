/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TransparencySettings : NSObject {

	NSDictionary* _settings;

}

@property (retain) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
+(char)allowsInternalSecurityPolicies;
+(double)defaultNetworkTimeout;
+(char)getBool:(id)arg1 ;
+(id)deviceUserAgent;
+(double)defaultQueryCacheTimeout;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
@end

