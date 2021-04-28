/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding> {

	unsigned short _bluetoothProductID;
	unsigned _colorCode;
	NSString* _model;
	double _timeoutSeconds;

}

@property (assign,nonatomic) unsigned short bluetoothProductID;              //@synthesize bluetoothProductID=_bluetoothProductID - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                             //@synthesize colorCode=_colorCode - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                          //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
+(char)supportsSecureCoding;
-(unsigned short)bluetoothProductID;
-(void)setBluetoothProductID:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(unsigned)colorCode;
-(void)setColorCode:(unsigned)arg1 ;
@end

