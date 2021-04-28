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

@class CLPLocation, NSString;

@interface CLPCellOutOfServiceInfo : PBCodable <NSCopying> {

	CLPLocation* _location;
	NSString* _serviceProviderName;

}

@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) CLPLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) char hasServiceProviderName; 
@property (nonatomic,retain) NSString * serviceProviderName;              //@synthesize serviceProviderName=_serviceProviderName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CLPLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasLocation;
-(void)setServiceProviderName:(NSString *)arg1 ;
-(char)hasServiceProviderName;
-(NSString *)serviceProviderName;
@end

