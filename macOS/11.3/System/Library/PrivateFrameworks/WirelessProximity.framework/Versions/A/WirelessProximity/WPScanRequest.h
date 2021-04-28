/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/Versions/A/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSData, NSDictionary, NSArray;

@interface WPScanRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	char _allowDuplicates;
	char _scanWhenLocked;
	char _activeScanning;
	char _scanCache;
	char _advBuffer;
	char _priorityCritical;
	char _range;
	char _holdVoucher;
	NSNumber* _rssiThreshold;
	NSData* _blobValue;
	NSData* _maskValue;
	NSDictionary* _options;
	NSArray* _peers;
	double _updateTime;
	long long _nearbyScanMode;
	long long _advBufferMode;
	SCD_Struct_WP1 _scanningRates;

}

@property (assign) unsigned char clientType;                  //@synthesize clientType=_clientType - In the implementation block
@property (assign) SCD_Struct_WP1 scanningRates;              //@synthesize scanningRates=_scanningRates - In the implementation block
@property (assign) char allowDuplicates;                      //@synthesize allowDuplicates=_allowDuplicates - In the implementation block
@property (assign) char scanWhenLocked;                       //@synthesize scanWhenLocked=_scanWhenLocked - In the implementation block
@property (assign) char activeScanning;                       //@synthesize activeScanning=_activeScanning - In the implementation block
@property (assign) char scanCache;                            //@synthesize scanCache=_scanCache - In the implementation block
@property (retain) NSNumber * rssiThreshold;                  //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (nonatomic,retain) NSData * blobValue;              //@synthesize blobValue=_blobValue - In the implementation block
@property (nonatomic,retain) NSData * maskValue;              //@synthesize maskValue=_maskValue - In the implementation block
@property (retain) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
@property (retain) NSArray * peers;                           //@synthesize peers=_peers - In the implementation block
@property (assign) double updateTime;                         //@synthesize updateTime=_updateTime - In the implementation block
@property (assign) long long nearbyScanMode;                  //@synthesize nearbyScanMode=_nearbyScanMode - In the implementation block
@property (assign) char advBuffer;                            //@synthesize advBuffer=_advBuffer - In the implementation block
@property (assign) long long advBufferMode;                   //@synthesize advBufferMode=_advBufferMode - In the implementation block
@property (assign) char priorityCritical;                     //@synthesize priorityCritical=_priorityCritical - In the implementation block
@property (assign) char range;                                //@synthesize range=_range - In the implementation block
@property (assign) char holdVoucher;                          //@synthesize holdVoucher=_holdVoucher - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(char)range;
-(void)setRange:(char)arg1 ;
-(NSNumber *)rssiThreshold;
-(void)setRssiThreshold:(NSNumber *)arg1 ;
-(NSArray *)peers;
-(void)setPeers:(NSArray *)arg1 ;
-(unsigned char)clientType;
-(void)setUpdateTime:(double)arg1 ;
-(double)updateTime;
-(void)setScanCache:(char)arg1 ;
-(char)scanCache;
-(void)setClientType:(unsigned char)arg1 ;
-(void)setScanningRates:(SCD_Struct_WP1)arg1 ;
-(void)setAllowDuplicates:(char)arg1 ;
-(void)setActiveScanning:(char)arg1 ;
-(void)setBlobValue:(NSData *)arg1 ;
-(void)setMaskValue:(NSData *)arg1 ;
-(SCD_Struct_WP1)scanningRates;
-(char)holdVoucher;
-(void)setHoldVoucher:(char)arg1 ;
-(void)setNearbyScanMode:(long long)arg1 ;
-(char)allowDuplicates;
-(char)scanWhenLocked;
-(void)setScanWhenLocked:(char)arg1 ;
-(char)activeScanning;
-(NSData *)blobValue;
-(NSData *)maskValue;
-(long long)nearbyScanMode;
-(char)advBuffer;
-(void)setAdvBuffer:(char)arg1 ;
-(long long)advBufferMode;
-(void)setAdvBufferMode:(long long)arg1 ;
-(char)priorityCritical;
-(void)setPriorityCritical:(char)arg1 ;
@end
