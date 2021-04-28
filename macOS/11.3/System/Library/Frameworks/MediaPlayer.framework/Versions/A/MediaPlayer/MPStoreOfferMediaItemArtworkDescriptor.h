/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSDictionary, NSArray, NSString;

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject <MPArtworkDataSourceVisualIdenticality> {

	long long _itemPersistentID;
	NSDictionary* _screenshotURLs;
	NSDictionary* _itemArtworkURLs;
	NSDictionary* _containerArtworkURLs;
	NSArray* _screenshotSizes;
	NSArray* _itemArtworkSizes;
	NSArray* _containerArtworkSizes;
	unsigned long long _hash;
	NSString* _cacheID;

}

@property (nonatomic,readonly) NSString * cacheID;                  //@synthesize cacheID=_cacheID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)stringRepresentation;
-(id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4 ;
-(id)artworkURLForSize:(CGSize)arg1 type:(long long)arg2 ;
-(id)availableSizesForArtworkOfType:(long long)arg1 ;
-(id)_preferredArtworkURLsForType:(long long)arg1 ;
-(id)_availableSizesForArtworkURLs:(id)arg1 ;
-(id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)arg1 ;
-(NSString *)cacheID;
@end
