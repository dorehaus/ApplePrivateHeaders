/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying> {

	long long _requestedSize;
	long long _uploadedSize;
	NSString* _uploadReceipt;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) char hasRequestedSize; 
@property (assign,nonatomic) long long requestedSize;               //@synthesize requestedSize=_requestedSize - In the implementation block
@property (assign,nonatomic) char hasUploadedSize; 
@property (assign,nonatomic) long long uploadedSize;                //@synthesize uploadedSize=_uploadedSize - In the implementation block
@property (nonatomic,readonly) char hasUploadReceipt; 
@property (nonatomic,retain) NSString * uploadReceipt;              //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(long long)requestedSize;
-(void)setRequestedSize:(long long)arg1 ;
-(void)setHasRequestedSize:(char)arg1 ;
-(char)hasRequestedSize;
-(void)setUploadedSize:(long long)arg1 ;
-(void)setHasUploadedSize:(char)arg1 ;
-(char)hasUploadedSize;
-(char)hasUploadReceipt;
-(long long)uploadedSize;
@end

