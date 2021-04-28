/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString, NSArray, ICStoreArtworkInfo;

@interface MPExportableArtworkProperties : NSObject {

	NSString* _resolvedURLString;
	NSArray* _artworkTemplateItems;
	unsigned long long _mediaType;
	long long _mediaLibraryArtworkType;

}

@property (nonatomic,readonly) ICStoreArtworkInfo * artworkInfo; 
@property (nonatomic,copy) NSString * resolvedURLString;                      //@synthesize resolvedURLString=_resolvedURLString - In the implementation block
@property (nonatomic,copy) NSArray * artworkTemplateItems;                    //@synthesize artworkTemplateItems=_artworkTemplateItems - In the implementation block
@property (assign,nonatomic) unsigned long long mediaType;                    //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long mediaLibraryArtworkType;               //@synthesize mediaLibraryArtworkType=_mediaLibraryArtworkType - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isValid;
-(unsigned long long)mediaType;
-(void)setMediaType:(unsigned long long)arg1 ;
-(ICStoreArtworkInfo *)artworkInfo;
-(NSString *)resolvedURLString;
-(void)setResolvedURLString:(NSString *)arg1 ;
-(NSArray *)artworkTemplateItems;
-(void)setArtworkTemplateItems:(NSArray *)arg1 ;
-(long long)mediaLibraryArtworkType;
-(void)setMediaLibraryArtworkType:(long long)arg1 ;
@end

