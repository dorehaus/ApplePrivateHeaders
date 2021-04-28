/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {

	NSDictionary* _suspensionInfoDictionary;

}

@property (getter=isiCloudSuspended,nonatomic,readonly) char iCloudSuspended; 
@property (getter=isFamilySuspended,nonatomic,readonly) char familySuspended; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(char)isiCloudSuspended;
-(char)isFamilySuspended;
@end

