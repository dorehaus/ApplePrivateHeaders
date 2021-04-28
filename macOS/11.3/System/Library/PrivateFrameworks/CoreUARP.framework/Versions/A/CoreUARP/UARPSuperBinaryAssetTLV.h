/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUARP/CoreUARP-Structs.h>
@class NSURL, NSData, NSString, NSNumber, UARPAssetVersion;

@interface UARPSuperBinaryAssetTLV : NSObject {

	NSURL* _url;
	NSData* _data;
	NSString* _string;
	unsigned char _val8;
	unsigned short _val16;
	unsigned _val32;
	unsigned long long _val64;
	UARPVersion _version;
	int _valueType;
	unsigned long long _type;

}

@property (readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (readonly) NSString * valueAsString; 
@property (readonly) NSNumber * valueAsNumber; 
@property (readonly) NSData * valueAsData; 
@property (readonly) UARPAssetVersion * valueAsVersion; 
+(id)decomposeTLVs:(id)arg1 ;
+(id)findTLVWithType:(unsigned long long)arg1 tlvs:(id)arg2 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 stringValue:(id)arg2 ;
-(NSNumber *)valueAsNumber;
-(id)initWithType:(unsigned long long)arg1 version:(UARPVersion*)arg2 ;
-(id)initWithType:(unsigned long long)arg1 unsignedInt16:(unsigned short)arg2 ;
-(id)initWithType:(unsigned long long)arg1 urlValue:(id)arg2 ;
-(id)initWithType:(unsigned long long)arg1 unsignedInt32:(unsigned)arg2 ;
-(id)initWithType:(unsigned long long)arg1 dataValue:(id)arg2 ;
-(id)generateTLV:(id*)arg1 ;
-(UARPAssetVersion *)valueAsVersion;
-(NSString *)valueAsString;
-(NSData *)valueAsData;
-(id)initWithType:(unsigned long long)arg1 unsignedInt8:(unsigned char)arg2 ;
-(id)initWithType:(unsigned long long)arg1 unsignedInt64:(unsigned long long)arg2 ;
-(id)initWithType:(unsigned long long)arg1 tagValue:(id)arg2 ;
@end

