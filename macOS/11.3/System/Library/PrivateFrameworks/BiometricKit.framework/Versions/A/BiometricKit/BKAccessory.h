/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/Versions/A/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, BKAccessoryGroup, BKDevice, NSData;

@interface BKAccessory : NSObject {

	unsigned _type;
	NSUUID* _uuid;
	unsigned _flags;
	NSString* _name;
	BKAccessoryGroup* _accessoryGroup;
	BKDevice* _device;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char isRemovable; 
@property (nonatomic,copy,readonly) NSData * uid; 
@property (nonatomic,readonly) BKAccessoryGroup * accessoryGroup;              //@synthesize accessoryGroup=_accessoryGroup - In the implementation block
@property (nonatomic,readonly) BKDevice * device;                              //@synthesize device=_device - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSData *)uid;
-(BKDevice *)device;
-(char)isRemovable;
-(char)isAuthorized:(char*)arg1 error:(id*)arg2 ;
-(id)initWithServerAccessory:(id)arg1 device:(id)arg2 ;
-(char)isEqualToAccessory:(id)arg1 ;
-(char)isEqualToServerAccessory:(id)arg1 ;
-(id)serverAccessory;
-(char)isConnected:(char*)arg1 error:(id*)arg2 ;
-(BKAccessoryGroup *)accessoryGroup;
@end

