/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HAPBTLETransactionIdentifier : HMFObject {

	unsigned char _unsignedCharValue;

}

@property (nonatomic,readonly) unsigned char unsignedCharValue;              //@synthesize unsignedCharValue=_unsignedCharValue - In the implementation block
+(unsigned char)generateRequestIdentifier;
+(id)randomTransactionIdentifier;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned char)unsignedCharValue;
-(id)shortDescription;
-(id)descriptionWithPointer:(char)arg1 ;
-(id)initWithUnsignedCharValue:(unsigned char)arg1 ;
@end

