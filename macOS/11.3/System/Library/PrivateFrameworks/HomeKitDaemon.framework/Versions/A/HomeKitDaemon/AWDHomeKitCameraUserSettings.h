/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraUserSettings : PBCodable <NSCopying> {

	char _isImportingFromPhotoLibraryEnabled;
	char _isOwner;
	char _isSharingFaceClassificationsEnabled;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) char hasIsSharingFaceClassificationsEnabled; 
@property (assign,nonatomic) char isSharingFaceClassificationsEnabled;                 //@synthesize isSharingFaceClassificationsEnabled=_isSharingFaceClassificationsEnabled - In the implementation block
@property (assign,nonatomic) char hasIsImportingFromPhotoLibraryEnabled; 
@property (assign,nonatomic) char isImportingFromPhotoLibraryEnabled;                  //@synthesize isImportingFromPhotoLibraryEnabled=_isImportingFromPhotoLibraryEnabled - In the implementation block
@property (assign,nonatomic) char hasIsOwner; 
@property (assign,nonatomic) char isOwner;                                             //@synthesize isOwner=_isOwner - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)isOwner;
-(char)isImportingFromPhotoLibraryEnabled;
-(char)isSharingFaceClassificationsEnabled;
-(void)setIsSharingFaceClassificationsEnabled:(char)arg1 ;
-(void)setHasIsSharingFaceClassificationsEnabled:(char)arg1 ;
-(char)hasIsSharingFaceClassificationsEnabled;
-(void)setIsImportingFromPhotoLibraryEnabled:(char)arg1 ;
-(void)setHasIsImportingFromPhotoLibraryEnabled:(char)arg1 ;
-(char)hasIsImportingFromPhotoLibraryEnabled;
-(void)setIsOwner:(char)arg1 ;
-(void)setHasIsOwner:(char)arg1 ;
-(char)hasIsOwner;
@end

