/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/Versions/A/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableData, NSData;

@interface WPDAdvertisingData : NSObject {

	char _isRanging;
	char _assertPower;
	long long _advertRate;
	NSMutableSet* _types;
	NSMutableData* _internalData;

}

@property (retain) NSMutableData * internalData;                //@synthesize internalData=_internalData - In the implementation block
@property (retain) NSMutableSet * types;                        //@synthesize types=_types - In the implementation block
@property (assign) long long advertRate;                        //@synthesize advertRate=_advertRate - In the implementation block
@property (getter=getData,readonly) NSData * data; 
@property (assign) char isRanging;                              //@synthesize isRanging=_isRanging - In the implementation block
@property (assign) char assertPower;                            //@synthesize assertPower=_assertPower - In the implementation block
-(id)description;
-(id)init;
-(NSMutableSet *)types;
-(char)isEqualToData:(id)arg1 ;
-(void)setTypes:(NSMutableSet *)arg1 ;
-(void)setInternalData:(NSMutableData *)arg1 ;
-(NSMutableData *)internalData;
-(char)isRanging;
-(void)setIsRanging:(char)arg1 ;
-(long long)advertRate;
-(char)assertPower;
-(void)setAdvertRate:(long long)arg1 ;
-(void)addAdvertisingRequest:(id)arg1 ;
-(id)getData;
-(char)isValidWithAdditionalRequest:(id)arg1 ;
-(void)setAssertPower:(char)arg1 ;
@end

