/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding> {

	char _requireActiveConnection;
	NSString* _reachableHostName;
	double _updateCoalescenceInterval;

}

@property (nonatomic,copy) NSString * reachableHostName;                    //@synthesize reachableHostName=_reachableHostName - In the implementation block
@property (assign,nonatomic) double updateCoalescenceInterval;              //@synthesize updateCoalescenceInterval=_updateCoalescenceInterval - In the implementation block
@property (assign,nonatomic) char requireActiveConnection;                  //@synthesize requireActiveConnection=_requireActiveConnection - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reachableHostName;
-(double)updateCoalescenceInterval;
-(char)requireActiveConnection;
-(void)setReachableHostName:(NSString *)arg1 ;
-(void)setUpdateCoalescenceInterval:(double)arg1 ;
-(void)setRequireActiveConnection:(char)arg1 ;
@end

