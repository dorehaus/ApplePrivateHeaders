/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/Versions/A/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SOConfigurationVersion : NSObject {

	long long _mode;
	int _token;
	unsigned long long _version;

}

@property (nonatomic,readonly) long long version; 
+(void)reset;
-(void)dealloc;
-(unsigned long long)_state;
-(long long)version;
-(id)initWithMode:(long long)arg1 ;
-(void)_setStateAndNotify:(unsigned long long)arg1 ;
-(long long)checkVersion;
-(void)increaseVersionWithMessage:(id)arg1 ;
-(void)setAppSSOUnavailable;
@end

