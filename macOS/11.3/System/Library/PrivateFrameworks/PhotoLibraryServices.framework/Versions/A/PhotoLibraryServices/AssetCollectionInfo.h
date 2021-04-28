/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {

	char _isMine;
	char _isVideo;
	char _isPhotoIris;
	char _isDeletable;
	unsigned short _playbackVariation;
	NSString* _GUID;
	NSString* _personID;
	NSDictionary* _metaData;
	NSNumber* _width;
	NSNumber* _height;
	NSDate* _timestamp;
	NSString* _derivativeUTI;

}

@property (getter=UID,nonatomic,readonly) NSString * GUID;                    //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * personID;                           //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) char isMine;                                   //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) char isVideo;                                  //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) char isPhotoIris;                              //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) unsigned short playbackVariation;              //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,readonly) char isDeletable;                              //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,readonly) NSDictionary * metaData;                       //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,readonly) NSNumber * width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSNumber * height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSString * derivativeUTI;                      //@synthesize derivativeUTI=_derivativeUTI - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isDeletable;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSDate *)timestamp;
-(NSDictionary *)metaData;
-(NSString *)GUID;
-(NSString *)personID;
-(char)isVideo;
-(unsigned short)playbackVariation;
-(char)isPhotoIris;
-(char)isMine;
-(NSString *)derivativeUTI;
-(id)initWithAssetCollection:(id)arg1 ;
@end

