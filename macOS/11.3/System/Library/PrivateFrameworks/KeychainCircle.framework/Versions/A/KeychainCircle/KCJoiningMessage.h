/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/Versions/A/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface KCJoiningMessage : NSObject {

	int _type;
	NSData* _firstData;
	NSData* _secondData;
	NSData* _der;

}

@property (readonly) int type;                         //@synthesize type=_type - In the implementation block
@property (readonly) NSData * firstData;               //@synthesize firstData=_firstData - In the implementation block
@property (readonly) NSData * secondData;              //@synthesize secondData=_secondData - In the implementation block
@property (readonly) NSData * der;                     //@synthesize der=_der - In the implementation block
+(id)encodeToDERType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
+(id)messageWithDER:(id)arg1 error:(id*)arg2 ;
+(id)messageWithType:(int)arg1 data:(id)arg2 error:(id*)arg3 ;
+(id)messageWithType:(int)arg1 data:(id)arg2 secondData:(id)arg3 error:(id*)arg4 ;
+(id)messageWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
+(unsigned long long)encodedSizeType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(BOOL)inflatePartsOfEncoding:(id*)arg1 ;
-(id)initWithDER:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(NSData *)firstData;
-(NSData *)secondData;
-(NSData *)der;
-(int)type;
@end
