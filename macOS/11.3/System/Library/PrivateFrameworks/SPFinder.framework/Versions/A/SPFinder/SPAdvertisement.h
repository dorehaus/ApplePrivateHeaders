/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/Versions/A/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface SPAdvertisement : NSObject <NSSecureCoding> {

	unsigned char _status;
	NSData* _address;
	NSData* _advertisementData;
	NSData* _reserved;
	long long _rssi;
	NSDate* _scanDate;

}

@property (nonatomic,copy) NSData * address;                        //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) long long rssi;                        //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
@property (assign,nonatomic) unsigned char status;                  //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSData * reserved;                       //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,copy) NSDate * scanDate;                       //@synthesize scanDate=_scanDate - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)reserved;
-(unsigned char)status;
-(NSData *)address;
-(void)setAddress:(NSData *)arg1 ;
-(void)setStatus:(unsigned char)arg1 ;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(void)setReserved:(NSData *)arg1 ;
-(NSData *)advertisementData;
-(void)setAdvertisementData:(NSData *)arg1 ;
-(id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6 ;
-(void)setScanDate:(NSDate *)arg1 ;
-(NSDate *)scanDate;
-(id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4 ;
@end

