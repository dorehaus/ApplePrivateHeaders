/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString;

@interface PLImageFormat : NSObject {

	char _isCropped;
	char _isAlwaysFullScreen;
	unsigned short _formatID;
	NSString* _name;
	double _dimension;
	long long _formatMode;
	long long _version;
	long long _thumbnailKind;
	CGSize _size;

}

@property (assign,nonatomic) unsigned short formatID;                        //@synthesize formatID=_formatID - In the implementation block
@property (assign,nonatomic) long long thumbnailKind;                        //@synthesize thumbnailKind=_thumbnailKind - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char isCropped;                               //@synthesize isCropped=_isCropped - In the implementation block
@property (nonatomic,readonly) double dimension;                             //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) long long formatMode;                         //@synthesize formatMode=_formatMode - In the implementation block
@property (nonatomic,readonly) char isSquare; 
@property (nonatomic,readonly) char dimensionsReferToShortSide; 
@property (nonatomic,readonly) char isTable; 
@property (nonatomic,readonly) char isThumbnail; 
@property (nonatomic,readonly) char isAlwaysFullScreen;                      //@synthesize isAlwaysFullScreen=_isAlwaysFullScreen - In the implementation block
@property (nonatomic,readonly) long long version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char refersToLatestVersion; 
@property (nonatomic,readonly) char refersToUnadjustedVersion; 
@property (nonatomic,readonly) char refersToPenultimateVersion; 
@property (nonatomic,readonly) char refersToOriginalVersion; 
+(id)_syncFormats;
+(id)formatWithID:(unsigned short)arg1 ;
-(long long)contentMode;
-(CGSize)sizeWithFallBackSize:(CGSize)arg1 ;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(long long)version;
-(double)dimension;
-(id)shortDescription;
-(unsigned short)formatID;
-(void)setFormatID:(unsigned short)arg1 ;
-(char)isEqualToFormat:(id)arg1 ;
-(char)isCropped;
-(char)isThumbnail;
-(char)isSquare;
-(long long)formatMode;
-(char)dimensionsReferToShortSide;
-(char)isTable;
-(char)_canDegradeToFormat:(id)arg1 ;
-(char)_isAcceptableForViewSize:(CGSize)arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(CGSize)arg4 demoteFactor:(double)arg5 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(char)arg3 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(char)arg3 version:(long long)arg4 isAlwaysFullScreen:(char)arg5 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(char)arg3 version:(long long)arg4 isAlwaysFullScreen:(char)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7 ;
-(id)initWithFormatID:(unsigned short)arg1 ;
-(char)refersToLatestVersion;
-(char)refersToUnadjustedVersion;
-(char)refersToPenultimateVersion;
-(char)refersToOriginalVersion;
-(unsigned long long)fullSizeDesiredLongSide;
-(unsigned long long)fullSizeMinShortSide;
-(unsigned long long)fullSizeMaxLongSide;
-(CGSize)_shortSideFormatScaledSizeForSourceSize:(CGSize)arg1 capLength:(char)arg2 ;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 ;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 capLength:(char)arg2 ;
-(id)thumbnailSpecification;
-(char)isAlwaysFullScreen;
-(long long)thumbnailKind;
-(void)setThumbnailKind:(long long)arg1 ;
@end

