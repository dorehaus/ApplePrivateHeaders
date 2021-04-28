/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPPressureCollectionResponse : PBCodable <NSCopying> {

	NSString* _msg;
	char _success;

}

@property (assign,nonatomic) char success;                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) char hasMsg; 
@property (nonatomic,retain) NSString * msg;              //@synthesize msg=_msg - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)success;
-(void)setSuccess:(char)arg1 ;
-(void)setMsg:(NSString *)arg1 ;
-(char)hasMsg;
-(NSString *)msg;
@end

