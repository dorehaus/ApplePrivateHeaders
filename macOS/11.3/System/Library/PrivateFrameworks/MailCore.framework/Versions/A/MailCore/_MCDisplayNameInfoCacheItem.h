/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCDisplayNameInfo, NSString;

@interface _MCDisplayNameInfoCacheItem : NSObject {

	MCDisplayNameInfo* _info;
	NSString* _rawAddress;

}

@property (nonatomic,readonly) MCDisplayNameInfo * info;                //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) NSString * rawAddress;              //@synthesize rawAddress=_rawAddress - In the implementation block
-(id)init;
-(MCDisplayNameInfo *)info;
-(NSString *)rawAddress;
-(id)initWithInfo:(id)arg1 address:(id)arg2 ;
@end
