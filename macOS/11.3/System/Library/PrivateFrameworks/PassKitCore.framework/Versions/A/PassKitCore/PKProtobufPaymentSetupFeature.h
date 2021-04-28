/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKProtobufPaymentSetupFeature : PBCodable <NSCopying> {

	unsigned long long _state;
	unsigned long long _type;
	SCD_Struct_PK8 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasState; 
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(unsigned long long)type;
-(void)setState:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(char)hasState;
-(void)setHasState:(char)arg1 ;
@end

