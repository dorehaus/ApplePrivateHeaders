/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVSignedNumberValue, HAPCharacteristicValueTransitionTypesWrapper, NSString;

@interface HAPSupportedCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVSignedNumberValue* _HAPInstanceID;
	HAPCharacteristicValueTransitionTypesWrapper* _transitionTypes;

}

@property (nonatomic,retain) HAPTLVSignedNumberValue * HAPInstanceID;                                     //@synthesize HAPInstanceID=_HAPInstanceID - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionTypesWrapper * transitionTypes;              //@synthesize transitionTypes=_transitionTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(char)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setHAPInstanceID:(HAPTLVSignedNumberValue *)arg1 ;
-(HAPTLVSignedNumberValue *)HAPInstanceID;
-(void)setTransitionTypes:(HAPCharacteristicValueTransitionTypesWrapper *)arg1 ;
-(HAPCharacteristicValueTransitionTypesWrapper *)transitionTypes;
-(id)initWithHAPInstanceID:(id)arg1 transitionTypes:(id)arg2 ;
@end

