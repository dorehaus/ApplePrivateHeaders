/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSData;

@interface CSAdBlockerAssetDecoderV1 : NSObject {

	float _maxFingerprintBufferSize;
	NSMutableDictionary* _shouldResetAdsDictionary;
	NSData* _payloadData;

}

@property (nonatomic,retain) NSData * payloadData;                                          //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,readonly) float maxFingerprintBufferSize;                              //@synthesize maxFingerprintBufferSize=_maxFingerprintBufferSize - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * shouldResetAdsDictionary;              //@synthesize shouldResetAdsDictionary=_shouldResetAdsDictionary - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)decodeAsset;
-(float)maxFingerprintBufferSize;
-(NSMutableDictionary *)shouldResetAdsDictionary;
-(NSData *)payloadData;
-(void)setPayloadData:(NSData *)arg1 ;
@end

