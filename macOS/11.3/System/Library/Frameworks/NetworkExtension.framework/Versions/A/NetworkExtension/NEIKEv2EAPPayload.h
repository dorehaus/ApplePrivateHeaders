/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2EAPPayload : NEIKEv2Payload {

	NSData* _eapMessage;

}

@property (retain) NSData * eapMessage;              //@synthesize eapMessage=_eapMessage - In the implementation block
+(id)copyTypeDescription;
-(NSData *)eapMessage;
-(void)setEapMessage:(NSData *)arg1 ;
-(char)generatePayloadData;
-(char)parsePayloadData;
-(id)description;
-(unsigned long long)type;
-(char)hasRequiredFields;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end
