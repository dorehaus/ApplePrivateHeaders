/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMAccessory, NSData;

@interface CUHomeKitResolvableAccessory : NSObject {

	HMAccessory* _accessory;
	NSData* _irkData;

}

@property (nonatomic,retain) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSData * irkData;                     //@synthesize irkData=_irkData - In the implementation block
-(HMAccessory *)accessory;
-(NSData *)irkData;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)setIrkData:(NSData *)arg1 ;
@end

