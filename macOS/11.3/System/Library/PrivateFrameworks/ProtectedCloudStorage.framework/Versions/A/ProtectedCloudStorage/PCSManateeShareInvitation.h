/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Versions/A/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PCSManateeShareInvitation : PBCodable <NSCopying> {

	NSData* _exportedPCSData;
	NSData* _shareePublicKeyData;

}

@property (nonatomic,readonly) char hasExportedPCSData; 
@property (nonatomic,retain) NSData * exportedPCSData;                   //@synthesize exportedPCSData=_exportedPCSData - In the implementation block
@property (nonatomic,readonly) char hasShareePublicKeyData; 
@property (nonatomic,retain) NSData * shareePublicKeyData;               //@synthesize shareePublicKeyData=_shareePublicKeyData - In the implementation block
-(char)hasExportedPCSData;
-(NSData *)exportedPCSData;
-(void)setExportedPCSData:(NSData *)arg1 ;
-(void)setShareePublicKeyData:(NSData *)arg1 ;
-(char)hasShareePublicKeyData;
-(NSData *)shareePublicKeyData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

