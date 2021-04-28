/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDate;

@interface MOMediaItem : NSObject <NSCopying> {

	NSURL* _url;
	unsigned long long _urlHash;
	NSString* _urlNormaliseString;
	char _isRemote;
	char _reloading;
	char _needsReload;
	NSString* _filename;
	unsigned long long _type;
	double _aspectRatio;
	NSDate* _creationDate;
	NSString* _title;
	CGSize _bestResolution;

}

@property (nonatomic,retain,readonly) NSString * accessibilityLabel; 
@property (nonatomic,retain,readonly) NSString * accessibilityRoleDescription; 
@property (nonatomic,readonly) NSString * urlNormaliseString; 
@property (assign) char needsReload;                                                        //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double aspectRatio;                                            //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) CGSize bestResolution;                                         //@synthesize bestResolution=_bestResolution - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * filename;                                             //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
+(id)operationWithBlock:(/*^block*/id)arg1 cancellationBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)urlForScheme:(id)arg1 host:(id)arg2 path:(id)arg3 ;
+(id)urlForScheme:(id)arg1 host:(id)arg2 pathComponents:(id)arg3 ;
+(id)cloudThumbnailWithSize:(CGSize)arg1 andColorSpace:(id)arg2 cooked:(char*)arg3 ;
+(id)unsupportedThumbnailWithSize:(CGSize)arg1 andColorSpace:(id)arg2 cooked:(char*)arg3 ;
+(id)thumbnailImagesOperationForMediaItems:(id)arg1 withResolution:(unsigned long long)arg2 mode:(unsigned long long)arg3 placeholder:(char)arg4 colorSpace:(id)arg5 andCompletionHandler:(/*^block*/id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)type;
-(NSURL *)url;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(char)isRemote;
-(NSDate *)creationDate;
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityRoleDescription;
-(void)setAspectRatio:(double)arg1 ;
-(double)aspectRatio;
-(void)_reloadProperties;
-(void)invalidate:(char)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(unsigned long long)thumbnailVersion;
-(void)setNeedsReload:(char)arg1 ;
-(char)needsReload;
-(NSString *)urlNormaliseString;
-(void)_reloadPropertiesIfNeeded;
-(CGSize)bestResolution;
-(char)wantsMondrianMemoryCaches:(unsigned long long)arg1 ;
-(unsigned long long)bestResolutionForSize:(CGSize)arg1 scale:(double)arg2 quality:(double)arg3 align:(char)arg4 ;
-(CGRect)thumbnailContentRectForReason:(unsigned long long)arg1 size:(CGSize)arg2 ;
-(char)thumbnailIsRoundedForReason:(unsigned long long)arg1 ;
-(id)thumbnailImageOperationForResolution:(unsigned long long)arg1 size:(CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(char)arg5 colorSpace:(id)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(id)thumbnailImageForResolution:(unsigned long long)arg1 ;
-(id)thumbnailImageForResolution:(unsigned long long)arg1 size:(CGSize)arg2 mode:(unsigned long long)arg3 colorSpace:(id)arg4 cooked:(char*)arg5 ;
-(id)thumbnailImageForResolution:(unsigned long long)arg1 size:(CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(char)arg5 colorSpace:(id)arg6 cooked:(char*)arg7 ;
-(char)hasThumbnailImageReadyForResolution:(unsigned long long)arg1 size:(CGSize)arg2 mode:(unsigned long long)arg3 colorSpace:(id)arg4 readyImage:(out id*)arg5 readyImageCooked:(out char*)arg6 ;
-(char)hasThumbnailImageReadyForResolution:(unsigned long long)arg1 size:(CGSize)arg2 mode:(unsigned long long)arg3 colorSpace:(id)arg4 ;
-(char)hasThumbnailImageReadyForResolution:(unsigned long long)arg1 ;
-(long long)compareForThumbnailOrdering:(id)arg1 resolution:(unsigned long long)arg2 direction:(unsigned long long)arg3 pivot:(id)arg4 ;
-(void)setBestResolution:(CGSize)arg1 ;
@end

