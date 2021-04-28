/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Versions/A/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUNotificationRequest : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _accessoryName;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * accessoryName;              //@synthesize accessoryName=_accessoryName - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)accessoryName;
-(void)setAccessoryName:(NSString *)arg1 ;
-(id)initUnplugReplugNotificationWithAccessoryName:(id)arg1 ;
@end

