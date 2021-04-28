/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookKitFoundation.framework/Versions/A/BookKitFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookKitFoundation/BKAssetMetadata.h>

@interface BKMutableAssetMetadata : BKAssetMetadata
+(id)_reconcileAudiobookDurationForAsset:(id)arg1 ;
+(void)_reconcileAudiobookBookmarkForAsset:(id)arg1 ;
-(void)setYear:(id)arg1 ;
-(void)setUrl:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setFormat:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setLocked:(char)arg1 ;
-(void)setThumbnail:(id)arg1 ;
-(void)setAccountID:(id)arg1 ;
-(void)setModificationDate:(id)arg1 ;
-(void)setPageCount:(unsigned long long)arg1 ;
-(void)setRating:(id)arg1 ;
-(void)setProducer:(id)arg1 ;
-(void)setGenre:(id)arg1 ;
-(void)setUploadError:(id)arg1 ;
-(void)setComments:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(void)setSourceURL:(id)arg1 ;
-(void)setInsertionDate:(id)arg1 ;
-(void)setExplicit:(char)arg1 ;
-(void)setReleaseDate:(id)arg1 ;
-(void)setSortTitle:(id)arg1 ;
-(void)setVersionNumber:(id)arg1 ;
-(void)setArtistName:(id)arg1 ;
-(void)setItemName:(id)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(void)setDiscNumber:(long long)arg1 ;
-(void)setTrackNumber:(long long)arg1 ;
-(void)setMimeType:(id)arg1 ;
-(void)setStoreID:(id)arg1 ;
-(void)setPreview:(char)arg1 ;
-(void)setAssetDescription:(id)arg1 ;
-(void)setAssetID:(id)arg1 ;
-(void)setGenerationCount:(unsigned long long)arg1 ;
-(void)setCoverImagePath:(id)arg1 ;
-(void)setAllocatedSize:(unsigned long long)arg1 ;
-(void)combineWithMetadata:(id)arg1 ;
-(void)setHasPendingUpdates:(char)arg1 ;
-(void)setWasRedacted:(char)arg1 ;
-(void)setTrashedURL:(id)arg1 ;
-(void)setPreviousURL:(id)arg1 ;
-(void)setCoverImageData:(id)arg1 ;
-(void)setCoverImageDataReplaced:(id)arg1 ;
-(void)setGeneratedID:(id)arg1 ;
-(void)setSortAuthor:(id)arg1 ;
-(void)setBookDescription:(id)arg1 ;
-(void)setLastOpened:(id)arg1 ;
-(void)setFirstOpened:(id)arg1 ;
-(void)setUpdateDate:(id)arg1 ;
-(void)setTrackTitle:(id)arg1 ;
-(void)setChapterTimes:(id)arg1 ;
-(id)initWithURL:(id)arg1 dictionary:(id)arg2 validate:(char)arg3 ;
-(void)addAggregatePart:(id)arg1 ;
-(id)removeAggregatePart:(id)arg1 ;
-(void)_reconcileAudiobookAllocatedSize;
-(void)setPackageHash:(id)arg1 ;
-(void)removeAggregatePartAtIndex:(unsigned long long)arg1 ;
-(void)applySinfProperties:(id)arg1 ;
-(void)setPermlink:(id)arg1 ;
-(void)replaceAggregatePart:(id)arg1 withMetadata:(id)arg2 ;
-(void)setBookmarkTime:(double)arg1 updatedDate:(id)arg2 ;
@end

