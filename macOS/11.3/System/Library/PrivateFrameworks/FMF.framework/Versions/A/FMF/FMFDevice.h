/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/Versions/A/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding> {

	char _isActiveDevice;
	char _isThisDevice;
	char _isCompanionDevice;
	char _isAutoMeCapable;
	NSString* _deviceId;
	NSString* _deviceName;
	NSString* _idsDeviceId;

}

@property (copy) NSString * deviceId;                   //@synthesize deviceId=_deviceId - In the implementation block
@property (copy) NSString * deviceName;                 //@synthesize deviceName=_deviceName - In the implementation block
@property (assign) char isActiveDevice;                 //@synthesize isActiveDevice=_isActiveDevice - In the implementation block
@property (assign) char isThisDevice;                   //@synthesize isThisDevice=_isThisDevice - In the implementation block
@property (assign) char isCompanionDevice;              //@synthesize isCompanionDevice=_isCompanionDevice - In the implementation block
@property (assign) char isAutoMeCapable;                //@synthesize isAutoMeCapable=_isAutoMeCapable - In the implementation block
@property (copy) NSString * idsDeviceId;                //@synthesize idsDeviceId=_idsDeviceId - In the implementation block
+(char)supportsSecureCoding;
+(id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(char)arg4 isThisDevice:(char)arg5 isCompanionDevice:(char)arg6 isAutoMeCapable:(char)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(char)isThisDevice;
-(NSString *)idsDeviceId;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
-(char)isCompanionDevice;
-(char)isActiveDevice;
-(void)setIsActiveDevice:(char)arg1 ;
-(void)setIsThisDevice:(char)arg1 ;
-(void)setIsCompanionDevice:(char)arg1 ;
-(void)setIsAutoMeCapable:(char)arg1 ;
-(void)setIdsDeviceId:(NSString *)arg1 ;
-(char)isAutoMeCapable;
-(void)updateIsActive:(char)arg1 isThisDevice:(char)arg2 ;
@end

