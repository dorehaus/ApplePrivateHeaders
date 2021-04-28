/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface ASTSealablePayload : NSObject {

	char _sealed;
	NSData* _payload;
	NSString* _base64Signature;
	NSData* _signature;

}

@property (retain) NSData * payload;                        //@synthesize payload=_payload - In the implementation block
@property (retain) NSString * base64Signature;              //@synthesize base64Signature=_base64Signature - In the implementation block
@property (retain) NSData * signature;                      //@synthesize signature=_signature - In the implementation block
@property (getter=isSealed) char sealed;                    //@synthesize sealed=_sealed - In the implementation block
-(id)description;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(char)isSealed;
-(id)generatePayload;
-(NSString *)base64Signature;
-(char)sealWithPayloadSigner:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setBase64Signature:(NSString *)arg1 ;
-(void)setSealed:(char)arg1 ;
-(id)initWithPayload:(id)arg1 signature:(id)arg2 ;
-(id)sealedDescription;
@end

