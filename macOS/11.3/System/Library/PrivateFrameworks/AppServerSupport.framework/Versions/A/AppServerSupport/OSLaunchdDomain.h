/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/Versions/A/AppServerSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OSLaunchdDomain : NSObject {

	int _type;
	unsigned long long _handle;

}
+(id)loginwindowDomain;
+(id)domainForUser:(unsigned)arg1 ;
+(id)domainForPid:(int)arg1 ;
+(id)currentDomain;
-(id)initWithType:(int)arg1 handle:(unsigned long long)arg2 ;
@end
