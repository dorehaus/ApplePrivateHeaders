/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {

	NEIKEv2Identifier* _identifier;

}

@property (retain) NEIKEv2Identifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)copyTypeDescription;
-(char)generatePayloadData;
-(char)parsePayloadData;
-(id)description;
-(NEIKEv2Identifier *)identifier;
-(void)setIdentifier:(NEIKEv2Identifier *)arg1 ;
-(char)hasRequiredFields;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end

